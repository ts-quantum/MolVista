import pyvista as pv
pv.global_theme.allow_empty_mesh = True
import numpy as np, os
from PySide6.QtCore import QThread, Signal
from concurrent.futures import ProcessPoolExecutor
from concurrent.futures import as_completed

from scipy.spatial.distance import cdist
from scipy.optimize import linear_sum_assignment

import math
import os

###### DRAW ########
def get_radius_by_group(atomic_number):
    # Definition of Atom Radii
    groups = {
        (1, 1): 0.2,    # Hydrogen
        (2, 2): 0.2,    # Helium
        (3, 10): 0.35,   # 2. Period (Li to Ne)
        (11, 18): 0.45,  # 3. Period (Na to Ar)
        (19, 36): 0.55,  # 4. Period (K to Kr)
        (37, 54): 0.65,  # 5. Period (Rb to Xe)
        (55, 86): 0.75, # 6. Period (Cs-Rn, incl. Pt, Au)
    }
    
    for (start, end), radius in groups.items():
        if start <= atomic_number <= end:
            return radius
    return 0.3  # Default value

def draw_mol(atom_points, atom_types, cpk_colors, cov_radii, default_radius, highlight_ids=[]):
    visual_objects = []
    atoms_poly = pv.PolyData(atom_points)
    
    # 1. Generate a luminosity mask for highlights
    is_highlighted = np.zeros(len(atom_points), dtype=bool)
    if highlight_ids:
        is_highlighted[highlight_ids] = True

    # 2. Loop over all Atom Types
    unique_types = np.unique(atom_types)
    for at_type in unique_types:
        r = get_radius_by_group(at_type)
        sphere_source = pv.Sphere(radius=r, theta_resolution=20, phi_resolution=20)
        
        # A) Regular Atoms (not masked)
        mask_normal = (atom_types == at_type) & (~is_highlighted)
        if np.any(mask_normal):
            sub_atoms = atoms_poly.extract_points(mask_normal)
            glyphs = sub_atoms.glyph(geom=sphere_source, scale=False, orient=False)
            color = cpk_colors.get(at_type, "#FFFFFF")
            visual_objects.append((glyphs, {"color": color, "specular": 0.5}))

        # B) Masked Atoms (Highlight)
        mask_highlight = (atom_types == at_type) & (is_highlighted)
        if np.any(mask_highlight):
            sub_atoms = atoms_poly.extract_points(mask_highlight)
            glyphs = sub_atoms.glyph(geom=sphere_source, scale=False, orient=False)
            visual_objects.append((glyphs, {"color": "#FFFF00", "specular": 0.5})) # Gelb

    # --- Bonds 

    lines = []
    for i in range(len(atom_points)):
        type_i = int(atom_types[i])
        rad_i = cov_radii.get(type_i, default_radius)
        for j in range(i + 1, len(atom_points)):
            type_j = int(atom_types[j])
            rad_j = cov_radii.get(type_j, default_radius) 
            dist = np.linalg.norm(atom_points[i] - atom_points[j])
            bd_threshold = rad_i + rad_j + 0.6
            if 0.6 < dist < bd_threshold:
                # only indices of linked points are saved
                lines.append([2, i, j]) # 2: line conects two points      
    tubes = None
    if lines:
        # Create PolyData-Object for lines
        bonds_poly = pv.PolyData(atom_points)
        bonds_poly.lines = np.hstack(lines)
        # convert lines into tubes
        tubes = bonds_poly.tube(radius=0.06)
        visual_objects.append((tubes, {"color": "lightgray", "specular": 0.3}))
    
    return visual_objects

###### ALIGNMENT ######
def align_structures(ref_coords, target_coords):
    """Aligns target_coords with ref_coords"""
    # 1.  Centering (Translation to the center of mass).
    centroid_ref = np.mean(ref_coords, axis=0)
    centroid_target = np.mean(target_coords, axis=0)
    
    ref_centered = ref_coords - centroid_ref
    target_centered = target_coords - centroid_target

    # 2. Covariance matrix calculation
    h = target_centered.T @ ref_centered

    # 3. Singular Value Decomposition (SVD)
    u, s, vt = np.linalg.svd(h)
    
    # 4. Calculate Rotation matrix
    r = vt.T @ u.T

    # Special Case: correct for mirroring (Determinant must be 1)
    if np.linalg.det(r) < 0:
        vt[-1, :] *= -1
        r = vt.T @ u.T

    # 5. Calculate transformed coordinates
    aligned_coords = (target_centered @ r.T) + centroid_ref
    
    return aligned_coords, r, centroid_ref,  centroid_target

def get_euler_angles(R):
        """
        Extracts Euler angles (XYZ) from a 3x3 rotation matrix R.
        Returns angles in degrees.
        """
        # Calculation of Beta (Y-Axis)
        sy = math.sqrt(R[0,0] * R[0,0] + R[1,0] * R[1,0])
        singular = sy < 1e-6

        if not singular:
            x = math.atan2(R[2,1], R[2,2])
            y = math.atan2(-R[2,0], sy)
            z = math.atan2(R[1,0], R[0,0])
        else:
            # Special Case (Gimbal Lock)
            x = math.atan2(-R[1,2], R[1,1])
            y = math.atan2(-R[2,0], sy)
            z = 0

        # Convert to "°" "Grad"
        return [math.degrees(x), math.degrees(y), math.degrees(z)]

# regular Alignment (no masking)
def find_best_flip_strategy(data0, data1):
        """
        Checks all 4 possible start/end combinations to find the best 
        chronological alignment, including automatic atom mapping.
        """
        # Define the 4 possible connection points
        combinations = [
            ("normal",    data0.atom_points[-1], data1.atom_points[0]),
            ("flip_1",    data0.atom_points[-1], data1.atom_points[-1]),
            ("flip_0",    data0.atom_points[0],  data1.atom_points[0]),
            ("flip_both", data0.atom_points[0],  data1.atom_points[-1])
        ]
        
        best_rmsd = float('inf')
        best_case = "normal"
        best_mapping = None

        for case, c0, c1 in combinations:
            # Perform atom mapping for the current geometry pair
            # This handles different atom orderings automatically
            mapping = find_mapping(c0, c1, data0.atom_types[0], data1.atom_types[0])
            
            # Calculate RMSD after a temporary Kabsch alignment to verify the fit
            _, R, cent0, cent1 = align_structures(c0, c1[mapping])
            
            # Transform the target coordinates to the reference frame for RMSD check
            aligned_c1 = (c1[mapping] - cent1) @ R + cent0
            rmsd = np.sqrt(np.mean(np.sum((c0 - aligned_c1)**2, axis=1)))
            
            if rmsd < best_rmsd:
                best_rmsd = rmsd
                best_case = case
                best_mapping = mapping

        return best_case, best_mapping, best_rmsd

def transform_trajectory(trajectory_coords, r_matrix, ref_centroid, target_centroid):
    """Applies Transformation on whole trajectory"""
    transformed_traj = []
    for coords in trajectory_coords:
        # 1. Shift to origin (relative to the original target center of gravity).
        centered = np.array(coords) - target_centroid
        # 2. Rotate and shift to the new reference center of gravity
        new_coords = (centered @ r_matrix.T) + ref_centroid
        transformed_traj.append(new_coords.tolist())
    return transformed_traj

def get_min_rmsd_kabsch(coords_A, coords_B):
        """
        Does temporary Kabsch Alignment and returns min.
        RMSD (Root Mean Square Deviation)
        """
        # 1. Center both point sets
        centroid_A = np.mean(coords_A, axis=0)
        centroid_B = np.mean(coords_B, axis=0)
        A_centered = coords_A - centroid_A
        B_centered = coords_B - centroid_B

        # 2. calculate Kabsch-Rotation 
        H = A_centered.T @ B_centered
        U, S, Vt = np.linalg.svd(H)
        R = Vt.T @ U.T

        # Special Case, prevent mirroring
        if np.linalg.det(R) < 0:
            Vt[-1, :] *= -1
            R = Vt.T @ U.T

        # 3. Transform and calculate RMSD
        B_rotated = B_centered @ R
        rmsd = np.sqrt(np.mean(np.sum((A_centered - B_rotated)**2, axis=1)))
        return rmsd

# masked Alignment
def find_mapping(coords_ref, coords_target, types_ref, types_target):
        """
        Finds the optimal assignment (permutation) between two point clouds.
        Based on internal distance fingerprints (rotation-invariant).

        Args:
            coords_ref (np.array): (N, 3) coordinates of the reference framework.
            coords_target (np.array): (N, 3) coordinates of the framework to be mapped.
            types_ref (list/np.array): Atom types (elements) of the reference framework.
            types_target (list/np.array): Atom types of the target framework.
            
        Returns:
            np.array: Index vector to be applied to coords_target.
        """
        # 1. Calculate distance matrices (distances between every atom pair within each system)
        dists_ref = cdist(coords_ref, coords_ref)
        dists_target = cdist(coords_target, coords_target)
        
        # 2. Create fingerprints: Sorted distances for each atom
        # This makes the signature invariant to both indexing and rotation
        sig_ref = np.sort(dists_ref, axis=1)
        sig_target = np.sort(dists_target, axis=1)
        
        # 3. Calculate cost matrix: How similar are the fingerprints?
        # Compare signature of atom i (Ref) with atom j (Target)
        cost_matrix = cdist(sig_ref, sig_target, metric='euclidean')
        
        # 4. Implement type constraints (element validation)
        # If elements do not match, set the cost extremely high to penalize the pairing
        for i in range(len(types_ref)):
            for j in range(len(types_target)):
                if str(types_ref[i]) != str(types_target[j]):
                    cost_matrix[i, j] += 1e6  # Prevents incorrect mapping across different elements

        # 5. Apply the Hungarian Algorithm (Kuhn-Munkres)
        # Finds the pairing that minimizes the total cost (structural differences)
        _, col_ind = linear_sum_assignment(cost_matrix)
        
        return col_ind

def transform_trajectory_masked(trajectory_coords, r_matrix, ref_centroid, target_centroid):
    transformed_traj = []
    for coords in trajectory_coords:
        # 1. Center relative to rigid backbone mass center
        centered = np.array(coords) - target_centroid
        
        # 2. Rotate using transposed matrix and center with respect to backbone of path 1
        new_coords = (centered @ r_matrix.T) + ref_centroid
        
        transformed_traj.append(new_coords)
    return transformed_traj

def create_smooth_transition(p0, p1, t0, t1, mapping_pair, steps=15):
    indices0, sorted_indices1 = mapping_pair
    transition_points = []
    transition_types = []
    
    # identify fragment indices 
    # p0 uses indices0, p1 uses sorted_indices1
    frag0_idx = [i for i in range(len(t0)) if i not in indices0]
    frag1_idx = [i for i in range(len(t1)) if i not in sorted_indices1]
    
    # determine direction for phase out (based on p0)
    # use mass center of backbone (from segment 0) as anchor
    geruest_center = np.mean(p0[indices0], axis=0)

    # Direction: from backbone to mass center of mobile fragment
    if len(frag0_idx) > 0:
        frag_center = np.mean(p0[frag0_idx], axis=0)
        direction = (frag_center - geruest_center)
        direction = (direction / np.linalg.norm(direction)) * 10.0 # move 10 Angstrom away
    else:
        direction = np.array([0, 10, 0]) # Fallback if no fragment

    # PHASE OUT: Fragment 0
    # backbone remains at position p0
    for i in range(steps):
        t = i / (steps - 1)
        new_frame = np.array(p0, copy=True)
        if len(frag0_idx) > 0:
            new_frame[frag0_idx] += direction * t
        
        transition_points.append(new_frame)
        transition_types.append(list(t0)) # Types of Segment 0

    # PHASE IN: Fragment 1 
    # use p1 as basis (is already rotated/aligned)
    # use same direction as before (reversed)
    for i in range(steps):
        t = 1.0 - (i / (steps - 1))
        new_frame = np.array(p1, copy=True)
        if len(frag1_idx) > 0:
            new_frame[frag1_idx] += direction * t 
        
        transition_points.append(new_frame)
        transition_types.append(list(t1)) # Types of Segment 1
        
    return transition_points, transition_types

###### EXPORT #########
def export_pov_header(length, filename="test.inc", object_name="name"):

    with open(filename, 'w') as f:
        f.write(f"""\
// created with MolVista by Dr. Tobias Schulz
// IRC Trajectory as Array of Molecules
// #include "{object_name}.inc" into povray
// ---- use "object{{{object_name}[i]}}" in code
//declare molecule object array
#declare {object_name} = array[{length+1}];
//
// ---- Atom and Bond Section
//transparency
#declare trans_bd = 0;
#declare trans_atom = 0;
//atom radius
#declare atom_rad_h = 0.24;
#declare atom_rad_2 = 0.35;
#declare atom_rad_3 = 0.42;
#declare atom_rad_def = 0.5;
#declare bond_rad = 0.08;
// predefined finishes:
#declare Fin_Glassy   = finish {{ phong 0.9 specular 0.8 reflection 0.1 roughness 0.001 }}
#declare Fin_Metallic = finish {{ phong 0.5 metallic 0.7 brilliance 2.0 diffuse 0.3 }}
#declare Fin_Matte    = finish {{ phong 0.0 ambient 0.1 diffuse 0.8 }}
// Define Bond Finishes
#declare Fin_Bd_Std = finish {{ phong 0.2 ambient 0.2 }}
// Select bond Finish
#declare BdFinish = Fin_Bd_Std;
// Definde Atom finishes
#declare Fin_Atom_Std = finish {{ phong 0.6 specular 0.4 ambient 0.2 }}
// select Atom Finish
#declare AtomFinish = Fin_Atom_Std;
///////////////////////////////////
        """) 

def export_pov_mol(points, atom_types,cov_radii=None, default_radius=None, 
                   
                   cpk_colors=None,filename="test.inc", object_name="name", idx=0):
    #AtomsGroup
    with open(filename, 'a') as f:
        f.write(f"//Begin of Section {idx}  \n")
        f.write(f"#declare AtomsGroup_{idx} = union {{\n")
        for i, pos in enumerate(points):
            val = int(atom_types[i])
            # get colors from Color Dictionary
            color_name = cpk_colors.get(val, "magenta")
            # Conversion of Names to RGB for POV-Ray 
            rgb = {"white": "<1,1,1>", "gray": "<.3,.3,.3>", "blue": "<0,0,1>", 
                "red": "<1,0,0>", "orange": "<1, 0.55, 0>", "yellow": "<1,1,0>", 
                "brown": "<1,0.65,0>", "darkred": "<0.5,0,0>", "green": "<0, 0.82,0>"}.get(color_name, "<1,0,1>")

            atomic_num = int(atom_types[i])
            match atomic_num:
                case 1: # Hydrogen
                    rad_var = "atom_rad_h"
                case _ if 3 <= atomic_num <= 10: # 2nd period (He-Ne)
                    rad_var = "atom_rad_2"
                case _ if 11 <= atomic_num <= 18: # 3rd period (Na-Ar)
                    rad_var = "atom_rad_3"
                case _: # every other element
                    rad_var = "atom_rad_def"

            f.write(f"  sphere {{ <{pos[0]:.4f}, {pos[1]:.4f}, {pos[2]:.4f}>, {rad_var}\n")
            f.write(f"    pigment {{ color rgb {rgb} filter trans_atom }}\n")
            f.write("    finish { AtomFinish }\n")
            f.write("  }\n")
        f.write("}\n")
    #BondsGroup
    with open(filename, 'a') as f:
        f.write(f"#declare BondsGroup_{idx} = union {{\n")
        for i in range(len(points)):
            type_i = int(atom_types[i])
            rad_i = cov_radii.get(type_i, default_radius)
            for j in range(i + 1, len(points)):
                type_j = int(atom_types[j])
                rad_j = cov_radii.get(type_j, default_radius) 
                bd_threshold = rad_i + rad_j + 0.6
                dist = np.linalg.norm(points[i] - points[j])
                # Threshold for Bonds in Angstrom
                if 0.6 < dist < bd_threshold:
                    p1 = points[i]
                    p2 = points[j]
                    f.write(f"  cylinder {{ <{p1[0]:.4f}, {p1[1]:.4f}, {p1[2]:.4f}>, "
                            f"<{p2[0]:.4f}, {p2[1]:.4f}, {p2[2]:.4f}>, bond_rad\n")
                    f.write("    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }\n")
                    f.write("    finish { BdFinish }\n")
                    f.write("  }\n")
        f.write("}\n")
# combine all objects
    with open(filename, 'a') as f:
        f.write(f"""\
// Combine Atoms, Bonds and Mesh 
#declare {object_name}[{idx}] = union {{
    object {{AtomsGroup_{idx}}}
    object {{BondsGroup_{idx}}}
}}
// End of Section {idx}
        """)

### XYZ Split Script ####
def create_split_template(xyz_path):
    """
    Creates a pre-configured Python script (_split.py) in the same directory
    as the exported XYZ file for further batch processing.
    """
    if not xyz_path:
        return

    work_dir = os.path.dirname(xyz_path)
    xyz_filename = os.path.basename(xyz_path)
    # Name des Hilfsskripts basierend auf der XYZ-Datei
    script_name = os.path.join(work_dir, f"{os.path.splitext(xyz_filename)[0]}_split.py")

    # Das Template als String (mit Platzhaltern)
    template_content = f"""import os

# --- CONFIGURATION: ADJUST BEFORE RUNNING ---
XYZ_INPUT = "{xyz_filename}.xyz"  # The trajectory to split
CHARGE = 0
MULT = 1
ORCA_EXE = "/usr/local/orca_6_1_0/orca"
ORCA_2MKL = "/usr/local/orca_6_1_0/orca_2mkl"

# Custom Header (Edit method, basis set, etc. here)
ORCA_HEADER = \"\"\"! HF 6-31G
%maxcore 1200
%pal nprocs 8 end
\"\"\"

def run_split():
    if not os.path.exists(XYZ_INPUT):
        print(f"Error: {{XYZ_INPUT}} not found.")
        return

    with open(XYZ_INPUT, 'r') as f:
        lines = f.readlines()

    try:
        num_atoms = int(lines[0].strip())
    except:
        print("Error: Invalid XYZ format.")
        return

    block_size = num_atoms + 2
    steps = len(lines) // block_size
    base = os.path.splitext(XYZ_INPUT)[0]
    wrapper_name = f"run_{{base}}_batch.sh"

    with open(wrapper_name, 'w') as w:
        w.write("#!/bin/bash\\n\\n")
        for i in range(steps):
            label = f"{{base}}_{{i:03d}}"
            inp = f"{{label}}.inp"
            out = f"{{label}}.out"
            
            # Write single point input
            with open(inp, 'w') as f_inp:
                f_inp.write(ORCA_HEADER)
                f_inp.write(f"* xyz {{CHARGE}} {{MULT}}\\n")
                f_inp.writelines(lines[i*block_size + 2 : (i+1)*block_size])
                f_inp.write("*\\n")
            
            # Commands for shell script
            w.write(f"{{ORCA_EXE}} {{inp}} > {{out}} 2>&1 && \\\\\\n")
            w.write(f"{{ORCA_2MKL}} {{label}} -molden && \\\\\\n")
            w.write(f"mv {{label}}.molden.input {{label}}.molden && \\\\\\n")
            w.write(f"echo 'Frame {{i:03d}} finished.'\\n\\n")

    os.chmod(wrapper_name, 0o755)
    print(f"Done. Created {{steps}} inputs and shell script: {{wrapper_name}}")

if __name__ == "__main__":
    run_split()
"""
    with open(script_name, 'w', encoding='utf-8') as f:
        f.write(template_content)
    return script_name

#### draw for blender export:
def draw_mol_bld(atom_points, atom_types, cpk_colors=None, cov_radii=None, default_radius=None):
    all_parts = []
    # create PolyData-Object from all points
    atoms_poly = pv.PolyData(atom_points)
    # add atom-tpye as scalar for coloring
    atoms_poly.point_data["colors"] = atom_types
    #sphere as template
    #sphere_source = pv.Sphere(radius=0.3, theta_resolution=20, phi_resolution=20)
    # color mapping:
    # glyph object contains original atom IDs, Lookup Table (LUT) can be used
    # loop over type  
    u_types = np.unique(atom_types)
    for atom_type in u_types:
        color = cpk_colors[atom_type]
        mask = atom_types == atom_type
        if np.any(mask):
            sub_atoms = atoms_poly.extract_points(mask)
            r=get_radius_by_group(atom_type)
            sphere_source = pv.Sphere(radius=r, theta_resolution=20, phi_resolution=20)   
            glyphs = sub_atoms.glyph(geom=sphere_source, scale=False, orient=False)
            
            rgb = (np.array(pv.Color(color).float_rgb) * 255).astype(np.uint8)
            colors_array = np.tile(rgb, (glyphs.n_points, 1))
            glyphs.point_data["RGB"] = colors_array
            all_parts.append(glyphs)
    
    # --- Bonds as single net
    lines = []
    for i in range(len(atom_points)):
        type_i = int(atom_types[i])
        rad_i = cov_radii.get(type_i, default_radius)
        for j in range(i + 1, len(atom_points)):
            type_j = int(atom_types[j])
            rad_j = cov_radii.get(type_j, default_radius) 
            dist = np.linalg.norm(atom_points[i] - atom_points[j])
            bd_threshold = rad_i + rad_j + 0.6
            if 0.6 < dist < bd_threshold:
                # only indices of linked points are saved
                lines.append([2, i, j]) # 2: line conects two points      
    tubes = None
    if lines:
        # Create PolyData-Object for lines
        bonds_poly = pv.PolyData(atom_points)
        bonds_poly.lines = np.hstack(lines)
        # convert lines into tubes
        tubes = bonds_poly.tube(radius=0.06)
        # bond color
        bond_rgb = (np.array(pv.Color("lightgray").float_rgb) * 255).astype(np.uint8)
        tubes.point_data["RGB"] = np.tile(bond_rgb, (tubes.n_points, 1))
        all_parts.append(tubes)
    # merge all meshes
    if not all_parts:
        return None 
    combined = all_parts[0].merge(all_parts[1:])
    return combined

### Export Class for Blender (Multi):
class ExportWorker(QThread):
    progress = Signal(int)  # Signal for progressbar (0-100)   
    finished = Signal(bool, str, str) # Signal, after completion

    def __init__(self, tasks, folder, base_name):
        super().__init__()
        self.tasks = tasks
        self.folder = folder
        self.base_name = base_name
        self._is_running = True
        self.executor = None

    
    def stop(self):
        self._is_running = False
        if self.executor:
            # Stops all tasks that haven't started yet immediately
            self.executor.shutdown(wait=False, cancel_futures=True)

    def run(self):
        length = len(self.tasks)
        completed = 0

        # Execute in parallel
        n_proc = os.cpu_count() or 1
        workers = max(1, n_proc-1)
        with ProcessPoolExecutor(max_workers = workers) as self.executor:
            futures = [self.executor.submit(export_single_frame, t) for t in self.tasks]
            for _ in as_completed(futures):
                if not self._is_running:
                    self.finished.emit(False, self.folder, self.base_name)
                    return
                
                completed += 1
                self.progress.emit(int((completed / length) * 100))
        
        self.finished.emit(True, self.folder, self.base_name)

def export_single_frame(args):
    i, atom_points, atom_types, cpk, radii, def_rad, folder, base_name = args
    
    # create geometry mesh
    mesh = draw_mol_bld(atom_points, atom_types, cpk, radii, def_rad)
    
    # export (needs plotter)
    pl = pv.Plotter(off_screen=True)
    pl.add_mesh(mesh, scalars="RGB", rgb=True)
    
    file_path = os.path.join(folder, f"{base_name}_{i:03d}.glb")
    pl.export_gltf(file_path)
    pl.close()
    return file_path

def generate_blender_script_multi(folder, base_name):
    """
    Generates a Blender Python script to batch-import multiple GLB files
    and sequence them in the timeline (One frame per file).
    """
    script_path = os.path.join(folder, "import_and_animate.py")
    
    blender_script = f"""# created with MolVista by (C) 2026 Dr. Tobias Schulz
import bpy
import os

# --- Settings ---
path_to_glb = "{folder}" # adapt path to *glb files!
extension = ".glb"

# 1. Empty current Scene (recommended)
bpy.ops.object.select_all(action='SELECT')
bpy.ops.object.delete()

# Find and sort all Files
files = sorted([f for f in os.listdir(path_to_glb) if f.endswith(extension)])

for i, filename in enumerate(files):
    filepath = os.path.join(path_to_glb, filename)
    
    # 2. IMPORT (imported objects are automatically selected)
    bpy.ops.import_scene.gltf(filepath=filepath)
    imported_objs = bpy.context.selected_objects
    
    current_frame = i + 1 # Blender starts with Frame 1

    for obj in imported_objs:
        # --- Set KEYFRAMES ---
        
        # A) Predecessor Frame: invisible
        if current_frame > 1:
            obj.hide_viewport = True
            obj.hide_render = True
            obj.keyframe_insert(data_path="hide_viewport", frame=current_frame - 1)
            obj.keyframe_insert(data_path="hide_render", frame=current_frame - 1)
        
        # B) Current Frame: visible
        obj.hide_viewport = False
        obj.hide_render = False
        obj.keyframe_insert(data_path="hide_viewport", frame=current_frame)
        obj.keyframe_insert(data_path="hide_render", frame=current_frame)
        
        # C) Successor Frame: invisible
        obj.hide_viewport = True
        obj.hide_render = True
        obj.keyframe_insert(data_path="hide_viewport", frame=current_frame + 1)
        obj.keyframe_insert(data_path="hide_render", frame=current_frame + 1)

# Adapt Timeline
bpy.context.scene.frame_end = len(files)
print(f"Finished! {{len(files)}} Frames processed.")
"""
    with open(script_path, "w") as f:
        f.write(blender_script)

#### Export Class for Blender (One):
class OneFileExportWorker(QThread): # One File
    finished = Signal(bool, str) # Variables: Success, Path

    def __init__(self, data, path, cpk, radii, def_rad):
        super().__init__()
        self.data = data
        self.path = path
        self.cpk = cpk
        self.radii = radii
        self.def_rad = def_rad

    def run(self):
        try:
            pl = pv.Plotter(off_screen=True)
            length = len(self.data.atom_points)
            
            for i in range(length):
                pts = np.array(self.data.atom_points[i])
                types = self.data.atom_types[i]
                # generate mesh
                mesh = draw_mol_bld(pts, types, self.cpk, self.radii, self.def_rad)
                # Generate a unique name for the Blender script
                pl.add_mesh(mesh, name=f"mol_{i:03d}", scalars="RGB", rgb=True)
            
            pl.export_gltf(self.path)
            pl.close()
            self.finished.emit(True, self.path)
        except Exception as e:
            self.finished.emit(False, "")

def generate_blender_script(path):
    """
    Generates a companion Blender Python script for the exported GLB file.
    This script sets up a frame-by-frame animation by toggling object visibility.
    """
    script_path = os.path.splitext(path)[0] + "_setup_anim.py"
        
    blender_script = f"""import bpy

# 1. Identify all objects starting with "mol_" (representing trajectory frames)
steps = [obj for obj in bpy.data.objects if "mol_" in obj.name]
steps.sort(key=lambda x: x.name)

if not steps:
    print("Error: No 'mol_' objects found in the scene!")
else:
    # 2. Detach objects from any hierarchies (Unparent)
    # This ensures each frame can be transformed independently if needed
    bpy.ops.object.select_all(action='DESELECT')
    for obj in steps:
        obj.select_set(True)
    
    # Clear parents while maintaining the current world transformation
    bpy.ops.object.parent_clear(type='CLEAR_KEEP_TRANSFORM')
    bpy.ops.object.select_all(action='DESELECT')

    # 3. Setup Scene Timeline
    bpy.context.scene.frame_start = 1
    bpy.context.scene.frame_end = len(steps)
    
    # 4. Create Frame-by-Frame Visibility Animation
    for i, obj in enumerate(steps):
        if obj.animation_data:
            obj.animation_data_clear()
            
        target_frame = i + 1
        
        # Initial State: Hidden (Scale set to 0)
        obj.scale = (0, 0, 0)
        obj.keyframe_insert(data_path="scale", frame=0)
        
        # Visible State: Active only at its specific frame
        obj.scale = (1, 1, 1)
        obj.keyframe_insert(data_path="scale", frame=target_frame)
        
        # Hide immediately after its frame
        obj.scale = (0, 0, 0)
        obj.keyframe_insert(data_path="scale", frame=target_frame + 1)

        # Force CONSTANT interpolation to prevent smooth scaling effects
        if obj.animation_data and obj.animation_data.action:
            for fcurve in obj.animation_data.action.fcurves:
                for kp in fcurve.keyframe_points:
                    kp.interpolation = 'CONSTANT'

    bpy.context.scene.frame_set(1)
    print(f"Animation Setup Complete: {{len(steps)}} frames sequenced.")
"""

    with open(script_path, "w") as f:
        f.write(blender_script)

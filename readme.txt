# MolVista 

MolVista is a powerful Python-based graphical suite designed for the visualization, 
alignment, and splicing of chemical reaction paths (e.g., IRC trajectories). 
It comes paired with MolAlign, a command-line tool for automated batch processing of 
complex multi-segment reactions.

## Features

    • Robust Alignment: Utilizes the Kabsch algorithm for minimal RMSD overlays 
      of rigid molecular anchors.
    • Automated Atom Mapping: Intelligently resolves inconsistent atom orderings
      between different calculation files using distance-matrix signatures.
    • Smart Splicing: Creates seamless transitions between reaction segments 
      with automated "Phase-In/Phase-Out" for moving fragments.
    • Bridging: To ensure a smooth transition, MolAlign checks the junction between 
      segments. If the RMSD exceeds a defined threshold, intermediate "bridging points" 
      are interpolated to eliminate jumps.
    • Energy Stitching: Automatically normalizes energy offsets between separate 
      IRC calculations for a continuous reaction profile.     
    • High-End Export: Integrated support for .xyz, .pov (POV-Ray), Blender scripts, 
      and high-resolution plots.

    # The "Split & Run" Workflow
    After a successful alignment, MolVista offers to create a Quantum Chemistry Bridge:
    (available for ORCA, NWChem, Psi4)
    1. Split Template: A pre-configured _split.py script is generated.
    2. Customization: Open _split.py to adjust the HEADER (Method, Basis Set, etc.).
    3. Execution: Run the script to generate individual .inp files and a .sh batch wrapper for your cluster.
    4. Integration: The resulting .molden or .fchk files can be imported into BatchMol to generate high-end 
    Blender or POV-Ray visualizations of ESP, Spin, and MOs along the reaction trajectory.
    
    # Using MolVista with Blender
    1.Import: Import the generated .glb file(s) into Blender.
    OneFile Mode (--bld-one): Produces a single file containing meshes for all time frames.
    MultiFile Mode (--bld): Produces individual .glb files for each trajectory point.
    2. Scripting: Switch to the Scripting Tab in the Blender top navigation bar.
    3. Setup: Open the generated Python script (e.g., import_and_animate.py) and click Run Script. 
    This initializes the animation and material links.
    4. Timeline: Your reaction path is now sequenced on the Blender timeline. Press Space to play 
    the animation.
    5. Customization:
    Use the 'Dummy_mol' object to modify surface properties (e.g., Metallic, Roughness, Transmission) 
    via the Shader Editor.
    Use the 'Trajectory_Control' object to globally adjust the position, rotation, and scale of 
    the entire molecule chain.

## Project Structure

```text
.
├── main.py               #  Main application entry point
├── requirements.txt        # Project dependencies
├── README.md               # Documentation
├── /modules                # Core logic and UI components
│   ├── gui.ui              # GUI 
│   ├── manual.html         # short manual
│   ├── modules.py          # Specialized python routines
├── /examples               # examples with Input/Output files
│   ├── ex1                 # 2-Cl-Cyclohexane ring-flip 
│   ├── ex2                 # Fragment Logic: Bromination of Propene
│   ├── ex3                 # Automatic Atom Reordering: Rearrangement of protonated COT to Methl-Tropylium
│   ├── ex4                 # Multi Segment Alignment
├── /screenshots            # 
│   ├── ...                 # from examples above including mp4 exports

## examples

Example 1: Ring-flip of 2-Chlorocyclohexane (PBE0/def2-SVP RIJK Def2/JK) [1]

  Pathway Description:
  The first segment (neb13.inp) describes the pathway from the chair conformation to the twist-boat form.
  The second segment (neb35.inp) covers the transition through a boat geometry to the subsequent 
  twist conformation.
  Corresponding ORCA input files and geometries are located in the /orca directory.

  Workflow in MolVista:
  Load the trajectories neb13_MEP_trj.xyz and neb35_MEP_trj.xyz by dragging them into the upper-left and 
  middle plotter windows.
  Navigate to Actions > Align to merge the trajectories. The calculated rotation angles are recorded 
  in the Action Log.

  Export & Rendering:
  # POV-Ray [4]: Generate the export via right-click in the middle plotter window. Use ex1.inc with the provided 
  video.pov and video.ini to render the image sequence. Combine the frames into a video using FFmpeg [5]:
  fmpeg -start_number 01 -i video%03d.png -vcodec mpeg4 video_ex1.mp4
  # Blender [3]: The "One-file Export" generates several ex1.glb. Use the automatically generated 
  import_and_animate.py script within Blender to import the assets and set up the animation timeline.

Example 2: Bromination of Propene (Fragment Logic) (B3LYP/def2-SVP) [1]

  Pathway Description:
  The bromination of propene is a two-step radical process. First, a bromine radical attacks the propene, 
  forming an allyl radical intermediate. In the second step, this intermediate reacts with Br2
  to yield the final product and regenerate a bromine radical.
  All ORCA input files and structures are provided in the /orca directory.

  Workflow in MolVista:

    Setup: Drag and drop the two segments ts1.irc.xyz and ts2.irc.xyz into the workspace.

    Masking: Since the changing fragments (HBr in step 1, Br2 in step 2) vary, they must 
    be excluded from the alignment. Use "Align masked" by clicking the corresponding atoms 
    in the 3D viewer or selecting them in the atom list.

    Orientation: Note that the first trajectory must be reversed (the "Align masked" 
    function does not include the auto-flip feature found in Example 1).
    Alignment: Select the last point of the first segment's energy profile and the first point of the 
    second segment. The rigid backbone (all non-masked atoms) will be used to align the trajectories seamlessly.

  Export & Rendering:
  # POV-Ray [4] Naming: The name you choose for the .inc (e.g. combined.inc) file will be the identifier for the molecule 
  object within POV-Ray ("combined" in this case).
  Array Handling: The number of available molecule objects corresponds to the length of the 
  molecule array minus one.
  Customization: Within the generated include file, you can globally adjust atom/bond radii 
  and apply different finishes to fine-tune the visual output.
  After rendering using video.ini as input combine the frames into a video with e.g. FFmpeg [5].
  # Blender [3]: import ex2.glb into a suitable template and setup the timeline with 'import_and_animate.py'

Example 3: Rearrangement of Protonated COT to Methyl-Tropylium (Atom Reordering)
(PBE0/def2-SVP RIJK Def2/JK) [1]

  Pathway Description:
  This example demonstrates the complex rearrangement of the protonated cyclooctatetraene (COT) cation into the 
  methyl-tropylium cation via a stable intermediate.
  All required ORCA input files and transition state geometries are located in the /orca directory.

  Workflow in MolVista:
  Challenge: The two reaction steps use different atom numbering/ordering, which normally prevents seamless merging.
  Solution: By using the standard "Align" function, MolVista automatically synchronizes the steps. It utilizes 
  auto-reverse (if the directionality doesn't match) and auto-mapping to internally reorder the atoms for 
  a physically consistent trajectory.

  Export & Rendering: [3], [4], [5]
  Versatility: In addition to POV-Ray and Blender, the right-click menu allows you to export the entire combined sequence 
  as a single XYZ trajectory (ex3.xyz).
  Direct Video: You can also trigger a direct MP4 video export of the combined rearrangement for a quick preview of 
  the mechanism (see 'Screenshots')

Note: The endpoint geometries of the IRC segments are provided as generated by the IRC calculation; for full 
energy minimization of the intermediates/products, a subsequent geometry optimization is recommended.

Example 4 Radical Reaction (GFN2-xTB) [1], [2]
  Pathway Description:
  Segment 1: Ethyl radical attacks acrylonitrile to form a new radical intermediate.
  Segment 2: This intermediate reacts with S-methyl thioformate via hydrogen abstraction.
  Segment 3: Rearrangement of the resulting sulfur-centered radical.
  Segment 4: Decomposition into •S-Me and CO.

  Alignment & Workflow:Segment 1 & 2: First, reverse the order of segments 1 and 2. In segment 1, 
  no atoms are masked. For segment 2, mask the thioformate by simply clicking on the respective atoms. 
  Mark the endpoint of segment 1 and the starting point of segment 2 to align them.
  Merging: The newly combined trajectory will appear in the file view on the left.
  Segment 3: Use the combined trajectory as the starting point for the next step. Drag it into 
  the first plotter and segment 3 into the second one. Mask the nitrile compound as a fragment.
  (Note: Segment 3 must be reversed via the right-click context menu in the plotter window).
  Final Step: Use the resulting trajectory as the starting point for the final alignment with 
  segment 4.

  Export & Rendering: [3]
  An example of advanced visualization using Blender is provided (via the "one-file export" function).


Ref:
[1] F. Neese, "Software update: the ORCA program system — Version 6.0", *Wiley Interdiscip. Rev.: Comput. Mol. Sci.*, 
**15**, e70019 (2025). [doi: 10.1002/wcms.70019](https://doi.org)
[2] C. Bannwarth, S. Ehlert, S. Grimme, "GFN2-xTB—An Accurate and Broadly Parametrized Self-Consistent Tight-Binding 
Quantum Chemical Method with Multipole Electrostatics and Density-Dependent Dispersion Contributions", 
*J. Chem. Theory Comput.*, **15**, 1652–1671 (2019). [doi: 10.1021/acs.jctc.8b01176](https://doi.org)
# Rendering Software:
[3] Blender Foundation (2026). Blender (Version 5.1): Cycles Rendering Engine [Computer software]. Retrieved from blender.org
[4] POV-Ray Team (2013). Persistence of Vision Raytracer (Version 3.7) [Computer software]. GNU Affero General Public License. Retrieved from povray.org
[5] Tomar, S. (2006). Converting video formats with FFmpeg. Linux Journal, 2006(146), 10.


## Installation

1. Clone the repository
    git clone https://github.com
    cd MolVista

2. Install dependencies (using a VENV is recommended)
    pip install -r requirements.txt

    Requirements
        Python 3.x
        PySide6
        PyScf
        PyVista
        ....

## Usage

    python3 main.py

Note: Precompiled executable is available for macOS, for Linux arm64, and Linux x64 see 'MolSuite'

## License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
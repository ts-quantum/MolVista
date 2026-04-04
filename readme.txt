# MolVista & MolAlign Suite

MolVista is a powerful Python-based graphical suite designed for the visualization, 
alignment, and splicing of chemical reaction paths (e.g., IRC trajectories). 
It comes paired with MolAlign, a command-line tool for automated batch processing of 
complex multi-segment reactions.

## Features

    • Automated Atom Mapping: Intelligently resolves inconsistent atom orderings
      between different calculation files using distance-matrix signatures.
    • Smart Splicing: Creates seamless transitions between reaction segments 
      with automated "Phase-In/Phase-Out" for moving fragments.
    • Robust Alignment: Utilizes the Kabsch algorithm for minimal RMSD overlays 
      of rigid molecular anchors.
    • Energy Stitching: Automatically normalizes energy offsets between separate 
      IRC calculations for a continuous reaction profile.
    • High-End Export: Integrated support for .xyz, .pov (POV-Ray), Blender scripts, 
      and high-resolution plots.

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
├── /screenshots            # 
│   ├── ...                 # from examples above including mp4 export

## examples

Example 1: Ring-flip of 2-Chlorocyclohexane

  Pathway Description:
  The first segment (neb13.inp) describes the pathway from the chair conformation to the twist-boat form.
  The second segment (neb35.inp) covers the transition through a boat geometry to the subsequent 
  twist conformation.
  Corresponding ORCA input files and geometries are located in the /orca directory.

  Workflow in MolAlign:
  Load the trajectories neb13_MEP_trj.xyz and neb35_MEP_trj.xyz by dragging them into the upper-left and 
  middle plotter windows.
  Navigate to Actions > Align to merge the trajectories. The calculated rotation angles are recorded 
  in the Action Log.

  Export & Rendering:
  POV-Ray: Generate the export via right-click in the middle plotter window. Use ex1.inc with the provided 
  video.pov and video.ini to render the image sequence. Combine the frames into a video using FFmpeg:
  ffmpeg -start_number 01 -i video%03d.png -vcodec mpeg4 video_ex1.mp4
  Blender: The "Multi-file Export" generates several .glb files. Use the automatically generated 
  import_and_animate.py script within Blender to import the assets and set up the animation timeline.

Example 2: Bromination of Propene (Fragment Logic)

  Pathway Description:
  The bromination of propene is a two-step radical process. First, a bromine radical attacks the propene, 
  forming an allyl radical intermediate. In the second step, this intermediate reacts with Br2
  to yield the final product and regenerate a bromine radical.
  All ORCA input files and structures are provided in the /orca directory.

  Workflow in MolAlign:

    Setup: Drag and drop the two segments ts1.irc.xyz and ts2.irc.xyz into the workspace.

    Masking: Since the changing fragments (HBr in step 1, Br2 in step 2) vary, they must 
    be excluded from the alignment. Use "Align masked" by clicking the corresponding atoms 
    in the 3D viewer or selecting them in the atom list.

    Orientation: Note that the first trajectory must be reversed (the "Align masked" 
    function does not include the auto-flip feature found in Example 1).
    Alignment: Select the last point of the first segment's energy profile and the first point of the 
    second segment. The rigid backbone (all non-masked atoms) will be used to align the trajectories seamlessly.

  Export & Rendering:
  POV-Ray Naming: The name you choose for the .inc (e.g. combined.inc) file will be the identifier for the molecule 
  object within POV-Ray ("combined" in this case).
  Array Handling: The number of available molecule objects corresponds to the length of the 
  molecule array minus one.
  Customization: Within the generated include file, you can globally adjust atom/bond radii 
  and apply different finishes to fine-tune the visual output.

Example 3: Rearrangement of Protonated COT to Methyl-Tropylium (Atom Reordering)

  Pathway Description:
  This example demonstrates the complex rearrangement of the protonated cyclooctatetraene (COT) cation into the 
  methyl-tropylium cation via a stable intermediate.
  All required ORCA input files and transition state geometries are located in the /orca directory.

  Workflow in MolAlign:
  Challenge: The two reaction steps use different atom numbering/ordering, which normally prevents seamless merging.
  Solution: By using the standard "Align" function, MolAlign automatically synchronizes the steps. It utilizes 
  auto-reverse (if the directionality doesn't match) and auto-mapping to internally reorder the atoms for 
  a physically consistent trajectory.

  Export & Rendering:
  Versatility: In addition to POV-Ray and Blender, the right-click menu allows you to export the entire combined sequence 
  as a single XYZ trajectory (.trj).
  Direct Video: You can also trigger a direct MP4 video export of the combined rearrangement for a quick preview of 
  the mechanism.

Note: The endpoint geometries of the IRC segments are provided as generated by the IRC calculation; for full 
energy minimization of the intermediates/products, a subsequent geometry optimization is recommended.

## Installation

1. Clone the repository
    git clone https://github.com
    cd MolVista

2. Install dependencies
    pip install -r requirements.txt

    Requirements
        Python 3.x
        PySide6
        PyScf
        ....

## Usage

    python3 main.py

## License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
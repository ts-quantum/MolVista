import sys
import os, re, io
import platform

# WICHTIG: Dies muss VOR jedem anderen Import stehen
os.environ["QT_API"] = "pyside6"

import warnings
from pyvista import PyVistaDeprecationWarning
warnings.filterwarnings("ignore", category=PyVistaDeprecationWarning)


from qtpy import QtWidgets, QtCore, uic, QtGui
from PySide6.QtWidgets import QApplication, QColorDialog, QFileDialog, QMessageBox
from PySide6.QtWidgets import QDialog, QTextEdit, QVBoxLayout
from PySide6.QtGui import QColor
from PySide6.QtCore import QStringListModel, Qt
import pyvista as pv
from pyvistaqt import QtInteractor 
from collections import defaultdict
from pyscf import data
from pyscf.data import elements

from matplotlib.backends.backend_qtagg import FigureCanvasQTAgg as FigureCanvas
from matplotlib.figure import Figure
from matplotlib.ticker import ScalarFormatter

import numpy as np
from pathlib import Path
import pyperclip
import pandas as pd

sys.path.insert(1,'./modules')
from modules import *
from modules import ExportWorker, OneFileExportWorker

class MoleculeData:
    def __init__(self, *, name=None, atom_points=None, atom_types=None, energies=None):
        self.name = name
        self.atom_points = atom_points # set of coordinates per frame
        self.atom_types = atom_types # set of types per frame
        self.energies = energies or [] # energy per frame

    @classmethod
    def from_xyz(cls, filepath):
        base = os.path.basename(filepath)
        atom_types = []
        atom_points = []
        energies = []
        
        with open(filepath, 'r') as f:
            lines = f.readlines()

        cursor = 0
        while cursor < len(lines):
            line = lines[cursor].strip()
            if not line:
                cursor += 1
                continue
                
            try:
                num_atoms = int(line)
                # --- Extract Energy from second line
                comment = lines[cursor + 1].strip()
                # Searches for float number also for scientific notation "E"
                energy_match = re.search(r"[-+]?\d*\.\d+([eE][-+]?\d+)?", comment)
                energy_val = float(energy_match.group(0)) if energy_match else None
                energies.append(energy_val)

                # Read Atoms and Coordinates
                block = lines[cursor + 2 : cursor + 2 + num_atoms]
                types = []
                coords = []
                for entry in block:
                    parts = entry.split()
                    if len(parts) < 4: continue
                    symbol = parts[0]
                    try: 
                        at_num = data.elements.charge(symbol) # map symbol to atom number
                    except KeyError:
                        at_num = 0 
                    types.append(at_num)
                    coords.append([float(x) for x in parts[1:4]])
                
                atom_types.append(np.array(types))
                atom_points.append(np.array(coords))
                cursor += num_atoms + 2
            except (ValueError, IndexError):
                break

        return cls(name=base, atom_types=atom_types, atom_points=atom_points, energies=energies)

class MplCanvas(FigureCanvas):
    def __init__(self, parent=None, width=5, height=4, dpi=100):
        # Dark Background
        fig = Figure(figsize=(width, height), dpi=dpi, facecolor='#19135B') 
        self.axes = fig.add_subplot(111)
        
        # Styling for dark themes
        self.axes.set_facecolor('#19135B')
        self.axes.tick_params(colors='white', labelsize=8)
        for spine in self.axes.spines.values():
            spine.set_color('white')
            
        super().__init__(fig)

class HelpWindow(QDialog):
    def __init__(self, parent=None):
        super().__init__(parent)
        self.setWindowTitle("MolVista Help & Manual")
        self.resize(600, 400)
        layout = QVBoxLayout(self)
        
        self.text_area = QTextEdit()
        self.text_area.setReadOnly(True)

        help_text_html = self.load_help_content()
        self.text_area.setHtml(help_text_html) 
        layout.addWidget(self.text_area)

    def load_help_content(self):
        file_path = os.path.join(os.path.dirname(__file__), "./modules/manual.html")
        if os.path.exists(file_path):
            with open(file_path, "r", encoding="utf-8") as f:
                return f.read()
        return "<h1>Manual file not found.</h1>"

class MoleculeApp(QtWidgets.QMainWindow):
    def __init__(self):
        super().__init__()
        
        # load GUI *.ui file (MainWindow)
        uic.loadUi("./modules/gui.ui", self)
        self.menuBar().setNativeMenuBar(False)
        
        # prepare drag and drop for data processing
        def enable_dnd_for_plotter(plotter, tab_index, callback_func):
            # only for geo_plotter 0 and 1
            if tab_index not in [0, 1]:
                return
            target_widget = plotter.interactor
            target_widget.setAcceptDrops(True)
            # Event-Handler for PySide6
            def dragEnterEvent(event):
                # Accept Drop from File List
                event.acceptProposedAction()
            # important for "plus" symbol 
            def dragMoveEvent(event: QtGui.QDragMoveEvent):
                event.acceptProposedAction()
            def dropEvent(event):
                # call procedure and hand over tab_index as input
                callback_func(tab_index)
                event.acceptProposedAction()
            # Interactor Methods
            target_widget.dragEnterEvent = dragEnterEvent
            target_widget.dragMoveEvent = dragMoveEvent
            target_widget.dropEvent = dropEvent

        # Plotter Lists
        self.geo_widgets = [self.geo_view_0, self.geo_view_1, self.geo_view_2, self.geo_view_3]
        self.profile_widgets = [self.profile_view_0, self.profile_view_1, self.profile_view_2]
        
        self.geo_plotters = []
        self.profile_canvases = []

        # 1. 3D-Plotter (PyVista/VTK)
        for i, widget in enumerate(self.geo_widgets):
            plt = QtInteractor(widget)
            plt.set_background("#19135B") # Background
            plt.add_axes()
            if widget.layout() is None:
                layout = QtWidgets.QVBoxLayout(widget)
                layout.setContentsMargins(0, 0, 0, 0)
                widget.setLayout(layout)
            widget.layout().addWidget(plt.interactor)
            enable_dnd_for_plotter(plt, i, self.on_file_dropped)
            self.geo_plotters.append(plt)

        for i, plt in enumerate(self.geo_plotters):
            interactor = plt.interactor
            interactor.setContextMenuPolicy(QtCore.Qt.CustomContextMenu)
            interactor.customContextMenuRequested.connect(self.show_geo_menu)
            
            if i in [0, 1]: plt.enable_mesh_picking(
                callback=lambda mesh, idx=i: self.on_atom_picked(mesh, idx),
                show_message=False,
                show = False,
                left_clicking=True # Atom picking (masking) by left click
            )

        # 2. 2D-Profile (Matplotlib)
        for widget in self.profile_widgets:
            canvas = MplCanvas(widget)

            ax = canvas.axes
            # Y-axis:  offset
            y_fmt = ScalarFormatter(useOffset=True)
            y_fmt.set_scientific(True)
            y_fmt.set_powerlimits((0, 0)) 
            ax.yaxis.set_major_formatter(y_fmt)
            
            # X-axis: no offset
            x_fmt = ScalarFormatter(useOffset=False)
            x_fmt.set_scientific(False)
            ax.xaxis.set_major_formatter(x_fmt)

            if widget.layout() is None:
                layout = QtWidgets.QVBoxLayout(widget)
                layout.setContentsMargins(5, 5, 5, 5) 
                widget.setLayout(layout)
            widget.layout().addWidget(canvas)
            canvas.mpl_connect('pick_event', self.on_plot_picked)
            self.profile_canvases.append(canvas)
        
        for canvas in self.profile_canvases:
            canvas.setContextMenuPolicy(QtCore.Qt.CustomContextMenu)
            canvas.customContextMenuRequested.connect(self.show_profile_menu)

        # explicit plotter references
        self.plotter_0, self.plotter_1, self.plotter_2, self.plotter_3 = self.geo_plotters
        self.canvas_0, self.canvas_1, self.canvas_2 = self.profile_canvases

        #Event connector
        self.actionQuit.triggered.connect(QApplication.instance().quit)
        self.actionLoad_trj.triggered.connect(self.load_trj)
        self.actionAlign.triggered.connect(self.align)
        self.actionAlign_masked.triggered.connect(self.align_masked)
        self.actionHelp.triggered.connect(self.help)

        self.button_toggle_0.clicked.connect(self.toggle_0)
        self.button_toggle_1.clicked.connect(self.toggle_1)
        self.button_toggle_2.clicked.connect(self.toggle_2)

        self.cancel_export.clicked.connect(self.request_stop_worker)
        self.cancel_export.hide()
        self.progressBar.hide()

        #Timer for Animation
        self.animation_timer_0 = QtCore.QTimer()
        self.animation_timer_0.timeout.connect(self.next_animation_frame_0)
        self.is_playing_0 = False
        #
        self.animation_timer_1 = QtCore.QTimer()
        self.animation_timer_1.timeout.connect(self.next_animation_frame_1)
        self.is_playing_1 = False
        #
        self.animation_timer_2 = QtCore.QTimer()
        self.animation_timer_2.timeout.connect(self.next_animation_frame_2)
        self.is_playing_2 = False

        #file_list
        self.file_view.setDragEnabled(True)
        self.file_view.setSelectionMode(QtWidgets.QAbstractItemView.SingleSelection)
        self.file_view.setDefaultDropAction(QtCore.Qt.CopyAction)
        self.list_model = QStringListModel()
        self.file_view.setModel(self.list_model)
        self.file_view.doubleClicked.connect(self.remove_item)

        #atom_types list
        self.types_list = [self.list_0, self.list_1]
        self.types_model = [QStringListModel() for _ in range(len(self.types_list))]
        for view, model in zip(self.types_list, self.types_model):
            view.setModel(model)
            view.setSelectionMode(QtWidgets.QAbstractItemView.SelectionMode.MultiSelection)
            view.setFont(QtGui.QFont("Courier New", 9))
            view.selectionModel().selectionChanged.connect(self.on_atom_selection_changed)

        self.dataset_dict = {} # initialize dictionary for molecule files
        self.data_attached = {}
        self.pl1 = [[] for _ in range(len(self.profile_widgets))]

        #log widget
        self.log_widget.setReadOnly(True)
        self.log_widget.setMaximumBlockCount(1000) 
        self.log_widget.setFont(QtGui.QFont("Courier New", 9))

        # Atom Colors
        self.cpk_colors = defaultdict(lambda: "magenta")
        self.cpk_colors.update({
            1: "white",  #H
            5: "pink",  #B
            6: "gray",   #C
            7: "blue",   #N
            8: "red",    #O
            9: "orange",  #F
            14: "darkgrey", #Si
            12: "darkgreen", #Mg
            15: "brown",  #P
            16: "yellow", #S
            17: "green",  #Cl
            26: "darkorange", #Fe
            24: "darkcyan",    # Cr (Chrom)
            27: "royalblue",   # Co (Cobalt)
            28: "silver",      # Ni (Nickel)
            29: "chocolate",   # Cu (Kupfer)
            40: "cadetblue",   # Zr (Zirconium)
            44: "teal",        # Ru (Ruthenium)
            45: "deeppink",    # Rh (Rhodium) - oft zur Unterscheidung kräftig
            78: "lightgrey",    # Pt (Platin)
            35: "darkred",   #Br
            53: "darkviolet" # I
        })
        # Bond Parameters
        self.cov_radii = {
        1: 0.31,   # H
        5: 0.82,   # B
        6: 0.76,   # C
        7: 0.71,   # N
        8: 0.66,   # O
        9: 0.57,   # F
        14: 1.11,  # Si
        15: 1.06,  # P
        16: 1.05,  # S
        17: 1.02,  # Cl
        35: 1.20,  # Br
        53: 1.39,  # I
        24: 1.39,  # Cr
        27: 1.26,  # Co
        28: 1.21,  # Ni
        29: 1.32,  # Cu
        40: 1.48,  # Zr
        44: 1.26,  # Ru
        45: 1.35,  # Rh
        78: 1.28   # Pt
        }
        # Standard Radius for unknown elements
        self.default_radius = 1.0

    # Action Log procedure
    def log(self, message, category="info"):
        # add time stamp
        time_str = QtCore.QDateTime.currentDateTime().toString("hh:mm:ss")
        
        # define colors
        color = "black"
        if category == "success": color = "#05731D" # 
        elif category == "error": color = "#FF5555" # 
        elif category == "warning": color = "#FFB700" #
        
        # HTML formatting for widget
        html_message = f"<span style='color:gray;'>[{time_str}]</span> " \
                    f"<span style='color:{color};'>{message}</span>"
        
        self.log_widget.appendHtml(html_message)
        
        # scroll to last line
        self.log_widget.ensureCursorVisible()

    #File List Actions
    def remove_item(self,index): # double click on file in "file_view"
        if not index.isValid():
            return
        item_name= index.data()
        if item_name in self.dataset_dict:
            del self.dataset_dict[item_name]
        self.file_view.model().removeRow(index.row())
        if item_name in self.data_attached.values():
            idx = None
            for plt_idx, name in self.data_attached.items():
                if name == item_name:
                    idx = plt_idx
            if idx is not None and idx < len(self.geo_plotters):
                plt = self.geo_plotters[idx]
                plt.clear_actors()
                if idx == 2: self.geo_plotters[3].clear_actors()
                ax = self.profile_canvases[idx].axes 
                ax.clear()
                self.profile_canvases[idx].draw()
                del self.data_attached[idx]
        self.log(f"{item_name} deleted", "warning")
            
    #drag and drop
    def init(self, idx, data_):
        n = len(data_.energies)
        x = range(n)
        y = data_.energies
        self.energy_profile(x,y,idx)
        id = 0  # plot first point by default
        self.draw_point(id, data_.energies[id], id, idx, data_)

    def on_file_dropped(self, idx):
        index = self.file_view.selectedIndexes()
        if not index:
            return
        name = index[0].data()
        data_ = self.dataset_dict.get(name)
        self.data_attached[idx]=data_.name
        self.init(idx, data_) # invokes drawing
        self.plot_picked(idx, 0)
        self.log(f"{name} added to plotter {idx}", "info")
            
    #Energy Profile Procedures
    def energy_profile(self,x,y,tab):
        ax = self.profile_canvases[tab].axes 
        canvas = self.profile_canvases[tab]
        ax.clear()
        ax.plot(x,y,'o', color='#00FFCC', markersize=4, picker=True, pickradius=5)
        # keep offset (y-axis) consistent
        bg_color_rgba = canvas.figure.get_facecolor()
        current_qcolor = QColor.fromRgbF(*bg_color_rgba)
        text_color = "black" if self.is_color_light(current_qcolor) else "white"
        ax.yaxis.get_offset_text().set_color(text_color)

        self.profile_canvases[tab].draw()

    def draw_point(self, x, y, id, tab, data_):
        # MatPlotLib Canvas (Energy Profile)
        ax = self.profile_canvases[tab].axes
        canvas = self.profile_canvases[tab]
        # remove previous point (if available) 
        if self.pl1[tab]:
            try:
                line = self.pl1[tab].pop(0) # Calls 2D Line Object
                line.remove()               # deletes it from MatPlotLib Canvas
            except (ValueError, IndexError, Exception):
                pass
        # Draw new point and save to self.pl1[tab]; tab - Plotter ID
        new_point_list = ax.plot(x, y, 'o', color="#FF0000", markersize=6, zorder=5)
        self.pl1[tab] = new_point_list 
        # keep offset (y-axis) consistent
        bg_color_rgba = canvas.figure.get_facecolor()
        current_qcolor = QColor.fromRgbF(*bg_color_rgba)
        text_color = "black" if self.is_color_light(current_qcolor) else "white"
        ax.yaxis.get_offset_text().set_color(text_color)

        # Refresh Plot Area
        self.profile_canvases[tab].draw()
        try:
            plotter = self.geo_plotters[tab]
            plotter.clear_actors() # clear PyVista Plotter 
            #plotter.enable_anti_aliasing() 
            visual_objects = draw_mol(data_.atom_points[id], data_.atom_types[id], 
                        self.cpk_colors,self.cov_radii, self.default_radius)
            for mesh, args in visual_objects:
                    if tab == 2: 
                        plotter.add_mesh(mesh, reset_camera=False, smooth_shading=True, **args)
                        if not hasattr(self, 'camera_initialized'):
                            plotter.reset_camera()
                            plotter.camera.zoom(0.7)
                            self.camera_initialized = True
                            self.first_load_done = True
                    else: 
                        plotter.add_mesh(mesh, smooth_shading=True, **args)
            plotter.render()
        except:
            None

    def plot_picked(self, tab, idx):  # select point in Energy Profile
        name = self.data_attached[tab] # dataset connected to Plotter ID [tab]
        data_ = self.dataset_dict.get(name) # retrieve dataset from dict
        x = idx
        y = data_.energies[idx]
        self.draw_point(x, y, idx, tab, data_)

        atom_ids = data_.atom_types[idx]
        symbols = [elements.ELEMENTS[aid] for aid in atom_ids]
        types = []
        for i in range(len(symbols)):
            label = f"{i:3d}: {symbols[i]}"
            types.append(label)
        if tab < 2:
            self.types_model[tab].setStringList(types) # write Atom List to Listbox

    def on_plot_picked(self, event):  # event procedure
        clicked_canvas = event.canvas
        tab = self.profile_canvases.index(clicked_canvas)
        idx = event.ind[0]
        self.plot_picked(tab, idx)
        
    def on_atom_selection_changed(self): # select Atom in Atom_List
        # retrieve active sender that emitted the signal
        sender_model = self.sender() 
        # get corresponding plotter ID
        tab = 0 if sender_model == self.types_list[0].selectionModel() else 1
        
        # get all currently selected lines (Atom_List)
        selected_rows = [idx.row() for idx in self.types_list[tab].selectedIndexes()]

        # refresh geo_plotter and highlight selected atoms
        self.update_single_viewer(tab, highlight_ids=selected_rows)

    def update_single_viewer(self, tab, highlight_ids):  # refresh and highlight atoms after click on atom 
        # get dataset name connected to the selected plotter
        name = self.data_attached.get(tab)
        if not name: return # error handler
        data_ = self.dataset_dict.get(name) # get dataset from dict
        
        # get currently selected point from Energy Profile
        curr_frame = int(self.pl1[tab][0].get_xdata()[0])

        # Empty plotter 
        plotter = self.geo_plotters[tab]
        plotter.clear_actors()
        
        # Redraw structure
        visual_objects = draw_mol(
            data_.atom_points[curr_frame], 
            data_.atom_types[curr_frame], 
            self.cpk_colors, 
            self.cov_radii, 
            self.default_radius,
            highlight_ids=highlight_ids 
        )
        
        for mesh, args in visual_objects:
            plotter.add_mesh(mesh, smooth_shading=True, **args)
        plotter.render()

    def on_atom_picked(self, mesh, tab):  # select Atom for masking in geo_plotter
        plotter = self.geo_plotters[tab]
        
        # use true coordinates 
        picker = plotter.interactor.GetRenderWindow().GetInteractor().GetPicker()
        click_pos = np.array(picker.GetPickPosition())[:3]

        # get corresponding dataset
        name = self.data_attached.get(tab)
        data_ = self.dataset_dict.get(name)
        curr_frame = int(self.pl1[tab][0].get_xdata()[0])
        all_coords = np.array(data_.atom_points[curr_frame])

        # distance Check
        diff = all_coords - click_pos
        dist_sq = np.sum(diff**2, axis=1)
        picked_atom_idx = np.argmin(dist_sq)
        
        # Select Line in Atom_List (invokes drawing as above, bi-directional)
        model_index = self.types_model[tab].index(picked_atom_idx, 0)
        command = QtCore.QItemSelectionModel.Toggle | QtCore.QItemSelectionModel.Select
        self.types_list[tab].selectionModel().select(model_index, command)

    def next_frame(self, idx):  # used for Animation
        if self.pl1[idx]:
            # get_xdata() provides array, [0] retrieves first value
            line = self.pl1[idx][0]
            current_row = int(line.get_xdata()[0])
        else:
            current_row = 0
        name = self.data_attached[idx]
        if not name:
            return
        data_ = self.dataset_dict.get(name)
        if not data_:
            return
        max_rows = len(data_.energies)
        next_row = current_row + 1
        # Infinite Loop:
        if next_row >= max_rows:
            next_row = 0  
        # index in energy list (Energy Profile) -> triggers on_step_selected
        y = data_.energies[next_row]
        self.draw_point(next_row, y, next_row, idx, data_)

    def toggle_0(self): # Play/Pause geo_plotter 0
        if not self.data_attached.get(0):
            self.log("no data available", "warning")
            return
        if self.is_playing_0:
            self.animation_timer_0.stop()
            self.is_playing_0 = False
        else:
            self.animation_timer_0.start(50)
            self.is_playing_0 = True
    def next_animation_frame_0(self):
        self.next_frame(0)
    #
    def toggle_1(self):
        if not self.data_attached.get(1):
            self.log("no data available", "warning")
            return
        if self.is_playing_1:
            self.animation_timer_1.stop()
            self.is_playing_1 = False
        else:
            self.animation_timer_1.start(50)
            self.is_playing_1 = True
    def next_animation_frame_1(self):
        self.next_frame(1)
    #
    def toggle_2(self):
        if not self.data_attached.get(2):
            self.log("no data available", "warning")
            return
        if self.is_playing_2:
            self.animation_timer_2.stop()
            self.is_playing_2 = False
        else:
            self.animation_timer_2.start(50)
            self.is_playing_2 = True
    def next_animation_frame_2(self):
        self.next_frame(2)
    
    # Menu Options
    def load_trj(self):  # Main Menu load trj. Files
        filters = "Trajectory files (*.xyz *.fxyz *.bxyz);; All Files (*.*)"
        files, _ = QtWidgets.QFileDialog.getOpenFileNames(
        self, "Load Trajectory", "", filters)
        if files:
            current=self.list_model.stringList()
            for name in files:
                fname=os.path.basename(name)
                if fname not in current:
                    new_data = MoleculeData.from_xyz(name)
                    self.dataset_dict[fname]=new_data
                    current.append(fname)
                self.log(f"{fname} imported", "success")
            self.list_model.setStringList(current)

    def align(self):
        if not self.data_attached.get(0) or not self.data_attached.get(1):
            self.log("at least one trajectory missing", "error")
            return
        
        data_ = [self.dataset_dict[self.data_attached[i]] for i in range(2)]
        
        # Determine the correct flip and the required atom mapping simultaneously
        best_case, mapping, best_rmsd = find_best_flip_strategy(data_[0], data_[1])
        self.log(f"Best alignment strategy: {best_case} (RMSD: {best_rmsd:.4f} Å)", "info")

        # mapping is the result from find_mapping
        # We create a reference array [0, 1, 2, ..., N-1]
        identity_mapping = np.arange(len(mapping))

        # Check if the found mapping deviates from the original order
        if not np.array_equal(mapping, identity_mapping):
            # Count how many atoms actually switched positions
            swapped_count = np.sum(mapping != identity_mapping)
            self.log(f"Atom re-ordering detected: {swapped_count} atoms rearranged to match reference.", "info")
        else:
            self.log("Atom order is already consistent between segments.", "success")

        match best_case:
            case "flip_1":
                data_[1] = self.reverse(data_[1])
            case "flip_0":
                data_[0] = self.reverse(data_[0])
            case "flip_both":
                data_[0] = self.reverse(data_[0])
                data_[1] = self.reverse(data_[1])
        # case: no flip:
        coords1 = data_[0].atom_points[-1] # Reference
        coords2 = data_[1].atom_points[0] # Target
        types = data_[0].atom_types[0]
        self.init(0,data_[0])
        self.init(1,data_[1])
        
        # Compute the final rotation matrix using the mapped coordinates
        # Note: mapping is applied to coords2 to align correct atom pairs
        aligned_coords2, R, centroid_ref, centroid_target = align_structures(coords1, coords2[mapping])
        
        angles = get_euler_angles(R)
        self.log(f"Kabsch Alignment rotation: X={angles[0]:.2f}°, Y={angles[1]:.2f}°, Z={angles[2]:.2f}°", "info")
        self.log(f"Kabsch ref. translation x={centroid_ref[0]:.2f} y={centroid_ref[1]:.2f} z={centroid_ref[2]:.2f}", "info")
        self.log(f"Kabsch target translation x={centroid_target[0]:.2f} y={centroid_target[1]:.2f} z={centroid_target[2]:.2f}", "info")

        # 3. draw overlay in Plotter_3
        self.plotter_3.clear()
        
        # Original Structure
        obj1 = draw_mol(coords1, types, self.cpk_colors, self.cov_radii, self.default_radius)
        for mesh, args in obj1:
            self.plotter_3.add_mesh(mesh, opacity=0.5, **args) # Leicht transparent

        # Rotated Structure 2
        obj2 = draw_mol(aligned_coords2, types, self.cpk_colors, self.cov_radii, self.default_radius)
        for mesh, args in obj2:
            # copy **args and add "yellow"
            highlight_args = {**args, "color": "yellow"} 
            self.plotter_3.add_mesh(mesh, **highlight_args)

        self.plotter_3.render()

        # Transform the entire trajectory of segment 2 using the computed matrix
        # This aligns the whole path without changing the original atom indices
        aligned_traj2_coords = transform_trajectory(data_[1].atom_points, R,
                                                         centroid_ref, centroid_target)
        
        combined_points = np.array(data_[0].atom_points + aligned_traj2_coords[1:])
        combined_types = data_[0].atom_types + data_[1].atom_types[1:]

        # Energy Offset Calculation
        # first energy of Segment 1 must match last energy of Segment 0
        energy_offset = data_[0].energies[-1] - data_[1].energies[0]
        adjusted_energies1 = [e + energy_offset for e in data_[1].energies]

        # merge using the adjusted energies
        combined_energies = (list(data_[0].energies) + 
                            list(adjusted_energies1[1:]))
        
        #combined_energies = data_[0].energies + data_[1].energies[1:]

        name=f"{data_[0].name}_{data_[1].name}"
        if name in self.dataset_dict:
            del self.dataset_dict[name]
    
        combined_data = MoleculeData(
            name=name,
            atom_points=combined_points,
            atom_types=combined_types,
            energies=combined_energies
        )
        self.dataset_dict[name]=combined_data
        current=self.list_model.stringList()
        if name not in current: 
            current.append(name)
            self.list_model.setStringList(current)
        self.init(2, combined_data)
        self.data_attached[2] = name
        self.log(f"new aligned dataset {name} created from {data_[0].name} and {data_[1].name}", "success")

    def get_alignment_mask(self, tab, total_atoms):
        # get masked atoms from Atoms_List
        excluded = [idx.row() for idx in self.types_list[tab].selectedIndexes()]
        if not excluded:
            # provide Info for user
            self.log(f"Viewer {tab}: No atoms masked, using full system", "warning")
        else:
            self.log(f"Viewer {tab}: {len(excluded)} atoms masked", "info")

        # all other atoms are active for alignment
        return [i for i in range(total_atoms) if i not in excluded]

    def align_masked(self):
        if not self.data_attached.get(0) or not self.data_attached.get(1):
            self.log("at least one trajectory missing", "error")
            return
        # get datasets
        data_ = [self.dataset_dict[self.data_attached[i]] for i in range(2)]
        id = [int(self.pl1[i][0].get_xdata()[0]) for i in range(2)]
        
        # 1. extract rigid backbone
        indices0 = self.get_alignment_mask(0, len(data_[0].atom_types[id[0]]))
        indices1 = self.get_alignment_mask(1, len(data_[1].atom_types[id[1]]))
        
        if len(indices0) != len(indices1):
            self.log(f"Backbones are not matching: {len(indices0)} vs {len(indices1)}", "error")
            return

        # 2. Mapping & Alignment
        coords_ref = data_[0].atom_points[id[0]][indices0]
        coords_target = data_[1].atom_points[id[1]][indices1]
        
        # IMPORTANT: Prepare type vectors for the mapper
        types_ref_all = np.array(data_[0].atom_types[id[0]])
        types_target_all = np.array(data_[1].atom_types[id[1]])

        types_ref = types_ref_all[indices0]
        types_target = types_target_all[indices1]

        # Find Mapping
        mapping = find_mapping(coords_ref, coords_target, types_ref, types_target)
        indices1_arr = np.array(indices1)
        sorted_indices1 = indices1_arr[mapping] # now parallel to indices0!

        # mapping is the result from find_mapping
        # create a reference array [0, 1, 2, ..., N-1]
        identity_mapping = np.arange(len(mapping))

        # Check if the found mapping deviates from the original order
        if not np.array_equal(mapping, identity_mapping):
            # Count how many atoms actually switched positions
            swapped_count = np.sum(mapping != identity_mapping)
            self.log(f"Atom re-ordering detected: {swapped_count} atoms rearranged to match reference.", "info")
        else:
            self.log("Atom order is already consistent between segments.", "success")

        # Apply Kabsch only on rigid backbone
        coords1_rigid = data_[0].atom_points[id[0]][indices0]
        coords2_rigid = data_[1].atom_points[id[1]][sorted_indices1]
        
        aligned_coords2, R, centroid_ref, centroid_target = align_structures(coords1_rigid, coords2_rigid)

        angles = get_euler_angles(R)
        self.log(f"Kabsch Alignment rotation: X={angles[0]:.2f}°, Y={angles[1]:.2f}°, Z={angles[2]:.2f}°", "info")
        self.log(f"Kabsch ref. translation x={centroid_ref[0]:.2f} y={centroid_ref[1]:.2f} z={centroid_ref[2]:.2f}", "info")
        self.log(f"Kabsch target translation x={centroid_target[0]:.2f} y={centroid_target[1]:.2f} z={centroid_target[2]:.2f}", "info")

         # overlay plot on geo_plotter_3
        self.plotter_3.clear()
        
        # (Original = Ref)
        obj1 = draw_mol(coords1_rigid, types_ref, self.cpk_colors, self.cov_radii, self.default_radius)
        for mesh, args in obj1:
            self.plotter_3.add_mesh(mesh, opacity=0.5, **args) # Leicht transparent

        # (Aligned = TARGET)
        obj2 = draw_mol(aligned_coords2, types_target, self.cpk_colors, self.cov_radii, self.default_radius)
        for mesh, args in obj2:
            # creates copy and highlights in yellow
            highlight_args = {**args, "color": "yellow"} 
            self.plotter_3.add_mesh(mesh, **highlight_args)

        self.plotter_3.render()

        # 3. Transform/Rotate Trajectory (whole molecule masked and un-masked atoms)
        aligned_traj2_coords = transform_trajectory_masked(data_[1].atom_points, R, 
                                                         centroid_ref, centroid_target)

        # 4. Resolve splicing issue:
        # 'common_indices' must be a mapping pair so that create_smooth_transition
        # knows which index in Segment 0 corresponds to which index in Segment 1.
        # We pass the parallel lists:
        mapping_pair = (indices0, sorted_indices1)

        steps = int(self.N_splicing.text())
        if self.splicing.isChecked():
            # The function must now internally interpolate mapping_pair[0][i] with mapping_pair[1][i]
            trans_pts, trans_tps = create_smooth_transition(
                data_[0].atom_points[id[0]], 
                aligned_traj2_coords[id[1]], 
                data_[0].atom_types[id[0]], # Original Types Segment 0
                data_[1].atom_types[id[1]],# Original Types Segment 1
                mapping_pair,        # Mapping-Paar 
                steps=steps
            )
        else:
            trans_pts, trans_tps = [], []
            self.log("splicing NOT active, NO additional segments for fragment " \
            "phase in and out will be inserted", "warning") 
        
        # 5. Combine datasets
        # Since Segment 0 and 1 may have different atoms, 
        # 'combined_types' will follow the types of Segment 1 from the splicing point onwards.
        points0 = data_[0].atom_points[:id[0]+1]
        types0 = data_[0].atom_types # remains constant for first part
        
        points1 = aligned_traj2_coords[id[1]:]
        types1 = data_[1].atom_types # past junction point
        
        combined_points = list(points0) + trans_pts + list(points1[1:])
        combined_types = list(types0) + trans_tps + list(types1[1:])

        # Energy Offset Calculation
        # first energy of Segment 1 must match last energy of Segment 0
        energy_offset = data_[0].energies[-1] - data_[1].energies[0]
        adjusted_energies1 = [e + energy_offset for e in data_[1].energies]

        # merge using the adjusted energies
        last_energy_val = data_[0].energies[-1]
        combined_energies = (list(data_[0].energies) + 
                            [last_energy_val] * len(trans_pts) + 
                            list(adjusted_energies1[1:]))

        self.log(f"Energy aligned: Offset of {energy_offset:.6f} applied to second segment.", "info")

        name=f"{data_[0].name}_{data_[1].name}"
        if name in self.dataset_dict:
            del self.dataset_dict[name]
    
        combined_data = MoleculeData(
            name=name,
            atom_points=combined_points,
            atom_types=combined_types,
            energies=combined_energies
        )
        self.dataset_dict[name]=combined_data
        current=self.list_model.stringList()
        if name not in current: 
            current.append(name)
            self.list_model.setStringList(current)
        self.init(2, combined_data)
        self.data_attached[2] = name
        self.log(f"new aligned dataset {name} created from {data_[0].name} and {data_[1].name}, using masked coordinates", "success")
     
    def help(self):
        if not hasattr(self, 'help_win'):
            self.help_win = HelpWindow(self)
        self.help_win.show()
        self.help_win.raise_()

    # geo_plotter drop-down 
    def show_geo_menu(self, pos):
        widget = self.sender()
        plotter_idx = [p.interactor for p in self.geo_plotters].index(widget)
        plotter = self.geo_plotters[plotter_idx]
        # --- SAFETY FIX ---
        # 1. Stop all active VTK mouse events
        plotter.interactor.GetRenderWindow().GetInteractor().ExitCallback()
        # 2. Briefly release focus on the Qt side to ensure the menu takes priority
        widget.clearFocus()
        # ------------------

        menu = QtWidgets.QMenu(self)
        
        # 1. Define menu structure
        if plotter_idx == 3:  
            actions = {
                "Change Bkgr Color": self.handle_change_bkgr,
                "Save PNG": self.handle_save_png,
                "Copy Image to Clipboard": self.handle_copy_img
                }
        else:
            # Easily extendable here
            actions = {
                "Change Bkgr Color": self.handle_change_bkgr,
                "Reverse Order": self.handle_reverse,
                "Save XYZ": self.handle_save_xyz,
                "Save PNG": self.handle_save_png,
                "Copy Image to Clipboard": self.handle_copy_img,
                "Export Video": self.handle_export_video,
                "Export POV-Ray inc": self.handle_povray,
                "Export Blender mult": self.handle_blender_mult,
                "Export Blender one": self.handle_blender_one
            }

        # 2. Dynamically add actions
        for label, func in actions.items():
            action = menu.addAction(label)
            # Store the function directly in the action object via lambda
            action.triggered.connect(lambda checked=False, f=func, idx=plotter_idx: f(idx))

        # 3. Validation (Gray out)
        if len(plotter.renderer.actors) <= 1:
            menu.setEnabled(False)

        menu.exec_(widget.mapToGlobal(pos))

        # --- REFRESH ---
        # Explicitly return focus after the menu closes
        widget.setFocus()
        plotter.render()

    def handle_change_bkgr(self, idx):
        plotter = self.geo_plotters[idx]
        
        # Select Main color
        bg_color = pv.Color(plotter.background_color).name
        color_bottom = QColorDialog.getColor(QColor(bg_color), self, "Wähle Boden-Farbe (oder Hauptfarbe)")
        
        if not color_bottom.isValid():
            return

        # Optional: select second color 
        msg = QMessageBox()
        msg.setWindowTitle("Background Style")
        msg.setText("Select second color for gradient?")
        msg.setStandardButtons(QMessageBox.Yes | QMessageBox.No)
        msg.setDefaultButton(QMessageBox.No)
        
        if msg.exec() == QMessageBox.Yes:
            color_top = QColorDialog.getColor(QColor("white"), self, "Select top color for gradient")
            if color_top.isValid():
                # linear color gradient color_bottom zu color_top 
                plotter.set_background(color_bottom.name(), top=color_top.name())
        else:
            # no gradient
            plotter.set_background(color_bottom.name())
        self.log("background changed", "info")
        plotter.render()

    def reverse(self, data_):
        data_.atom_types = data_.atom_types[::-1]
        data_.atom_points = data_.atom_points[::-1]
        data_.energies = data_.energies[::-1]
        return data_
    def handle_reverse(self, idx):
        obj = self.data_attached[idx]
        data_ = self.dataset_dict.get(obj)
        if data_ is None:return
        data_ = self.reverse(data_)
        self.dataset_dict[data_.name]=data_
        self.init(idx, data_)

    def handle_save_xyz(self, idx):
        path, _ = QFileDialog.getSaveFileName(
                    None, 
                    "Export Trajectory", 
                    f'combined_trj.xyz', 
                    "XYZ (*.xyz)"
                    )
        if not path: # no file selected ("exit")
            return
        
        obj = self.data_attached[idx]
        data_ = self.dataset_dict.get(obj)
        if data_ is None:return

        new_name=os.path.splitext(os.path.basename(path))[0]
        current=self.list_model.stringList()
        if data_.name in current:
            idx = current.index(data_.name)
            current[idx] = new_name
            self.list_model.setStringList(current)
        data_.name = new_name

        n_steps = len(data_.energies)
        n_atoms = len(data_.atom_types[0])
        with open(path, 'w') as f:
            for j in range(n_steps):
                f.write(f"{n_atoms}\n")
                energy = data_.energies[j] if data_.energies[j] is not None else 0.0
                f.write(f"Energy: {energy:16.10f}\n")
                for i in range(n_atoms):
                    atom_coord = data_.atom_points[j][i]
                    at_num = data_.atom_types[j][i]
                    symbol = elements.ELEMENTS[at_num] 
                    f.write(f"{symbol:2} {atom_coord[0]:12.8f} {atom_coord[1]:12.8f} {atom_coord[2]:12.8f}\n")
        self.log(f"xyz data {data_.name} written as: {os.path.basename(path)}", "success")

        # Create split script
        if QMessageBox.question(self, "Batch Processing", 
                        "Create a pre-configured Python split-script for this file?",
                        QMessageBox.Yes | QMessageBox.No) == QMessageBox.Yes:
            try: 
                script_name = create_split_template(path)
                self.log(f"Batch template created: {os.path.basename(script_name)}", "success")
            except Exception as e:
                self.log(f"Failed to create template: {str(e)}", "error")

    def handle_save_png(self, idx):
        path, _ = QFileDialog.getSaveFileName(None, "Save Image", "image", "Image (*.png)")
        if path:
            self.geo_plotters[idx].screenshot(path)
            self.log(f"image saved, {os.path.basename(path)}", "success")

    def handle_copy_img(self, idx):
        plotter = self.geo_plotters[idx]

        try:
            # 2. Capture the current view as an RGB numpy array
            # 'return_img=True' prevents saving to a file on disk
            img_array = plotter.screenshot(None, return_img=True)
            
            # 3. FIX: Ensure the array is C-contiguous to avoid 'BufferError' in QImage
            img_array = np.ascontiguousarray(img_array)
            
            # 4. Create QImage from the numpy buffer
            height, width, _ = img_array.shape
            bytes_per_line = 3 * width
            
            # Using .copy() ensures the clipboard data persists after the function ends
            q_image = QtGui.QImage(
                img_array.data, 
                width, 
                height, 
                bytes_per_line, 
                QtGui.QImage.Format_RGB888
            ).copy()
            
            # 5. Push the image to the system clipboard
            QtWidgets.QApplication.clipboard().setImage(q_image)
            self.log(f"3D View {idx} (without axes) copied to clipboard", "success")

        except Exception as e:
            self.log(f"Failed to copy image: {str(e)}", "error")

    def handle_export_video(self, idx):
        # 1. define target file
        path, _ = QFileDialog.getSaveFileName(self, "Save Video", "animation.mp4", "Video (*.mp4);;GIF (*.gif)")
        if not path: return

        # 2. get data
        name = self.data_attached.get(idx)
        data_ = self.dataset_dict.get(name)
        if not data_: return

        plotter = self.geo_plotters[idx]
        length = len(data_.atom_points)

        # 3. Start Movie-Writer 
        # 'framerate'  (e.g. 15-24 FPS)
        plotter.open_movie(path, framerate=15, quality=5, macro_block_size=1)

        # ProgressBar 
        self.progressBar.setRange(0, length)
        self.progressBar.show()

        # 4. Iterate through frames
        for i in range(length):
            plotter.clear_actors()
            
            # draw molecules
            visual_objects = draw_mol(
                data_.atom_points[i], 
                data_.atom_types[i], 
                self.cpk_colors, 
                self.cov_radii, 
                self.default_radius
            )
            
            for mesh, args in visual_objects:
                # IMPORTANT reset_camera=False, to keep camera focus steady
                plotter.add_mesh(mesh, reset_camera=False, smooth_shading=True, **args)
            
            # capture picture
            plotter.write_frame()
            
            # GUI Update
            self.progressBar.setValue(i + 1)
            QtWidgets.QApplication.processEvents()

        # 5. Finish
        try:
            # if mwriter is directly available (Standard )
            if hasattr(plotter, 'mwriter') and plotter.mwriter:
                plotter.mwriter.close()
            else:
                # Fallback for QtInteractor
                plotter.close() # closes Movie-Stream and the internal window
                # plotter still needed
                plotter.render() 
        except Exception as e:
            self.log(f"error: {e}", "error")
        self.progressBar.hide()
        self.log(f"video export complete, {os.path.basename(path)}", "success")

    def handle_povray(self, idx):
        path, _ = QFileDialog.getSaveFileName(
                    None, 
                    "Export POV-Ray inc", 
                    f'combined.inc', 
                    "INC (*.inc)"
                    )
        if not path: # Cancel
            return
        
        obj = self.data_attached[idx]
        data_ = self.dataset_dict.get(obj)
        if data_ is None: return
        length = int(len(data_.energies))
        object=os.path.splitext(os.path.basename(path))[0]
        export_pov_header(length,path,object)
        for i in range(length):
            export_pov_mol(np.array(data_.atom_points[i]),data_.atom_types[i],self.cov_radii,
                           self.default_radius,self.cpk_colors,path,object,i+1)
        self.log(f"POV-Ray *.inc written: {os.path.basename(path)}", "success")

    def on_export_finished(self, success, folder, base_name):
        self.progressBar.setFormat(f"")
        self.progressBar.hide()
        self.cancel_export.hide()
        self.cancel_export.setEnabled(True)
        if success:
            generate_blender_script_multi(folder, base_name)
            self.log(f"Blender multi file export done to {folder}", "success")
        else:
            self.log(f"Export cancelled", "warning")
    
    def request_stop_worker(self):
        if hasattr(self, 'worker'):
            self.worker.stop()
            self.cancel_export.setEnabled(False) # prevents double click

    def update_progress(self, val):
        self.progressBar.setValue(val)
        if val > 0:
            self.progressBar.setFormat(f"writing frames {val}% ...")

    def handle_blender_mult(self, idx):
        # Select Folder
        folder = QFileDialog.getExistingDirectory(None, "Select Export Directory")
        if not folder:
            return
        
        obj = self.data_attached[idx]
        data_ = self.dataset_dict.get(obj)
        if data_ is None: return
    
        base_name = "irc_step"

        raw_points = [np.array(p) for p in data_.atom_points]
        raw_types = list(data_.atom_types)
        pure_cpk = dict(self.cpk_colors) 
        pure_radii = dict(self.cov_radii)
        def_rad = self.default_radius

        # 2. Create the list of tasks for EVERY frame
        # This is the list the executor will iterate over later
        tasks = [
            (i, raw_points[i], raw_types[i], pure_cpk, pure_radii, def_rad, folder, base_name)
            for i in range(len(raw_points))
        ]

        self.progressBar.setFormat("Bld Export startet... %p%")
        self.progressBar.show()
        self.cancel_export.show()

        self.worker = ExportWorker(tasks, folder, base_name)
        self.worker.progress.connect(self.update_progress)
        self.worker.finished.connect(self.on_export_finished)
        self.worker.start()

    def on_one_file_finished(self, success, path):
        self.progressBar.hide()
        self.progressBar.setRange(0, 100) # reset progressbar
        self.cancel_export.hide()
        if success:
            # generate blender script
            generate_blender_script(path)
            self.log(f"Blender One File export complete, {os.path.basename(path)}", "success")
            
    def handle_blender_one(self, idx):
        path, _ = QFileDialog.getSaveFileName(
                    None, 
                    "Export Blender glb", 
                    "combined.glb", 
                    "GLB (*.glb)"
                    )
        if not path:
            return
        
        obj = self.data_attached[idx]
        data_ = self.dataset_dict.get(obj)
        if data_ is None:return
        
        self.progressBar.setFormat("Bld Export startet... %p%")
        self.progressBar.show()
        self.cancel_export.show()
        self.one_worker = OneFileExportWorker(data_, path, self.cpk_colors, 
                                          self.cov_radii, self.default_radius)
        self.one_worker.finished.connect(self.on_one_file_finished)
        self.one_worker.start()

    def is_color_light(self, qcolor):
            # RGB-Werte (0-255) holen
            r, g, b = qcolor.red(), qcolor.green(), qcolor.blue()
            
            # HSP-Luminanz-Formel (Berücksichtigt die menschliche Wahrnehmung)
            # Werte > 127.5 gelten als "hell"
            brightness = (0.299 * r + 0.587 * g + 0.114 * b)
            return brightness > 127.5
    
    # energy profile plotter drop-down
    def show_profile_menu(self, pos):
        canvas = self.sender()
        canvas_idx = self.profile_canvases.index(canvas)
        
        menu = QtWidgets.QMenu()
        change_bkgr = menu.addAction("Change Background")
        save_png = menu.addAction("Save Graph as PNG")
        save_txt = menu.addAction("Sava Data as TXT")
        copy_data = menu.addAction("Copy Data to Clipboard")
        copy_img = menu.addAction("Copy Image to Clipboard")

        if not canvas.axes.get_lines():
            menu.setEnabled(False)

        action = menu.exec_(canvas.mapToGlobal(pos))
        if action == change_bkgr:
            color = QColorDialog.getColor(QColor("white"), self, "Select color")
            if color.isValid():
                canvas = self.profile_canvases[canvas_idx]
                ax = canvas.axes
                text_color = "black" if self.is_color_light(color) else "white"
                
                # change color
                canvas.figure.set_facecolor(color.name())
                ax.set_facecolor(color.name())
                ax.tick_params(colors=text_color)
                
                # Y-Offset
                ax.yaxis.get_offset_text().set_color(text_color)

                # Frame
                for spine in ax.spines.values():
                    spine.set_edgecolor(text_color)
                
                canvas.draw()


        if action == save_png:
            path, _ = QFileDialog.getSaveFileName(None, "Save Image", "image", "Image (*.png)")
            if path:
                self.profile_canvases[canvas_idx].axes.figure.savefig(path)
                self.log(f"Image saved to {os.path.basename(path)}", "success")
        if action == save_txt:
            path, _ = QFileDialog.getSaveFileName(None, "Save Data", "text", "text (*.txt)")
            if path:
                obj = self.data_attached[canvas_idx]
                data_ = self.dataset_dict.get(obj)
                if data_ is None:return
                n = len(data_.energies)
                with open(path, 'w') as f:
                    f.write(f"Step   Energy  IRC Name: {data_.name}\n")
                    for i in range(n):
                        f.write(f"{i}      {data_.energies[i]:16.10f}\n")
                self.log(f"Energy profile {data_.name} saved to: {os.path.basename(path)}", "success")
        if action == copy_data:
            obj = self.data_attached[canvas_idx]
            data_ = self.dataset_dict.get(obj)
            df = pd.DataFrame({'Energies': data_.energies})
            pyperclip.copy(df.to_csv(sep='\t', index=True, header=True))
            self.log(f"{data_.name} copied to clipboard", "success")
        if action == copy_img:
            canvas = self.profile_canvases[canvas_idx]
            # In Puffer speichern
            buffer = io.BytesIO()
            canvas.figure.savefig(buffer, format='png', bbox_inches='tight')
            
            # In QImage umwandeln und in Clipboard laden
            image = QtGui.QImage.fromData(buffer.getvalue())
            QtWidgets.QApplication.clipboard().setImage(image)
            self.log("Graph image copied to clipboard", "success")

if __name__ == '__main__':
    app = QtWidgets.QApplication(sys.argv) 
    # Instanziieren ohne automatisches Show im Init
    window = MoleculeApp()
    window.show()   
    # macOS Fokus-Fix
    window.raise_()
    window.activateWindow()
    
    sys.exit(app.exec())
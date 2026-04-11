# -*- coding: utf-8 -*-

################################################################################
## Form generated from reading UI file 'gui.ui'
##
## Created by: Qt User Interface Compiler version 6.7.3
##
## WARNING! All changes made in this file will be lost when recompiling UI file!
################################################################################

from PySide6.QtCore import (QCoreApplication, QDate, QDateTime, QLocale,
    QMetaObject, QObject, QPoint, QRect,
    QSize, QTime, QUrl, Qt)
from PySide6.QtGui import (QAction, QBrush, QColor, QConicalGradient,
    QCursor, QFont, QFontDatabase, QGradient,
    QIcon, QImage, QKeySequence, QLinearGradient,
    QPainter, QPalette, QPixmap, QRadialGradient,
    QTransform)
from PySide6.QtWidgets import (QApplication, QCheckBox, QHBoxLayout, QLabel,
    QLineEdit, QListView, QMainWindow, QMenu,
    QMenuBar, QPlainTextEdit, QProgressBar, QPushButton,
    QSizePolicy, QStatusBar, QWidget)

class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        if not MainWindow.objectName():
            MainWindow.setObjectName(u"MainWindow")
        MainWindow.resize(1264, 817)
        self.actionLoad_trj = QAction(MainWindow)
        self.actionLoad_trj.setObjectName(u"actionLoad_trj")
        self.actionQuit = QAction(MainWindow)
        self.actionQuit.setObjectName(u"actionQuit")
        self.actionreverse_order = QAction(MainWindow)
        self.actionreverse_order.setObjectName(u"actionreverse_order")
        self.actionalign = QAction(MainWindow)
        self.actionalign.setObjectName(u"actionalign")
        self.actionsave = QAction(MainWindow)
        self.actionsave.setObjectName(u"actionsave")
        self.actionexport_pov_inc = QAction(MainWindow)
        self.actionexport_pov_inc.setObjectName(u"actionexport_pov_inc")
        self.actionexport_blender_glb = QAction(MainWindow)
        self.actionexport_blender_glb.setObjectName(u"actionexport_blender_glb")
        self.actionAlign = QAction(MainWindow)
        self.actionAlign.setObjectName(u"actionAlign")
        self.actionAlign_masked = QAction(MainWindow)
        self.actionAlign_masked.setObjectName(u"actionAlign_masked")
        self.actionHelp = QAction(MainWindow)
        self.actionHelp.setObjectName(u"actionHelp")
        self.actionCredits = QAction(MainWindow)
        self.actionCredits.setObjectName(u"actionCredits")
        self.centralwidget = QWidget(MainWindow)
        self.centralwidget.setObjectName(u"centralwidget")
        self.geo_view_0 = QWidget(self.centralwidget)
        self.geo_view_0.setObjectName(u"geo_view_0")
        self.geo_view_0.setGeometry(QRect(190, 50, 341, 261))
        self.file_view = QListView(self.centralwidget)
        self.file_view.setObjectName(u"file_view")
        self.file_view.setGeometry(QRect(10, 20, 151, 321))
        self.profile_view_0 = QWidget(self.centralwidget)
        self.profile_view_0.setObjectName(u"profile_view_0")
        self.profile_view_0.setGeometry(QRect(190, 330, 341, 191))
        self.geo_view_1 = QWidget(self.centralwidget)
        self.geo_view_1.setObjectName(u"geo_view_1")
        self.geo_view_1.setGeometry(QRect(550, 50, 341, 261))
        self.geo_view_3 = QWidget(self.centralwidget)
        self.geo_view_3.setObjectName(u"geo_view_3")
        self.geo_view_3.setGeometry(QRect(910, 50, 341, 261))
        self.profile_view_1 = QWidget(self.centralwidget)
        self.profile_view_1.setObjectName(u"profile_view_1")
        self.profile_view_1.setGeometry(QRect(550, 330, 341, 191))
        self.profile_view_2 = QWidget(self.centralwidget)
        self.profile_view_2.setObjectName(u"profile_view_2")
        self.profile_view_2.setGeometry(QRect(910, 530, 341, 231))
        self.button_toggle_0 = QPushButton(self.centralwidget)
        self.button_toggle_0.setObjectName(u"button_toggle_0")
        self.button_toggle_0.setGeometry(QRect(190, 10, 113, 32))
        self.button_toggle_1 = QPushButton(self.centralwidget)
        self.button_toggle_1.setObjectName(u"button_toggle_1")
        self.button_toggle_1.setGeometry(QRect(550, 10, 113, 32))
        self.geo_view_2 = QWidget(self.centralwidget)
        self.geo_view_2.setObjectName(u"geo_view_2")
        self.geo_view_2.setGeometry(QRect(910, 330, 341, 191))
        self.progressBar = QProgressBar(self.centralwidget)
        self.progressBar.setObjectName(u"progressBar")
        self.progressBar.setGeometry(QRect(10, 420, 151, 23))
        self.progressBar.setStyleSheet(u"\n"
"            QProgressBar {\n"
"                border: 2px solid grey;\n"
"                border-radius: 5px;\n"
"                text-align: center;\n"
"            }\n"
"            QProgressBar::chunk {\n"
"                background-color: #05B8CC; /* Ein kr\u00e4ftiges Blau/T\u00fcrkis */\n"
"                width: 20px;\n"
"            }\n"
"")
        self.progressBar.setValue(0)
        self.cancel_export = QPushButton(self.centralwidget)
        self.cancel_export.setObjectName(u"cancel_export")
        self.cancel_export.setGeometry(QRect(10, 380, 113, 32))
        self.list_0 = QListView(self.centralwidget)
        self.list_0.setObjectName(u"list_0")
        self.list_0.setGeometry(QRect(190, 530, 341, 231))
        self.list_1 = QListView(self.centralwidget)
        self.list_1.setObjectName(u"list_1")
        self.list_1.setGeometry(QRect(550, 530, 341, 231))
        self.log_widget = QPlainTextEdit(self.centralwidget)
        self.log_widget.setObjectName(u"log_widget")
        self.log_widget.setGeometry(QRect(10, 500, 161, 261))
        self.label = QLabel(self.centralwidget)
        self.label.setObjectName(u"label")
        self.label.setGeometry(QRect(10, 480, 131, 16))
        self.layoutWidget = QWidget(self.centralwidget)
        self.layoutWidget.setObjectName(u"layoutWidget")
        self.layoutWidget.setGeometry(QRect(910, 10, 331, 33))
        self.horizontalLayout = QHBoxLayout(self.layoutWidget)
        self.horizontalLayout.setObjectName(u"horizontalLayout")
        self.horizontalLayout.setContentsMargins(0, 0, 0, 0)
        self.button_toggle_2 = QPushButton(self.layoutWidget)
        self.button_toggle_2.setObjectName(u"button_toggle_2")

        self.horizontalLayout.addWidget(self.button_toggle_2)

        self.splicing = QCheckBox(self.layoutWidget)
        self.splicing.setObjectName(u"splicing")
        self.splicing.setChecked(True)

        self.horizontalLayout.addWidget(self.splicing)

        self.label_2 = QLabel(self.layoutWidget)
        self.label_2.setObjectName(u"label_2")

        self.horizontalLayout.addWidget(self.label_2)

        self.N_splicing = QLineEdit(self.layoutWidget)
        self.N_splicing.setObjectName(u"N_splicing")

        self.horizontalLayout.addWidget(self.N_splicing)

        MainWindow.setCentralWidget(self.centralwidget)
        self.menubar = QMenuBar(MainWindow)
        self.menubar.setObjectName(u"menubar")
        self.menubar.setGeometry(QRect(0, 0, 1264, 33))
        self.menuFile = QMenu(self.menubar)
        self.menuFile.setObjectName(u"menuFile")
        self.menuAction = QMenu(self.menubar)
        self.menuAction.setObjectName(u"menuAction")
        MainWindow.setMenuBar(self.menubar)
        self.statusbar = QStatusBar(MainWindow)
        self.statusbar.setObjectName(u"statusbar")
        MainWindow.setStatusBar(self.statusbar)

        self.menubar.addAction(self.menuFile.menuAction())
        self.menubar.addAction(self.menuAction.menuAction())
        self.menuFile.addAction(self.actionLoad_trj)
        self.menuFile.addAction(self.actionQuit)
        self.menuAction.addAction(self.actionAlign)
        self.menuAction.addAction(self.actionAlign_masked)
        self.menuAction.addSeparator()
        self.menuAction.addAction(self.actionHelp)
        self.menuAction.addSeparator()
        self.menuAction.addAction(self.actionCredits)

        self.retranslateUi(MainWindow)

        QMetaObject.connectSlotsByName(MainWindow)
    # setupUi

    def retranslateUi(self, MainWindow):
        MainWindow.setWindowTitle(QCoreApplication.translate("MainWindow", u"MolVista", None))
        self.actionLoad_trj.setText(QCoreApplication.translate("MainWindow", u"Load trj", None))
        self.actionQuit.setText(QCoreApplication.translate("MainWindow", u"Quit", None))
        self.actionreverse_order.setText(QCoreApplication.translate("MainWindow", u"reverse order", None))
        self.actionalign.setText(QCoreApplication.translate("MainWindow", u"align", None))
        self.actionsave.setText(QCoreApplication.translate("MainWindow", u"save xyz", None))
        self.actionexport_pov_inc.setText(QCoreApplication.translate("MainWindow", u"export pov inc", None))
        self.actionexport_blender_glb.setText(QCoreApplication.translate("MainWindow", u"export blender glb", None))
        self.actionAlign.setText(QCoreApplication.translate("MainWindow", u"Align", None))
        self.actionAlign_masked.setText(QCoreApplication.translate("MainWindow", u"Align masked", None))
        self.actionHelp.setText(QCoreApplication.translate("MainWindow", u"Help", None))
        self.actionCredits.setText(QCoreApplication.translate("MainWindow", u"Credits", None))
        self.button_toggle_0.setText(QCoreApplication.translate("MainWindow", u"Play/Pause", None))
        self.button_toggle_1.setText(QCoreApplication.translate("MainWindow", u"Play/Pause", None))
        self.cancel_export.setText(QCoreApplication.translate("MainWindow", u"Cancel", None))
        self.label.setText(QCoreApplication.translate("MainWindow", u"Action Log", None))
        self.button_toggle_2.setText(QCoreApplication.translate("MainWindow", u"Play/Pause", None))
        self.splicing.setText(QCoreApplication.translate("MainWindow", u"splicing", None))
        self.label_2.setText(QCoreApplication.translate("MainWindow", u"Splicing images", None))
        self.N_splicing.setText(QCoreApplication.translate("MainWindow", u"30", None))
        self.menuFile.setTitle(QCoreApplication.translate("MainWindow", u"File", None))
        self.menuAction.setTitle(QCoreApplication.translate("MainWindow", u"Action", None))
    # retranslateUi


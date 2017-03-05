# DPV_diveplanner
Application to plan your DPV dive according too GUE standards (C++, Qt5.8)


# to update ui_mainwindow.h

After changes in the interface (QT designer or QT creator) you need to (re) generate the ui header and source files (ui_mainwindow.h and ui_mainwindow..cpp)
To do this run:

$ uic -o ui_mainwindow.h mainwindow.ui

uic resides in "/usr/local/Cellar/qt5/5.8.0_1/bin/uic" (for brew install on osx)


# compile outside of Qt-creator

First create a propper MakeFile
$ qmake diveplanner.pro

Then compile using that MakeFile

$ make

# Using Xcode 
qmake -spec macx-xcode diveplanner.pro

Open the generated xcode project file with xcode.. you can now build & run within xcode!


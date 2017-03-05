# Intro

While doing my GUE DPV cave course we learned alot about gas-planning.
This becuase both gas and burntime calculations are quite important to do correctly when taking a DPV into a cave.
As part of the course we got an Excell sheet presented that tried to calculate a proper diveplan according the the amount of gas you would carry.
At a first glance this seemed to work kint of, but when looking into the results and do some control calculations I found it did not work correctly at various places.

So to actually be able to get an idea about the situations we will be prepared for,.. I wrote this program.

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


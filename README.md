

## Gromacs GUI

**Gromacs GUI** provides a graphical user interface for GROMACS. I wrote this
package 6 years ago when I was starting to learn about MD simulations. 

After several years, now I believe that GUI's in general are not that efficient. 
In fact I think writing scripts to run and analyze simulations is much more productive and flexible than working with a GUI. Therefore this package is no longer in active development. 

This repo is a mirror of the [original upload](http://kde-apps.org/content/show.php?content=47665).

* * * * *

### Current status
*  version: 0.5.2
*  status: beta


### Features

1. File browsing and management with customizable right-click pop up menu.
2. Graphical interfaces for GROMACS commands (currently 21 commands have their own interfaces).
3. Plot drawing tool which can export plots to pdf.
4. A simple built-in console.
5. Built-in GROMACS manual viewer.
6. Built-in file editor with syntax highlighting for some GROMACS file formats (currently only mdp format is supported).
7. MDP Writer section to easily create your mdp files.
8. File icons based on their types.

### Note
Because some people may encounter problems when installing plotting dependecies of GroGUI (including myself when trying to compile and install qwt source on a 64bit machine!), I have provided two versions of GroGUI 0.5.2:

1- gui_noplotting : it only needs Qt 4.3.x (tested with Qt 4.3.3) , which their binary packages are available for many distribusions. For OpenSuse, either use your favorite package installer (e.g. yast, smart, zypper) or download packages here: 
http://software.opensuse.org/search?baseproject=openSUSE:10.3

2- gui_withplotting: it needs both Qt 4.3.x and Qwt 5. Packages for OpenSuse are available too.

So prerequisites are
Qt 4.3.x (both lib and devel packages)
Qwt 5 (both lib and devel packages) only if you want to compile plot supporting version.

### How to work with GUI
Working with the gui is simple:

- run the gui through a terminal : ./grogui 
- after the main window appears navigate to your working directory. in file browser you can double click a directory to enter to it, double click a file to open it in file editor, right click on a file to show the popup menu (you can edit popup menu items later) and click on a previously selected item to change its name.
- when you are in your working directory, go to Commands tab, select a command (e.g. editconf) and double click it to bring up the interface. here you can select command options and see live preview of the command to be executed in the run box. now push Run button to run your command in a xterm window (you can later select konsole as your default terminal).
- the plot widget adds any xvg file in your current working directory to its plot list. double click on a plot name (e.g. rmsd.xvg) to bring up its contents. when there are several data series in a file, you can click on a data name to hide its plot. you can go to plot tools where some plotting tools are available.
- in the Console tab a very simple terminal is provided. 
- in Manual tab you can review GROMACS online manual. you can set the link of this online help in Setting dialog.
- in MDP Writer dialog, you can easily create your mdp files.
- in Setting dialog you can set some options including popup menu items. the syntax is simple: if you want to add xmgrace to your popup menu add this :
Name: xmgrace
Command: xmgrace %s	
or for vmd:
Name: vmd
Command: vmd %s
(%s is a place holder for file name.)
- if you want to create a shortcut in your desktop, please set the working directory of shortcut to grogui directory. If not, icons of file browser wont display.

### Known bugs
http://resal.wordpress.com/gromacs-gui

### Slideshow
There is an introduction slideshow for version 0.5.0 (in swf format which can be viewed using a web browser) available for download here:
http://resal.wordpress.com/gromacs-gui/slideshow

### Feedback
Although the GUI is becoming more useful, but a lot of features are still missing. If you have encountered a problem (can't compile, can't run, a bug ...) or got a suggestion, I appreciate if you submit it here:
http://resal.wordpress.com/gromacs-gui/feedback




### Changelog:
0.5.2 Incorporating of an improved file browser to the main window. Rendering icons based on their type. Some bug fixes.

0.5 Complete rewrite of the code in Qt4 with many improvements

0.3 Interfaces for pdb2gmx, editconf, genbox, genion, grompp and mdrun

0.25 Completion of file manager plus several bugfixes. Now you can navigate through file system by double-clicking on directory icons and using top toolbar. File manager now supports auto-refresh. There is although a manual tab for viewing online GROMACS manual directly.

0.2 Many improvements including Files Overview section, iconifying files based on their types, customizable right-click popup menus and some bug fixes.

0.1 Initial release.

# NewBreeze [![Build Status](https://travis-ci.org/marcusbritanicus/NewBreeze.svg?branch=master)](https://travis-ci.org/marcusbritanicus/NewBreeze)
## A fast and light-weight file manager based on Qt

### This is my final commit on GitHub. The project continues to grow and develop on [GitLab](https://gitlab.com/marcusbritanicus/NewBreeze). See you all there! :)

Built on top of the Powerful Qt GUI Toolkit, this file manager is sleek, stylish and fast.
Some of its features are

* Fast startup and browsing
* Folder, text, html, image, odt, and pdf quick preview
* File Association support
* Provides Categorized List, Icon and Details View
* Sleek side panel showing drives and bookmarks
* Full drag and drop support
* Applications, Catalog View and SuperStart
* Auto update devices list
* Custom Folder Icons and Thumbnail Preview
* Complete mime-icon support
* BreadCrumbs Navigation Bar
* Custom Actions and Inline terminal
* SingleApplication Mode for resource sharing
* Plugin System Support

## Linux Source Available
### Windows source is no longer being maintained

### Please READ the ReleaseNotes for information on the new features

### Notes for compiling - linux:

* Download the sources
   - Git: `git clone https://github.com/marcusbritanicus/NewBreeze NewBreeze-master`
   - Tar: `wget https://github.com/marcusbritanicus/NewBreeze/archive/master.tar.gz && tar -xf master.tar.gz`
* Enter `NewBreeze-master`
* Open the terminal and type: `qmake && make`
* To install, as root type: `make install`

### Dependencies:
* Qt4/Qt5 (libqt4-dev, libqt4-dev-bin, qtbase5-dev, qtbase5-dev-tools)
    * QtWebKit in case of Qt4 and upto Qt 5.4 (libqtwebkit-dev, libqt5webkit5-dev, qtwebkit5-dev)
    * QtWebEngine Qt 5.5 onwards (qtwebengine5-dev)
    * QScintilla (libqt5scintilla2-dev, libqscintilla2-qt5-dev)
* zlib (zlib1g-dev)
* liblzma (liblzma-dev)
* libbzip2 (libbz2-dev)
* libarchive (libarchive-dev)
* xdg-utils
* libpoppler-qt4/qt5 (libpoppler-qt4-dev, libpoppler-qt5-dev)
* libdjvulibre-dev (libdjvulibre-dev)

### Known Bugs
* Reloading causes custom folder icons not to be rendered in some cases

### Upcoming
* Any other feature you request for... :)

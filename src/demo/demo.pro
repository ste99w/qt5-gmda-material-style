include(../../materialstyleplugin.pri)

QT += widgets

HEADERS    = demowindow.h
SOURCES    = demowindow.cpp \
             main.cpp

TARGET     = qt5gmdamaterialstyledemo
DESTDIR    = ../../

target.path = $$BINDIR

INSTALLS += target

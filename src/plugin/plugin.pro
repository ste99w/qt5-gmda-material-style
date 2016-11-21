include(../../materialstyleplugin.pri)

TEMPLATE = lib
CONFIG += plugin
QT += widgets

TARGET = qt5gmdamaterialstyleplugin

HEADERS += materialstyle.h \
           materialstyleplugin.h
SOURCES += materialstyle.cpp \
           materialstyleplugin.cpp

DESTDIR = ../../styles/

target.path = $$PLUGINDIR

INSTALLS += target

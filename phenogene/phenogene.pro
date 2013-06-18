#-------------------------------------------------
#
# Project created by QtCreator 2013-06-10T18:42:37
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = phenogene
TEMPLATE = app


SOURCES += main.cpp\
    NN_constructor.cpp \
    NN_setters.cpp \
    NN_getters.cpp \
    FM_getters.cpp \
    FM_setters.cpp \
    FM.cpp \
    NN.cpp \
    GUI.cpp \
    GUI_constructor.cpp \
    GUI_startButton.cpp

HEADERS  += \
    FileManager.h \
    NeuralNetwork.h \
    GUI.h \
    General_Notation.h

FORMS    += phenogene.ui

RESOURCES += \
    resource.qrc

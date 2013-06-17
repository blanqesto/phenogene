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
        phenogene.cpp \
    neural_network.cpp \
    fileHandle.cpp \
    NN_constructor.cpp \
    phenogene_constructor.cpp \
    start_button.cpp

HEADERS  += phenogene.h \
    NN.h

FORMS    += phenogene.ui

RESOURCES += \
    resource.qrc

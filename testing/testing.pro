#-------------------------------------------------
#
# Project created by QtCreator 2016-03-09T15:17:45
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = testing
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \

INCLUDEPATH += /home/zishan/opencv-3.1.0
LIBS += -L/usr/local/lib
LIBS += -lopencv_core
LIBS += -lopencv_imgproc
LIBS += -lopencv_highgui
LIBS += -lopencv_ml
LIBS += -lopencv_video
LIBS += -lopencv_features2d
LIBS += -lopencv_calib3d
LIBS += -lopencv_objdetect
LIBS += -lopencv_flann
LIBS += -lopencv_imgcodecs


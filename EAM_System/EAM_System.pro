#-------------------------------------------------
#
# Project created by QtCreator 2012-09-27T15:28:14
#
#-------------------------------------------------

QT       += core gui

TARGET = EAM_System
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    mainwidget.cpp \
    courcewidget.cpp \
    schedule.cpp \
    point.cpp \
    core.cpp \
    dbconnect.cpp

HEADERS  += mainwindow.h \
    mainwidget.h \
    courcewidget.h \
    schedule.h \
    point.h \
    core.h \
    dbconnect.h

FORMS    += mainwindow.ui \
    mainwidget.ui \
    courcewidget.ui \
    schedule.ui \
    point.ui

RESOURCES += \
    source.qrc

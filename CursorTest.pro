#-------------------------------------------------
#
# Project created by QtCreator 2015-08-18T13:37:11
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CursorTest
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    customcursor.cpp \
    cursorfactory.cpp

HEADERS  += mainwindow.h \
    customcursor.h \
    cursorfactory.h

FORMS    += mainwindow.ui

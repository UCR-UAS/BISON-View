#-------------------------------------------------
#
# Project created by QtCreator 2014-12-07T16:03:37
#
#-------------------------------------------------

QT       += core
QT       += network

QT       -= gui

TARGET = Bison-ViewServer
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    server.cpp \
    thread.cpp

HEADERS += \
    server.h \
    thread.h

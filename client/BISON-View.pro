#-------------------------------------------------
#
# Project created by QtCreator 2014-10-18T08:31:10
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BISON-View
TEMPLATE = app


SOURCES += main.cpp\
        bison_view.cpp \
    go_nogo.cpp \
    welcome_message.cpp

HEADERS  += bison_view.h \
    go_nogo.h \
    welcome_message.h \
    Structures.h \
    BISON.h

FORMS    += bison_view.ui \
    welcome_message.ui \
    server_select.ui

OTHER_FILES += \
    Notes.txt

#-------------------------------------------------
#
# Project created by QtCreator 2014-10-18T08:31:10
#
#-------------------------------------------------

QT       += core gui
QT       += network
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BISON-View
TEMPLATE = app


SOURCES += main.cpp\
        bison_view.cpp \
    go_nogo.cpp \
    welcome_message.cpp \
    what_s_this.cpp \
    help.cpp \
    mission_commander.cpp \
    telemetry.cpp \
    image_processing.cpp \
    mission.cpp \
    autopilot.cpp \
    set_server.cpp

HEADERS  += bison_view.h \
    go_nogo.h \
    welcome_message.h \
    Structures.h \
    BISON.h \
    what_s_this.h \
    help.h \
    mission_commander.h \
    telemetry.h \
    image_processing.h \
    mission.h \
    autopilot.h \
    set_server.h

FORMS    += bison_view.ui \
    welcome_message.ui \
    server_select.ui \
    what_s_this.ui \
    help.ui \
    mission_commander.ui \
    telemetry.ui \
    image_processing.ui \
    mission.ui \
    autopilot.ui \
    set_server.ui

OTHER_FILES += \
    Notes.txt

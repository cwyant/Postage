#-------------------------------------------------
#
# Project created by QtCreator 2013-10-10T21:13:42
#
#-------------------------------------------------

QT       += gui core
QT       += network
QT       += widgets

TARGET = Postage
TEMPLATE += app


SOURCES += main.cpp\
        mainview.cpp \
    Peer.cpp \
    gatekeeper.cpp

HEADERS  += mainview.h \
    Peer.h \
    gatekeeper.h

FORMS    += mainview.ui

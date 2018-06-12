#-------------------------------------------------
#
# Project created by QtCreator 2018-05-19T14:09:43
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Symulator
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0




SOURCES += \
        main.cpp \
        mainwindow.cpp \
    budynki.cpp \
    cobiekt.cpp \
    cpole.cpp \
    cpojazd.cpp \
    cciagnik.cpp \
    ckombajn.cpp \
    cmaszyna.cpp \
    cplug.cpp \
    csiewnik.cpp \
    cprzyczepa.cpp \
    citem.cpp \
    cmapa.cpp \
    cczas.cpp \
    nowa_gra.cpp \
    oknogry.cpp \
    GUI/gobiekt.cpp \
    GUI/gpole.cpp

HEADERS += \
        mainwindow.h \
    budynki.h \
    cobiekt.h \
    cpole.h \
    cpojazd.h \
    cciagnik.h \
    ckombajn.h \
    cmaszyna.h \
    cplug.h \
    csiewnik.h \
    cprzyczepa.h \
    citem.h \
    cmapa.h \
    cczas.h \
    nowa_gra.h \
    oknogry.h \
    GUI/gobiekt.h \
    GUI/gpole.h

FORMS += \
        mainwindow.ui \
    nowa_gra.ui \
    oknogry.ui

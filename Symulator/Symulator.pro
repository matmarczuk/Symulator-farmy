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
    src/main.cpp \
    src/mainwindow.cpp \
    src/budynki.cpp \
    src/cobiekt.cpp \
    src/cpole.cpp \
    src/cpojazd.cpp \
    src/cciagnik.cpp \
    src/ckombajn.cpp \
    src/cmaszyna.cpp \
    src/cplug.cpp \
    src/csiewnik.cpp \
    src/cprzyczepa.cpp \
    src/citem.cpp \
    src/cmapa.cpp \
    src/cczas.cpp \
    src/nowa_gra.cpp \
    src/oknogry.cpp \
    src/cgaraz.cpp \
    GUI/gobiekt.cpp \
    GUI/gpole.cpp \
    GUI/gmapa.cpp \
    GUI/gciagnik.cpp \
    GUI/ggaraz.cpp

HEADERS += \
    include/mainwindow.h \
    include/budynki.h \
    include/cobiekt.h \
    include/cpole.h \
    include/cpojazd.h \
    include/cciagnik.h \
    include/ckombajn.h \
    include/cmaszyna.h \
    include/cplug.h \
    include/csiewnik.h \
    include/cprzyczepa.h \
    include/citem.h \
    include/cmapa.h \
    include/cczas.h \
    include/nowa_gra.h \
    include/oknogry.h \
    include/cgaraz.h \
    GUI/gobiekt.h \
    GUI/gpole.h \
    GUI/gmapa.h \
    GUI/gciagnik.h \   
    GUI/ggaraz.h

FORMS += \
    GUI/mainwindow.ui \
    GUI/nowa_gra.ui \
    GUI/oknogry.ui

RESOURCES += \
    farma.qrc

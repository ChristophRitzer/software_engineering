#-------------------------------------------------
#
# Project created by QtCreator 2015-12-12T08:07:26
#
#-------------------------------------------------

QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SWE
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Administrator.cpp \
    Anwender.cpp \
    Datenbankverwaltung.cpp \
    Kategorie.cpp \
    Transaktion.cpp \
    Zahlungsart.cpp

HEADERS  += mainwindow.h \
    Administrator.h \
    Anwender.h \
    Datenbankverwaltung.h \
    Kategorie.h \
    Transaktion.h \
    Zahlungsart.h \
    Datum.h

FORMS    += mainwindow.ui

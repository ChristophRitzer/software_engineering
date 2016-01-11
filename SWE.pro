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
    Zahlungsart.cpp \
    einnahmeerfassen.cpp \
    ausgabeerfassen.cpp \
    administratoranlegen.cpp \
    passwortaendern.cpp \
    benutzerverwaltung.cpp \
    zahlungsartenverwalten.cpp \
    kategorienverwaltung.cpp \
    neuenadminbestimmen.cpp \
    login.cpp

HEADERS  += mainwindow.h \
    Administrator.h \
    Anwender.h \
    Datenbankverwaltung.h \
    Kategorie.h \
    Transaktion.h \
    Zahlungsart.h \
    einnahmeerfassen.h \
    ausgabeerfassen.h \
    administratoranlegen.h \
    passwortaendern.h \
    benutzerverwaltung.h \
    zahlungsartenverwalten.h \
    kategorienverwaltung.h \
    neuenadminbestimmen.h \
    login.h

FORMS    += mainwindow.ui \
    einnahmeerfassen.ui \
    ausgabeerfassen.ui \
    administratoranlegen.ui \
    passwortaendern.ui \
    benutzerverwaltung.ui \
    zahlungsartenverwalten.ui \
    kategorienverwaltung.ui \
    neuenadminbestimmen.ui \
    login.ui

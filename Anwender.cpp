///////////////////////////////////////////////////////////
//  Anwender.cpp
//  Implementation of the Class Anwender
//  Created on:      10-Dez-2015 12:03:54
//  Original author: 51957
///////////////////////////////////////////////////////////

#include "Anwender.h"


//Konstruktor muss noch Admin anlegen können.
Anwender::Anwender(QString email, Datum geburtstag, QString passwort, QString vName, QString nName){
    Anwender::email = email;
    Geburtsdatum = geburtstag;
    Kennwort = passwort;
    Nachname = nName;
    Vorname = vName;
    kontostand = 0;

    eingeloggt = false;
    isAdmin = false;
}


Anwender::~Anwender(){
    //Hier anwender Objekt löschen und db aufrufen zum löschen
}


void Anwender::abmelden(){
    //Gute frage wie das realisiert wird
}


int Anwender::Abrechnunganzeigen(Datum anfang, Datum ende){

	return 0;
}


int Anwender::aenderPW(QString altPW, QString neuPW, QString neuPW2){

	return 0;
}


void Anwender::transaktion(int zahl, Zahlungsart zahlungsart, Datum datum, Kategorie kategorie, QString quelle, QString bezeichnung){
    //Transaktion::Transaktion(zahl, datum, quelle, bezeichnung);
}


void Anwender::Zahlungsartanlegen(QString name){
    //Zahlungsart::Zahlungsart(name);
}

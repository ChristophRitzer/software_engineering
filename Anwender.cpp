///////////////////////////////////////////////////////////
//  Anwender.cpp
//  Implementation of the Class Anwender
//  Created on:      10-Dez-2015 12:03:54
//  Original author: 51957
///////////////////////////////////////////////////////////

#include "Anwender.h"


//Konstruktor muss noch Admin anlegen können.
Anwender::Anwender(QString email, QString geburtstag, QString passwort, QString vName, QString nName, bool isAdmin){
    Anwender::email = email;
    Geburtsdatum = geburtstag;
    Kennwort = passwort;
    Nachname = nName;
    Vorname = vName;
    kontostand = 0;

   m_Datenbankverwaltung = new Datenbankverwaltung();

    eingeloggt = false;
    isAdmin = isAdmin;
}


Anwender::~Anwender(){
    //Hier anwender Objekt löschen und db aufrufen zum löschen
}


void Anwender::abmelden(){
    //Gute frage wie das realisiert wird
    //Eventuell anwender löschen aber in db behalten
}


int Anwender::Abrechnunganzeigen(QString anfang, QString ende){
    QList<Transaktion> transaktionen = m_Datenbankverwaltung->getTransaktionen(this,anfang,ende);//letzten Paramenter überarbeiten
	return 0;
}


int Anwender::aenderPW(QString altPW, QString neuPW, QString neuPW2){
    //Funktion zum Passwort ändern erstellen
	return 0;
}


void Anwender::transaktion(int zahl, Zahlungsart zahlungsart, QString datum, Kategorie kategorie, QString quelle, QString bezeichnung){
    Transaktion *pTrans = new Transaktion(zahl,datum, quelle, bezeichnung);
    m_Datenbankverwaltung->erstelleTransaktion(zahl,datum, 7,7,zahlungsart.getName(), quelle); //zahlungsartid und kategorieid müssen noch erfasst werden
    //Transaktion::Transaktion(zahl, datum, quelle, bezeichnung);
}


void Anwender::Zahlungsartanlegen(QString name){
    //Zahlungsart::Zahlungsart(name);
    Zahlungsart* pZahl = new Zahlungsart(name);
    m_Datenbankverwaltung->erstelleZahlungsart(name);
}

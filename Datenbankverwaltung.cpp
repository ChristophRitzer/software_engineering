///////////////////////////////////////////////////////////
//  Datenbankverwaltung.cpp
//  Implementation of the Class Datenbankverwaltung
//  Created on:      10-Dez-2015 12:03:54
//  Original author: Christoph Ritzer
///////////////////////////////////////////////////////////

#include "Datenbankverwaltung.h"
//SQL Statements integrieren -> wie?

Datenbankverwaltung::Datenbankverwaltung(){
  // Datenbank = QSqlDatabase::addDatabase("QSQLITE");
}



Datenbankverwaltung::~Datenbankverwaltung(){

}





bool Datenbankverwaltung::aendereKategorie(QString name, QString alterName){

	return false;
}


void Datenbankverwaltung::erstelleAnwender(QString email, Datum geburtstag, QString passwort, QString vName, QString nName){

}


void Datenbankverwaltung::erstelleKategorie(QString name){

}


void Datenbankverwaltung::erstelleTransaktion(int betrag, Datum datum, QString zahlungsart, QString quelle){

}


void Datenbankverwaltung::erstelleZahlungsart(QString zahlungsart){

}


Administrator* Datenbankverwaltung::getAdministrator(){

    return  NULL;
}

/*QList<Transaktion> Datenbankverwaltung::getTransaktionen(Anwender* User, Datum startDatum, Datum endDatum, Kategorie kategorie)
{
   // return NULL;
}

QList<Zahlungsart> Datenbankverwaltung::getZahlungsart()
{
    //return NULL;
}*/


Anwender* Datenbankverwaltung::getAnwender(){

	return  NULL;
}


Kategorie* Datenbankverwaltung::getKategorie(){

	return  NULL;
}



void Datenbankverwaltung::loescheAnwender(){

}


void Datenbankverwaltung::loescheKategorie(QString name){

}


void Datenbankverwaltung::loescheTransaktion(int betrag, Datum datum, QString bezeichnung, QString quelle){

}


void Datenbankverwaltung::loescheZahlung(QString name){

}

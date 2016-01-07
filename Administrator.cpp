///////////////////////////////////////////////////////////
//  Administrator.cpp
//  Implementation of the Class Administrator
//  Created on:      10-Dez-2015 12:03:53
//  Original author: 51957
///////////////////////////////////////////////////////////

#include "Administrator.h"


Administrator::~Administrator(){
    //delete admin?
}





void Administrator::Anwenderanlegen(QString email, QString geburtsdatum, QString passwort, QString vName, QString nName){
    //Muss nachgeschlagen werden wie man den Konstruktor aufruf hier richtig realisiert
    //Anwender::Anwender(email, geburtsdatum, passwort, vName, nName);

    Anwender* pErst = new Anwender(email, geburtsdatum, passwort, vName, nName);
    db->erstelleAnwender(email, geburtsdatum, passwort, vName, nName);
}


void Administrator::Anwenderloeschen(QString email){
        //Anwender mit der Angegebenen email identifizieren und dann löschen
        //Anwender* pAn = db->loescheAnwender();//Parameter
}


void Administrator::Kategorieanlegen(QString katName){
    //Selbes Problem wie vorher -> Konstruktor aufruf so nicht möglich
    //Kategorie::Kategorie(katName);
    Kategorie* kat = new Kategorie(katName);
    db->erstelleKategorie(katName);
}


bool Administrator::Kategorieloeschen(QString katName){
    //Prüfe ob angegebene Kategorie bereits verwendet wird, und lösche falls nicht verwendet.
	return false;
}


void Administrator::neuesPasswort(QString email, QString passwort){
    //Anwender identifizieren und dann neues passwort vergeben
    Anwender* pAn = db->getAnwender(); //Get Funktion benötigt parameter Funktion zum passwort ändern anlegen!
}

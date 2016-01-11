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

    m_Anwender = new Anwender(email, geburtsdatum, passwort, vName, nName, false);
    db->erstelleAnwender(email, geburtsdatum, passwort, vName, nName, false);
}


void Administrator::Anwenderloeschen(QString email){
        //Anwender mit der Angegebenen email identifizieren und dann löschen
        //Anwender* pAn = db->loescheAnwender();//Parameter
}


void Administrator::Kategorieanlegen(QString katName){
    //Selbes Problem wie vorher -> Konstruktor aufruf so nicht möglich
    //Kategorie::Kategorie(katName);
    m_Kategorie = new Kategorie(katName);
    db->erstelleKategorie(katName);
}


bool Administrator::Kategorieloeschen(QString katName){
    //Prüfe ob angegebene Kategorie bereits verwendet wird, und lösche falls nicht verwendet.
	return false;
}


void Administrator::neuesPasswort(QString email, QString passwort){
    //Anwender identifizieren und dann neues passwort vergeben
    m_Anwender = db->getAnwender(); //Get Funktion benötigt parameter Funktion zum passwort ändern anlegen!
}

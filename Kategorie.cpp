///////////////////////////////////////////////////////////
//  Kategorie.cpp
//  Implementation of the Class Kategorie
//  Created on:      10-Dez-2015 12:03:54
//  Original author: Christoph Ritzer
///////////////////////////////////////////////////////////

#include "Kategorie.h"


Kategorie::Kategorie(){

}



Kategorie::~Kategorie(){
    Datenbankverwaltung* db = new Datenbankverwaltung;
    db->loescheKategorie(this->kategorie);
    //Datenbankverwaltung::loescheKategorie(this->kategorie);
    //delete::Kategorie;
}





Kategorie::Kategorie(QString name){
    kategorie = name;
}


bool Kategorie::aendereKategorie(QString name, QString alterName){
    //finde Kategorie mit alterName und ersetze durch name
    Datenbankverwaltung* db = new Datenbankverwaltung;
    db->aendereKategorie(name, alterName);
	return false;
}

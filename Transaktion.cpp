///////////////////////////////////////////////////////////
//  Transaktion.cpp
//  Implementation of the Class Transaktion
//  Created on:      10-Dez-2015 12:03:54
//  Original author: 51957
///////////////////////////////////////////////////////////

#include "Transaktion.h"
#include "Datenbankverwaltung.h"

Transaktion::Transaktion(){

}





Transaktion::Transaktion(int betrag, Datum datum, QString bezeichnung, QString quelle){
    Betrag = betrag;
    this->datum = datum;
    Bezeichnung = bezeichnung;
    Quelle = quelle;
}


Transaktion::~Transaktion(){
    //delete::Transaktion;
    //Datenbankverwaltung::loescheTransaktion(Betrag, Datum, Bezeichnung, Quelle);
}

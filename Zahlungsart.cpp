///////////////////////////////////////////////////////////
//  Zahlungsart.cpp
//  Implementation of the Class Zahlungsart
//  Created on:      10-Dez-2015 12:03:54
//  Original author: 51957
///////////////////////////////////////////////////////////

#include "Zahlungsart.h"
#include "Datenbankverwaltung.h"

Zahlungsart::Zahlungsart(){

}



Zahlungsart::~Zahlungsart(){
    pDat->loescheZahlung(zahlungsart);
    delete this;
}





Zahlungsart::Zahlungsart(QString name){
    zahlungsart = name;
    pDat = new Datenbankverwaltung();
    pDat->erstelleZahlungsart(name);
}


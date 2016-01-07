///////////////////////////////////////////////////////////
//  Administrator.h
//  Implementation of the Class Administrator
//  Created on:      10-Dez-2015 12:03:53
//  Original author: Christoph Ritzer
///////////////////////////////////////////////////////////

#if !defined(EA_BDF29DC1_E75E_4112_B509_F8D7DA62F586__INCLUDED_)
#define EA_BDF29DC1_E75E_4112_B509_F8D7DA62F586__INCLUDED_

#include "Datenbankverwaltung.h"
#include "Kategorie.h"
#include "Anwender.h"
#include <QString>


class Administrator : public Anwender
{

public:
    Administrator(){
        //Admin anlegen!
    }

    virtual ~Administrator();
private:
	Kategorie *m_Kategorie;
	Anwender *m_Anwender;
    Datenbankverwaltung* db = new Datenbankverwaltung();

public:

    void Anwenderanlegen(QString email, QString geburtsdatum, QString passwort, QString vName, QString nName);
    void Anwenderloeschen(QString email);
    void Kategorieanlegen(QString katName);
    bool Kategorieloeschen(QString katName);
    void neuesPasswort(QString email, QString passwort);

};
#endif // !defined(EA_BDF29DC1_E75E_4112_B509_F8D7DA62F586__INCLUDED_)

///////////////////////////////////////////////////////////
//  Kategorie.h
//  Implementation of the Class Kategorie
//  Created on:      10-Dez-2015 12:03:54
//  Original author: 51957
///////////////////////////////////////////////////////////

#if !defined(EA_279476F4_FB15_484d_8D15_6B4261143D4A__INCLUDED_)
#define EA_279476F4_FB15_484d_8D15_6B4261143D4A__INCLUDED_

#include <QString>
#include "Datenbankverwaltung.h"
//#include "Datum.h"
//class Datenbankverwaltung;

class Kategorie
{

public:
	Kategorie();
	virtual ~Kategorie();

    Kategorie(QString name);
    bool aendereKategorie(QString name, QString alterName);

private:
    QString kategorie;

};
#endif // !defined(EA_279476F4_FB15_484d_8D15_6B4261143D4A__INCLUDED_)

///////////////////////////////////////////////////////////
//  Zahlungsart.h
//  Implementation of the Class Zahlungsart
//  Created on:      10-Dez-2015 12:03:54
//  Original author: 51957
///////////////////////////////////////////////////////////

#if !defined(EA_45BD5840_6F2A_4f7e_A528_67A7ED4674C8__INCLUDED_)
#define EA_45BD5840_6F2A_4f7e_A528_67A7ED4674C8__INCLUDED_

#include <QString>
#include "Datenbankverwaltung.h"

//class Datenbankverwaltung;

class Zahlungsart
{

public:
	Zahlungsart();
    virtual ~Zahlungsart();

    Zahlungsart(QString name);
    QString getName(){
        return zahlungsart;
    }

private:
    QString zahlungsart;
    Datenbankverwaltung* pDat;

};
#endif // !defined(EA_45BD5840_6F2A_4f7e_A528_67A7ED4674C8__INCLUDED_)

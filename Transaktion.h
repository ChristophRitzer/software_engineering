///////////////////////////////////////////////////////////
//  Transaktion.h
//  Implementation of the Class Transaktion
//  Created on:      10-Dez-2015 12:03:54
//  Original author: 51957
///////////////////////////////////////////////////////////

#if !defined(EA_D656A92A_872D_46df_BB92_B64B1981094B__INCLUDED_)
#define EA_D656A92A_872D_46df_BB92_B64B1981094B__INCLUDED_

#include "Datum.h"
#include "Zahlungsart.h"
#include "Kategorie.h"
#include <QString>

class Kategorie;

class Transaktion
{

public:
	Transaktion();
	Kategorie *m_Kategorie;

    Transaktion(int betrag, Datum datum, QString bezeichnung, QString quelle);
    ~Transaktion();

private:
	int Betrag;
    QString Bezeichnung;
    Datum datum;
    QString Kategorie;
    QString Quelle;
    QString zahlungsart;
	Zahlungsart *m_Zahlungsart;

};
#endif // !defined(EA_D656A92A_872D_46df_BB92_B64B1981094B__INCLUDED_)

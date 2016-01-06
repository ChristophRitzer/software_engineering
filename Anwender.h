///////////////////////////////////////////////////////////
//  Anwender.h
//  Implementation of the Class Anwender
//  Created on:      10-Dez-2015 12:03:53
//  Original author: 51957
///////////////////////////////////////////////////////////

#if !defined(EA_23723010_D39A_4e59_B251_2CCBC9C5A0F5__INCLUDED_)
#define EA_23723010_D39A_4e59_B251_2CCBC9C5A0F5__INCLUDED_

#include "Kategorie.h"
#include "Zahlungsart.h"
#include "Transaktion.h"
#include <QString>

class Transaktion;
class Kategorie;
class Zahlungsart;

class Datenbankverwaltung;

class Anwender
{

public:
	Anwender();
	Zahlungsart *m_Zahlungsart;
	Transaktion *m_Transaktion;
	Datenbankverwaltung *m_Datenbankverwaltung;

    Anwender(QString email, Datum geburtstag, QString passwort, QString vName, QString nName);
	~Anwender();
	void abmelden();
	int Abrechnunganzeigen(Datum anfang, Datum ende);
    int aenderPW(QString altPW, QString neuPW, QString neuPW2);
    void transaktion(int zahl, Zahlungsart zahlungsart, Datum datum, Kategorie kategorie, QString quelle, QString bezeichnung);
    void Zahlungsartanlegen(QString name);

protected:
	bool eingeloggt;
    QString email;
	Datum Geburtsdatum;
	bool isAdmin;
    QString Kennwort;
	/**
	 * Kontostand ganzzahlig in Cent
	 */
	int kontostand;
    QString Nachname;
    QString Vorname;

};
#endif // !defined(EA_23723010_D39A_4e59_B251_2CCBC9C5A0F5__INCLUDED_)

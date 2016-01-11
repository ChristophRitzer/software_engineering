///////////////////////////////////////////////////////////
//  Datenbankverwaltung.h
//  Implementation of the Class Datenbankverwaltung
//  Created on:      10-Dez-2015 12:03:54
//  Original author: Christoph Ritzer
///////////////////////////////////////////////////////////
#include <QtCore>
#include <QtSql/QSqlDatabase>
#include "Anwender.h" //enthält kategorie, zahlungsart, qstring, transaktion
//#include "Kategorie.h" //enthält datum und datenbankverwaltung
//#include <QString>

#include "Kategorie.h"
#include "Zahlungsart.h"
#include "Transaktion.h"
#include <QSqlQuery>


//#include "Datum.h"

class Zahlungsart;
class Transaktion;
class Anwender;
class Kategorie;
class Administrator;

#if !defined(EA_6D82E82C_E298_4308_8270_48BABA3B4B0B__INCLUDED_)
#define EA_6D82E82C_E298_4308_8270_48BABA3B4B0B__INCLUDED_

class Datenbankverwaltung
{

public:
	Datenbankverwaltung();
	virtual ~Datenbankverwaltung();

    bool aendereKategorie(QString name, QString alterName);
    void erstelleAnwender(QString email, QString geburtstag, QString passwort, QString vName, QString nName, bool isAdmin);
    void erstelleKategorie(QString name);
    void erstelleTransaktion(int betrag, QString datum, int zahlungsartid, int kategorieid, QString zahlungsart, QString quelle);
    void erstelleZahlungsart(QString zahlungsart);
    Administrator* getAdministrator();
    Anwender* getAnwender();
    Kategorie getKategorie();
    QList<Transaktion> getTransaktionen(Anwender* User, QString startDatum, QString endDatum);
    QList<Zahlungsart> getZahlungsart();
    void loescheAnwender();
    void loescheKategorie(QString name);
    void loescheTransaktion(int betrag, QString datum, QString bezeichnung, QString quelle);
    void loescheZahlung(QString name);
    void leeren();
    void erstelleTabellen();
    void fuelleTabellen();

private:
    QSqlDatabase Datenbank;

};
#endif // !defined(EA_6D82E82C_E298_4308_8270_48BABA3B4B0B__INCLUDED_)

///////////////////////////////////////////////////////////
//  Datenbankverwaltung.cpp
//  Implementation of the Class Datenbankverwaltung
//  Created on:      10-Dez-2015 12:03:54
//  Original author: Christoph Ritzer
///////////////////////////////////////////////////////////

#include "Datenbankverwaltung.h"

//Datumstyp entscheiden, Datenbank inhalte zur laufzeit im Programm speichern in listen oder so
//Login: kommandozeilen befehle einfuegen, schauen wo her manche Datenkommen user...
//Passwort und Anwender aendern fehlt noch

Datenbankverwaltung::Datenbankverwaltung(){
    Datenbank = QSqlDatabase::addDatabase("QSQLITE");
    Datenbank.setDatabaseName("se3d.db");

    if (!Datenbank.open())
    {
      //  cout << "Cannot open database!" << endl; Fehlermeldung ausgeben
        exit(1);
    }
    else
    {
        // schaut ob es schon einen Benutzer gibt davor nach kommandozeilen schauen
        QSqlQuery query;
        query.exec("SELECT COUNT(*) FROM benutzer");
        if( query.next() )
        {
            if( query.value(0).toInt() == 0 )
            {

            }
        }
    }
}



Datenbankverwaltung::~Datenbankverwaltung(){

}





bool Datenbankverwaltung::aendereKategorie(QString name, QString alterName){
    QSqlQuery query;
    query.prepare("UPDATE Kategorie SET name=:name WHERE name=:altername");
    query.bindValue(":name", name);
    query.bindValue(":altername", alterName);

    if(!query.exec())
    {
        //cout << "Kategorie konnte nicht geaendert werden" << endl;
        return false;
    }
    return true;
}


void Datenbankverwaltung::erstelleAnwender(QString email, Datum geburtstag, QString passwort, QString vName, QString nName){
    QSqlQuery query;
    query.prepare("INSERT INTO Anwender(email, geburtsdatum, kennwort, nachname, vorname, ktostand, isAdmin)"
                  "Values(:email , :geburtstag , :kennwort, :nachname , :vorname , :kontostand, :isAdmin)");
    query.bindValue(":email", email);
    //query.bindValue(":geburtstag", geburtstag);
    query.bindValue(":kennwort", passwort);
    query.bindValue(":nachname", nName);
    query.bindValue(":vorname", vName);
    query.bindValue(":kontostand", 0);
    query.bindValue(":isAdmin", false);// was macht dann der erste????

    if (!query.exec())
    {
        //cout << "Benutzer kann nicht angelegt werden" << endl;
        return;
    }

}


void Datenbankverwaltung::erstelleKategorie(QString name){
    QSqlQuery query;
    query.prepare("INSERT INTO Kategorie (kategorieID, kategorie)"
                  "VAlUES ( :id , :name)");
    query.bindValue(":id", 7);//Wert muss angepasst werden
    query.bindValue(":name", name);

    if(!query.exec())
    {
        //cout << "Cannot insert!" << endl;
        exit(2);
    }
}


void Datenbankverwaltung::erstelleTransaktion(int betrag, Datum datum, int zahlungsartid, int kategorieid, QString quelle, QString email){
    QSqlQuery query;
    query.prepare("INSERT INTO Transaktion(transaktionID, betrag, bezeichnung, datum, quelle, zahlungsartID, kategorieID, email)"
                  "VALUES(:t_id, :Betrag, :Bezeichnung, :Datum, :Quelle, :z_ID, :k_ID, :email");
    query.bindValue(":t_id", 7);//muss angepasst werden
    query.bindValue(":Betrag", betrag);
    query.bindValue(":Bezeichnung", 7);//muss angepasst werden
   // query.bindValue(":Datum", datum);
    query.bindValue(":Quelle", quelle);
    query.bindValue(":z_ID", zahlungsartid);
    query.bindValue(":k_ID", kategorieid);
    query.bindValue(":email", email);

    if(!query.exec())
    {
        //cout << "Cannot insert!" << endl;
        exit(2);
    }
}


void Datenbankverwaltung::erstelleZahlungsart(QString zahlungsart){
    QSqlQuery query;
    query.prepare("INSERT INTO Zahlungsart (zahlungsartID, zahlungsart, email)"
                 "VAlUES ( :id , :name , :email)");
   // query.bindValue(":id", );
   // query.bindValue(":name", name);
   // query,bindValue(":email", email);

    if(!query.exec())
    {
        //cout << "Cannot insert!" << endl;
        exit(2);
    }
}


Administrator* Datenbankverwaltung::getAdministrator(){
    QSqlQuery query;
    query.prepare("SELECT email, geburtsdatum, kennwort, nachname, vorname, ktostand, isAdmin FROM Anwender\
                    WHERE isAdmin = true");

    if(!query.exec())
    {
        //cout << "Anwender konnte nicht abgerufen werden" << endl;

        while(query.next())
        {
            // in eine Liste speichern
        }
    }
    return NULL;
}


Anwender* Datenbankverwaltung::getAnwender(){
    QSqlQuery query;
    query.prepare("SELECT email, geburtsdatum, kennwort, nachname, vorname, ktostand, isAdmin FROM Anwender");

    if(!query.exec())
    {
        //cout << "Anwender konnte nicht abgerufen werden" << endl;

        while(query.next())
        {
            // in eine Liste speichern
        }
    }
    return NULL;
}


Kategorie Datenbankverwaltung::getKategorie(){
    QSqlQuery query;

    query.prepare("SELECT kategorieID, kategorie FROM Kategorie");


    if(!query.exec())
            //cout << "Fehler beim lesen " << endl;

        while(query.next())
        {
            // in eineliste speichern mit name (und id)
        }
}


QList<Transaktion> Datenbankverwaltung::getTransaktionen(Anwender* User, Datum startDatum, Datum endDatum){
    QSqlQuery query;
    query.prepare("SELECT transaktionID, betrag, bezeichnung, datum, quelle, zahlungsartID, kategorieID, email\
                     FROM Transaktion WHERE email=:email");

    //query.bindValue(":email"=);// Aktueller benutzer herausbekommen
    if(!query.exec())
        //cout << "Transaktion konnt nicht abgerufen werden" << endl;


    while(query.next() )
    {
        //Transaktionsliste erstellen
    }
}


QList<Zahlungsart> Datenbankverwaltung::getZahlungsart(){
    QSqlQuery query;

    query.prepare("SELECT zahlungsartID, zahlungsart FROM Zahlungsart WHERE email=:");
   // query.bindValue(name);

    if(!query.exec())
        //cout << "Fehler beim lesen " << endl;

    while(query.next() )
    {
        // in eineliste speichern entweder alle oder nur der angemeldete benutzer
    }

}


void Datenbankverwaltung::loescheAnwender(){
    QSqlQuery query;
    query.prepare("DELETE FROM Anwender WHERE name=:name");
    //query.bindValue(name);

    if(!query.exec())
    {
        //cout << "Zahlungsart konnte nicht geloescht werden" << endl;
    }
}


void Datenbankverwaltung::loescheKategorie(QString name){
    QSqlQuery query;
    query.prepare("DELETE FROM Kategorie WHERE name=:name");
    //query.bindValue(name);

    if(!query.exec())
    {
        //cout << "Kategorie konnte nicht geloescht werden" << endl;
    }
}


void Datenbankverwaltung::loescheTransaktion(int betrag, Datum datum, QString bezeichnung, QString quelle){
    QSqlQuery query;
    query.prepare("DELETE FROM Transaktion WHERE name=:name");
    //query.bindValue(name);

    if(!query.exec())
    {
        //cout << "Transaktion konnte nicht geloescht werden" << endl;
    }
}


void Datenbankverwaltung::loescheZahlung(QString name){
    QSqlQuery query;
    query.prepare("DELETE FROM Zahlungsart WHERE name=:name and email=:email");
    query.bindValue(":name",name);
    //query.bindValue(":email",email); // angemeldeter Nutzer speicher!!

    if(!query.exec())
    {
        //cout << "Zahlungsart konnte nicht geloescht werden" << endl;
    }
}

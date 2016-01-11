///////////////////////////////////////////////////////////
//  Datenbankverwaltung.cpp
//  Implementation of the Class Datenbankverwaltung
//  Created on:      10-Dez-2015 12:03:54
//  Original author: Christoph Ritzer
///////////////////////////////////////////////////////////

#include "Datenbankverwaltung.h"
#include <QSqlError>

//Datumstyp entscheiden, Datenbank inhalte zur laufzeit im Programm speichern in listen oder so
//Login: kommandozeilen befehle einfuegen, schauen wo her manche Datenkommen user...
//

Datenbankverwaltung::Datenbankverwaltung(){
    Datenbank = QSqlDatabase::addDatabase("QSQLITE");
    Datenbank.setDatabaseName("C:\\Users\\c-rit_000\\Desktop\\se3d.db"); ////Muss noch absoluter pfad eintragen

    if (!Datenbank.open())
    {
//      //  cout << "Cannot open database!" << endl; Fehlermeldung ausgeben
         qDebug()<<"falsch"<<endl;
    }
    else
    {
         qDebug()<<"offen"<<endl;
        // schaut ob es schon einen Benutzer gibt davor nach kommandozeilen schauen
        QSqlQuery query;
        if(!query.exec("SELECT email, geburtsdatum, kennwort, nachname, vorname, ktostand, isAdmin FROM Anwender"))
        {
            qDebug()<<"scheiße anwender"<<endl;
//        }
//        if(query.exec("SELECT COUNT(*) FROM Anwender"))
//        {
//            qDebug()<<"yeah"<<endl;
//            if( query.value(0).toInt() == 0 )
//            {
//                administratoranlegen a;
//                a.show();
//            }
        }else{
            qDebug()<<"nope"<<endl;
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


void Datenbankverwaltung::erstelleAnwender(QString email, QString geburtstag, QString passwort, QString vName, QString nName, bool isAdmin){
    QSqlQuery query;
    query.prepare("INSERT INTO Anwender(email, geburtsdatum, kennwort, nachname, vorname, ktostand, isAdmin)"
                  "Values(:email , :geburtstag , :kennwort, :nachname , :vorname , :kontostand, :isAdmin)");
    query.bindValue(":email", email);
    query.bindValue(":geburtstag", geburtstag);
    query.bindValue(":kennwort", passwort);
    query.bindValue(":nachname", nName);
    query.bindValue(":vorname", vName);
    query.bindValue(":kontostand", 0);
    query.bindValue(":isAdmin", isAdmin);

    if (!query.exec())
    {
        //cout << "Benutzer kann nicht angelegt werden" << endl;
        return;
    }

}


void Datenbankverwaltung::erstelleKategorie(QString name){
    QSqlQuery query, query2;

    query2.exec("SELECT MAX(kategorieID) FROM kategorie");
    query2.next();

    int id = query2.value(0).toInt();
    id++;

    query.prepare("INSERT INTO Kategorie (kategorieID, kategorie)"
                  "VAlUES ( :id , :name)");
    query.bindValue(":id", id);
    query.bindValue(":name", name);

    if(!query.exec())
    {
        //cout << "Cannot insert!" << endl;

    }
}


void Datenbankverwaltung::erstelleTransaktion(int betrag, QString datum, int zahlungsartid, int kategorieid, QString quelle, QString email){
    QSqlQuery query, query2;

    query2.next();
    int id = query2.exec("SELECT MAX(transaktionID) FROM transaktion");
    id++;

    query.prepare("INSERT INTO Transaktion(transaktionID, betrag, bezeichnung, datum, quelle, zahlungsartID, kategorieID, email)"
                  "VALUES(:t_id, :Betrag, :Bezeichnung, :Datum, :Quelle, :z_ID, :k_ID, :email");
    query.bindValue(":t_id", id);
    query.bindValue(":Betrag", betrag);
    query.bindValue(":Bezeichnung", 7);//muss angepasst werden
    query.bindValue(":Datum", datum);
    query.bindValue(":Quelle", quelle);
    query.bindValue(":z_ID", zahlungsartid);
    query.bindValue(":k_ID", kategorieid);
    query.bindValue(":email", email);

    if(!query.exec())
    {
        //cout << "Cannot insert!" << endl;

    }
}


void Datenbankverwaltung::erstelleZahlungsart(QString zahlungsart){

    QSqlQuery query, query2;

    query2.exec("SELECT MAX(zahlungsartID) FROM Zahlungsart");
    query2.next();
    int id = query2.value(0).toInt();
    id++;

    query.prepare("INSERT INTO Zahlungsart (zahlungsartID, zahlungsart, email)"
                 "VAlUES ( :id , :name , :email)");
    query.bindValue(":id", id);
    query.bindValue(":name", zahlungsart);
    query.bindValue(":email", "m.erl@gmail.com");


    if(!query.exec())
    {
        qDebug()<<"falsch Zahlungsart"<<query2.lastError()<<endl;
    }
    else{
        qDebug()<<"es klappt"<<endl;
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
    //query.prepare("SELECT email, geburtsdatum, kennwort, nachname, vorname, ktostand, isAdmin FROM Anwender");

    if(!query.exec("SELECT email, geburtsdatum, kennwort, nachname, vorname, ktostand, isAdmin FROM Anwender"))
    {
        qDebug()<<"scheiße anwender"<<endl;
    }

    while(query.next())
    {
        // in eine Liste speichern
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
    //musst ich machen sonst funktioniets nicht ->
     return "hallo";
}


QList<Transaktion> Datenbankverwaltung::getTransaktionen(Anwender* User, QString startDatum, QString endDatum){
    QSqlQuery query;
    QList<Transaktion> p;
    Transaktion t;
    query.prepare("SELECT transaktionID, betrag, bezeichnung, datum, quelle, zahlungsartID, kategorieID, email \
                     FROM Transaktion WHERE email=:email AND startDatum <= :sDatum AND endDatum <= :eDatum \
                     ORDER BY datum");

    //query.bindValue(":email", User.email); //Anwender braucht get email/user
    query.bindValue("sDatum", startDatum);
    query.bindValue("eDatum", endDatum);

    if(!query.exec())
        //cout << "Transaktion konnt nicht abgerufen werden" << endl;


    while(query.next() )
    {
        //t.Betrag->query.value(1).toInt();
        //t.Bezeichnung=query.value(2).toString();
        //t.datum=query.value(3).toString();
        //t.Quelle=query.value(3).toString();
        p.append(t);
    }
   return p;
}


QList<Zahlungsart> Datenbankverwaltung::getZahlungsart(){
    QSqlQuery query;
    QList<Zahlungsart> p;

    query.prepare("SELECT zahlungsartID, zahlungsart FROM Zahlungsart WHERE email=:");
   // query.bindValue(name);

    if(!query.exec())
        //cout << "Fehler beim lesen " << endl;

    while(query.next() )
    {
        // in eineliste speichern entweder alle oder nur der angemeldete benutzer
    }
    return p;
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
    query.bindValue(":name",name);

    if(!query.exec())
    {
        //cout << "Kategorie konnte nicht geloescht werden" << endl;
    }
}

//über id
void Datenbankverwaltung::loescheTransaktion(int betrag, QString datum, QString bezeichnung, QString quelle){
    QSqlQuery query;
    query.prepare("DELETE FROM Transaktion WHERE name=:email");
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
void Datenbankverwaltung::leeren(){
    QSqlQuery query;
    query.exec("DROP TABLE benutzer");
    query.exec("DROP TABLE transaktion");
    query.exec("DROP TABLE zahlungsart");
    query.exec("DROP TABLE kategorie");
    erstelleTabellen();
}

void Datenbankverwaltung::erstelleTabellen(){
    QSqlQuery query;
    query.exec("CREATE TABLE Anwender(\
               email TEXT,\
               geburtsdatum	TEXT NOT NULL,\
               kennwort	TEXT NOT NULL,\
               nachname	TEXT NOT NULL,\
               vorname	TEXT NOT NULL,\
               ktostand	INTEGER NOT NULL,\
               isAdmin	INTEGER,\
               PRIMARY KEY(email)\
                 );");
    query.exec("CREATE TABLE kategorie (\
               kategorieID	INTEGER,\
               kategorie	TEXT,\
               PRIMARY KEY(kategorieID)\
               );");

    query.exec("CREATE TABLE Transaktion(\
               transaktionID	INTEGER,\
               betrag	INTEGER NOT NULL,\
               bezeichnung  TEXT NOT NULL,\
               datum	INTEGER NOT NULL,\
               quelle	TEXT,\
               zahlungsartID	INTEGER,\
               kategorieID	INTEGER NOT NULL,\
               email	TEXT NOT NULL,\
               PRIMARY KEY(transaktionID),\
               FOREIGN KEY(zahlungsartID) REFERENCES Zahlungsart(zahlungsartID),\
               FOREIGN KEY(kategorieID) REFERENCES kategorieID,\
               FOREIGN KEY(email) REFERENCES Anwender(email)\
           );");
    query.exec("CREATE TABLE Zahlungsart (\
               zahlungsartID	INTEGER,\
               zahlungsart	TEXT NOT NULL,\
               email	TEXT,\
               PRIMARY KEY(zahlungsartID),\
               FOREIGN KEY(email) REFERENCES Anwender (email)\
               );");
}

void Datenbankverwaltung::fuelleTabellen(){
        //Administrator::Anwenderanlegen("rd@hs.aa", "05.06.1956", "RD", "Roland", "Dietrich");
       // Anwender* p1 = new Anwender("km@hs.aa", "06.05.1960", "KM", "Klara", "Musterfrau");
       // Anwender* p2 = new Anwender("mm@hs.aa", "20.6.1983", "MM", "Max", "Mustersohn");

        Kategorie* k1 = new Kategorie("Gehaltseingang");
        Kategorie* k2 = new Kategorie("Lebensmittel");
        Kategorie* k3 = new Kategorie("Freizeit");

        Zahlungsart* z1 = new Zahlungsart("Bar"); //benutzer hinzufuegen
        Zahlungsart* z2 = new Zahlungsart("Kreditkarte"); //benutzer hinzufuegen
        Zahlungsart* z3 = new Zahlungsart("Überweisung"); //benutzer hinzufuegen

        Transaktion* t1 = new Transaktion(500,"20.05.2016","Drogen","Lebenmittelmarkt");
        Transaktion* t2 = new Transaktion(500,"20.05.2016","Drogen","Lebenmittelmarkt");
        Transaktion* t3 = new Transaktion(500,"20.05.2016","Drogen","Lebenmittelmarkt");
        Transaktion* t4 = new Transaktion(500,"20.05.2016","Drogen","Lebenmittelmarkt");
        Transaktion* t5 = new Transaktion(500,"20.05.2016","Drogen","Lebenmittelmarkt");
        Transaktion* t6 = new Transaktion(500,"20.05.2016","Drogen","Lebenmittelmarkt");
        Transaktion* t7 = new Transaktion(500,"20.05.2016","Drogen","Lebenmittelmarkt");
        Transaktion* t8 = new Transaktion(500,"20.05.2016","Drogen","Lebenmittelmarkt");
        Transaktion* t9 = new Transaktion(500,"20.05.2016","Drogen","Lebenmittelmarkt");
        Transaktion* t10 = new Transaktion(500,"20.05.2016","Drogen","Lebenmittelmarkt");
}

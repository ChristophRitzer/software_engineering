#include "ausgabeerfassen.h"
#include "ui_ausgabeerfassen.h"

ausgabeerfassen::ausgabeerfassen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ausgabeerfassen)
{
    ui->setupUi(this);
}

ausgabeerfassen::~ausgabeerfassen()
{
    delete ui;
}

void ausgabeerfassen::on_pushButton_ausgabeerfassen_clicked()
{

    //ausgabe speichern und fenster schließen
    QString bezeichner = ui->lineEdit_bezeichnung->text();
    QString betrag = ui->lineEdit_betrag->text();
    QString zahlungsart = ui->comboBox_Zahlungsart->currentText();
    QString kategorie = ui->comboBox_Kategorie->currentText();
    QString datum = ui->dateEdit->text();
    QString quelle = ui->lineEdit_bezeichnung->text(); // Hier muss dann später die quelle her fehlt noch in gui
    bool ok;
    int betr = betrag.toInt(&ok,10);// Konvertierung ins 10er System und überprüfe ob Konvertierung stattgefunden hat
    if(!ok){
        //Hier Fehlermeldung anzeigen
        return; // Beendet Funktion lässt Benutzer aber die Möglichkeit etwaige Fehler zu verbessern
    }

    if(betr > 0){ // Prüfe ob der Betrag positiv eingetragen wurde
        int s = betr; //s stellt nur eine Tauschvariable dar
        betr = -s;
    }

    new Transaktion(betr, datum, bezeichner, quelle); // Transaktion muss noch bezüglich Zahlungsart und Kategorie angepasst werden

    db->erstelleTransaktion(betr,datum,7,7,zahlungsart,quelle); // Muss eventuell auch angepasst werden
    this->close();
}

void ausgabeerfassen::on_pushButton_abbrechen_clicked()
{
    //ausgabe nicht speichern und fenster schließen
    this->close();
}

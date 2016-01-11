#include "einnahmeerfassen.h"
#include "ui_einnahmeerfassen.h"

einnahmeerfassen::einnahmeerfassen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::einnahmeerfassen)
{
    ui->setupUi(this);
}

einnahmeerfassen::~einnahmeerfassen()
{
    delete ui;
}

void einnahmeerfassen::on_pushButton_abbrechen_clicked()
{
    //fenster schließen und Eingaben nicht speichern
    this->close();
}

void einnahmeerfassen::on_pushButton_einnahmeerfassen_clicked()
{
    //fenster schließen und Eingaben speichern
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

    new Transaktion(betr, datum, bezeichner, quelle); // Transaktion muss noch bezüglich Zahlungsart und Kategorie angepasst werden

    db->erstelleTransaktion(betr,datum,7,7,zahlungsart,quelle); // Muss eventuell auch angepasst werden
    this->close();
}

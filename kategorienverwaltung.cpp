#include "kategorienverwaltung.h"
#include "ui_kategorienverwaltung.h"

kategorienverwaltung::kategorienverwaltung(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::kategorienverwaltung)
{
    ui->setupUi(this);
    db = new Datenbankverwaltung();
}

kategorienverwaltung::~kategorienverwaltung()
{
    delete ui;
}

void kategorienverwaltung::on_pushButton_kategorieanlegen_clicked()
{
    QString text = ui->lineEdit_neuekategorie->text();
    new Kategorie(text);
    db->erstelleKategorie(text);
    //Schließt momentan ohne Fehlermeldung die Anwendung

    //kategorie anlegen name auslesen von: lineEdit_neuekategorie
}

void kategorienverwaltung::on_pushButton_speichernundzurck_clicked()
{
    //änderungen speichern
    //zurück
    this->close();
}

void kategorienverwaltung::on_pushButton_nichtspeichernundzuruck_clicked()
{
    this->close();      //Schließt das Fenster ohne die Änderungen zu speichern
}

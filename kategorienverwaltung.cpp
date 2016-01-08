#include "kategorienverwaltung.h"
#include "ui_kategorienverwaltung.h"

kategorienverwaltung::kategorienverwaltung(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::kategorienverwaltung)
{
    ui->setupUi(this);
}

kategorienverwaltung::~kategorienverwaltung()
{
    delete ui;
}

void kategorienverwaltung::on_pushButton_kategorieanlegen_clicked()
{
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
    //änderungen nicht speichern und zurück
    this->close();
}

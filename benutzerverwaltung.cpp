#include "benutzerverwaltung.h"
#include "ui_benutzerverwaltung.h"

benutzerverwaltung::benutzerverwaltung(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::benutzerverwaltung)
{
    ui->setupUi(this);
}

benutzerverwaltung::~benutzerverwaltung()
{
    delete ui;
}

void benutzerverwaltung::on_pushButton_benutzeranlegen_clicked()
{
    //benutzer anlegen


}

void benutzerverwaltung::on_pushButton_speichernundzuruck_clicked()
{
    //änderungen speichern und zurück zum mainwindow
    this->close();
}

void benutzerverwaltung::on_pushButton_nichtspeichernundzuruck_clicked()
{
    //nicht speichern und zurück zum mainwindow
    this->close();
}

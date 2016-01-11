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
    QString email = ui->lineEdit_email->text();
    QString passwort = ui->lineEdit_kennwort->text();
    QString name = ui->lineEdit_nachname->text();
    QString vName = ui->lineEdit_vorname->text();
    QString geb = ui->dateEdit_geburtsdatum->text();

    db->erstelleAnwender(email, geb, passwort, vName, name, false);
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

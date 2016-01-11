#include "passwortaendern.h"
#include "ui_passwortaendern.h"


passwortaendern::passwortaendern(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::passwortaendern)
{
    ui->setupUi(this);
}

passwortaendern::~passwortaendern()
{
    delete ui;
    delete an;
    delete db;
}

void passwortaendern::on_pushButton_pwspeichernzurck_clicked()
{

    //kennwort speichern und zurück zum mainwindow
    db = new Datenbankverwaltung();
    an = db->getAnwender();
    QString altpw; // muss noch zugewiesen werden
    an->aenderPW(altpw, ui->lineEdit_neueskennwort->text(), ui->lineEdit_neueskennwort->text());
    this->close();
}

void passwortaendern::on_pushButton_pwnichtspeichernzuruck_clicked()
{
    //kennwort nicht speichern und zurück zum mainwindow
    this->close();
}

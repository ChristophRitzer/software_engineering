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
}

void passwortaendern::on_pushButton_pwspeichernzurck_clicked()
{
    //kennwort speichern und zurück zum mainwindow
    this->close();
}

void passwortaendern::on_pushButton_pwnichtspeichernzuruck_clicked()
{
    //kennwort nicht speichern und zurück zum mainwindow
    this->close();
}

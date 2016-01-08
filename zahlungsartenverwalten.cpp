#include "zahlungsartenverwalten.h"
#include "ui_zahlungsartenverwalten.h"

zahlungsartenverwalten::zahlungsartenverwalten(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::zahlungsartenverwalten)
{
    ui->setupUi(this);
}

zahlungsartenverwalten::~zahlungsartenverwalten()
{
    delete ui;
}

void zahlungsartenverwalten::on_pushButton_neuezahlungsart_clicked()
{
    //zahlungsart anlegen
}

void zahlungsartenverwalten::on_pushButton_2_clicked()
{
    //änderungen nicht speichern und zurück zur startseite
    this->close();

}

void zahlungsartenverwalten::on_pushButton_clicked()
{
    //änderungen speichern


    //zurück zur startseite
    this->close();

}

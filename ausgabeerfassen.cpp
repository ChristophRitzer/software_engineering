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
    this->close();
}

void ausgabeerfassen::on_pushButton_abbrechen_clicked()
{
    //ausgabe nicht speichern und fenster schließen
    this->close();
}

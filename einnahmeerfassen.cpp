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

    this->close();
}

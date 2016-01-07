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

#include "administratoranlegen.h"
#include "ui_administratoranlegen.h"

administratoranlegen::administratoranlegen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::administratoranlegen)
{
    ui->setupUi(this);
}

administratoranlegen::~administratoranlegen()
{
    delete ui;
}

void administratoranlegen::on_pushButton_administratoranlegenundweiter_clicked()
{
    //administrator in db speichern und weiter zur Startseite
}

void administratoranlegen::on_pushButton_programmbeenden_clicked()
{
    //eingaben nicht in db speichern und Programm beenden
}

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
    QString geburtstag = ui->dateEdit_geburtstag->text();
    QString name = ui->lineEdit_nachname->text();
    QString vorname = ui->lineEdit_vorname->text();
    QString email = ui->lineEdit_email->text();
    QString passwort = ui->lineEdit_passwort->text();

    admin = new Administrator(email, geburtstag, passwort, vorname, name);
    db->erstelleAnwender(email,geburtstag,passwort,vorname,name, true);


    //administrator in db speichern und weiter zur Startseite
}

void administratoranlegen::on_pushButton_programmbeenden_clicked()
{
    //eingaben nicht in db speichern und Programm beenden
}

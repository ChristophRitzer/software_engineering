#include "login.h"
#include "ui_login.h"
#include "mainwindow.h"
#include <QErrorMessage>

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}

void login::on_pushButton_programmbeenden_clicked()
{
    //programm beenden
    this->close;
}

void login::on_pushButton_anmelden_clicked()
{
    //login daten überprüfen und anmelden
    mainwindow mainwindow;
    mainwindow.setModal(true);
    mainwindow.exec();


    //login nicht erfolgreich
    QErrorMessage msg(this);
    msg.showMessage("emailadresse oder passwort falsch!");
}

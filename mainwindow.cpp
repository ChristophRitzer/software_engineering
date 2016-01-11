#include "mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_einnahmeerfassen_clicked()
//öffnet das fenste einnahme erfassen
{
    einnahmeerfassen einnahmeerfassen;
    einnahmeerfassen.setModal(true);
    einnahmeerfassen.exec();
}

void MainWindow::on_btn_ausgabeerfassen_2_clicked()
{
    ausgabeerfassen ausgabeerfassen;
    ausgabeerfassen.setModal(true);
    ausgabeerfassen.exec();
}

void MainWindow::on_btn_ausgabeerfassen_clicked()
{
    ausgabeerfassen ausgabeerfassen;
    ausgabeerfassen.setModal(true);
    ausgabeerfassen.exec();
}

void MainWindow::on_btn_pwaendern_clicked()
{
    passwortaendern passwortaendern;
    passwortaendern.setModal(true);
    passwortaendern.exec();
}



void MainWindow::on_btn_zahlungsartenverwalten_clicked()
{
    zahlungsartenverwalten zahlungsartenverwalten;
    zahlungsartenverwalten.setModal(true);
    zahlungsartenverwalten.exec();
}

void MainWindow::on_pushButton_benutzerverwalten_clicked()
{
    //benutzerverwaltung öffnen
    benutzerverwaltung benutzerverwaltung;
    benutzerverwaltung.setModal(true);
    benutzerverwaltung.exec();

}

void MainWindow::on_pushButton_kategorienverwalten_clicked()
{
    //kategorieverwaltung öffnen
    kategorienverwaltung kategorienverwaltung;
    kategorienverwaltung.setModal(true);
    kategorienverwaltung.exec();

}



void MainWindow::on_pushButton_neuenadminbestimmen_clicked()
{
    //neuen admin bestimmen öffenen
    neuenadminbestimmen neuenadminbestimmen;
    neuenadminbestimmen.setModal(true);
    neuenadminbestimmen.exec();

}

void MainWindow::on_pushButton_einnahmenfiltern_clicked()
{
    //einnahmen filtern button
}

void MainWindow::on_pushButton_filterloeschen_clicked()
{
    //filter löschen?? soll mer
}

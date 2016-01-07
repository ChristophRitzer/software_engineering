#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "einnahmeerfassen.h"

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

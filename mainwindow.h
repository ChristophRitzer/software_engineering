#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_mainwindow.h"
#include "einnahmeerfassen.h"
#include "ausgabeerfassen.h"
#include "passwortaendern.h"
#include "zahlungsartenverwalten.h"
#include "benutzerverwaltung.h"
#include "kategorienverwaltung.h"
#include "neuenadminbestimmen.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btn_einnahmeerfassen_clicked();

    void on_btn_ausgabeerfassen_2_clicked();

    void on_btn_pwaendern_clicked();

    void on_btn_ausgabeerfassen_clicked();

    void on_btn_zahlungsartenverwalten_clicked();

    void on_pushButton_benutzerverwalten_clicked();

    void on_pushButton_kategorienverwalten_clicked();

    void on_pushButton_neuenadminbestimmen_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

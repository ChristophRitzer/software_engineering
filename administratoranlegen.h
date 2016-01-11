#ifndef ADMINISTRATORANLEGEN_H
#define ADMINISTRATORANLEGEN_H

#include <QDialog>
#include "Datenbankverwaltung.h"
#include "Administrator.h"

class Administrator;
class Datenbankverwaltung;

namespace Ui {
class administratoranlegen;
}

class administratoranlegen : public QDialog
{
    Q_OBJECT

public:
    explicit administratoranlegen(QWidget *parent = 0);
    ~administratoranlegen();

private slots:
    void on_pushButton_administratoranlegenundweiter_clicked();

    void on_pushButton_programmbeenden_clicked();

private:
    Ui::administratoranlegen *ui;
    Administrator* admin;
    Datenbankverwaltung* db;
};

#endif // ADMINISTRATORANLEGEN_H

#ifndef KATEGORIENVERWALTUNG_H
#define KATEGORIENVERWALTUNG_H

#include <QDialog>
#include "Kategorie.h"

namespace Ui {
class kategorienverwaltung;
}

class kategorienverwaltung : public QDialog
{
    Q_OBJECT

public:
    explicit kategorienverwaltung(QWidget *parent = 0);
    ~kategorienverwaltung();

private slots:
    void on_pushButton_kategorieanlegen_clicked();

    void on_pushButton_speichernundzurck_clicked();

    void on_pushButton_nichtspeichernundzuruck_clicked();

private:
    Ui::kategorienverwaltung *ui;
    Datenbankverwaltung* db;
};

#endif // KATEGORIENVERWALTUNG_H

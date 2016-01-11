#ifndef AUSGABEERFASSEN_H
#define AUSGABEERFASSEN_H

#include <QDialog>
#include "Datenbankverwaltung.h"
#include "Transaktion.h"

namespace Ui {
class ausgabeerfassen;
}

class ausgabeerfassen : public QDialog
{
    Q_OBJECT

public:
    explicit ausgabeerfassen(QWidget *parent = 0);
    ~ausgabeerfassen();

private slots:
    void on_pushButton_ausgabeerfassen_clicked();

    void on_pushButton_abbrechen_clicked();

private:
    Ui::ausgabeerfassen *ui;
    Datenbankverwaltung* db = new Datenbankverwaltung();
};

#endif // AUSGABEERFASSEN_H

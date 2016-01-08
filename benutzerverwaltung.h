#ifndef BENUTZERVERWALTUNG_H
#define BENUTZERVERWALTUNG_H

#include <QDialog>

namespace Ui {
class benutzerverwaltung;
}

class benutzerverwaltung : public QDialog
{
    Q_OBJECT

public:
    explicit benutzerverwaltung(QWidget *parent = 0);
    ~benutzerverwaltung();

private slots:
    void on_pushButton_benutzeranlegen_clicked();

    void on_pushButton_speichernundzuruck_clicked();

    void on_pushButton_nichtspeichernundzuruck_clicked();

private:
    Ui::benutzerverwaltung *ui;
};

#endif // BENUTZERVERWALTUNG_H

#ifndef PASSWORTAENDERN_H
#define PASSWORTAENDERN_H

#include <QDialog>

namespace Ui {
class passwortaendern;
}

class passwortaendern : public QDialog
{
    Q_OBJECT

public:
    explicit passwortaendern(QWidget *parent = 0);
    ~passwortaendern();

private slots:
    void on_pushButton_pwspeichernzurck_clicked();

    void on_pushButton_pwnichtspeichernzuruck_clicked();

private:
    Ui::passwortaendern *ui;
};

#endif // PASSWORTAENDERN_H

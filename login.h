#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>

namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = 0);
    ~login();

private slots:
    void on_pushButton_programmbeenden_clicked();

    void on_pushButton_anmelden_clicked();

private:
    Ui::login *ui;
};

#endif // LOGIN_H

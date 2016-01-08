#ifndef ADMINISTRATORANLEGEN_H
#define ADMINISTRATORANLEGEN_H

#include <QDialog>

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
};

#endif // ADMINISTRATORANLEGEN_H

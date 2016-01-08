#ifndef ZAHLUNGSARTENVERWALTEN_H
#define ZAHLUNGSARTENVERWALTEN_H

#include <QDialog>

namespace Ui {
class zahlungsartenverwalten;
}

class zahlungsartenverwalten : public QDialog
{
    Q_OBJECT

public:
    explicit zahlungsartenverwalten(QWidget *parent = 0);
    ~zahlungsartenverwalten();

private slots:
    void on_pushButton_neuezahlungsart_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::zahlungsartenverwalten *ui;
};

#endif // ZAHLUNGSARTENVERWALTEN_H

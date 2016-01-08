#ifndef EINNAHMEERFASSEN_H
#define EINNAHMEERFASSEN_H

#include <QDialog>

namespace Ui {
class einnahmeerfassen;
}

class einnahmeerfassen : public QDialog
{
    Q_OBJECT

public:
    explicit einnahmeerfassen(QWidget *parent = 0);
    ~einnahmeerfassen();

private slots:
    void on_pushButton_abbrechen_clicked();

    void on_pushButton_einnahmeerfassen_clicked();

private:
    Ui::einnahmeerfassen *ui;
};

#endif // EINNAHMEERFASSEN_H

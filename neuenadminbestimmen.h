#ifndef NEUENADMINBESTIMMEN_H
#define NEUENADMINBESTIMMEN_H

#include <QDialog>

namespace Ui {
class neuenadminbestimmen;
}

class neuenadminbestimmen : public QDialog
{
    Q_OBJECT

public:
    explicit neuenadminbestimmen(QWidget *parent = 0);
    ~neuenadminbestimmen();

private slots:
    void on_pushButton_speichernundzurck_clicked();

    void on_pushButton_nichtspeichernundzurck_clicked();

private:
    Ui::neuenadminbestimmen *ui;
};

#endif // NEUENADMINBESTIMMEN_H

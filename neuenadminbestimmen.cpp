#include "neuenadminbestimmen.h"
#include "ui_neuenadminbestimmen.h"

neuenadminbestimmen::neuenadminbestimmen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::neuenadminbestimmen)
{
    ui->setupUi(this);
}

neuenadminbestimmen::~neuenadminbestimmen()
{
    delete ui;
}

void neuenadminbestimmen::on_pushButton_speichernundzurck_clicked()
{
    //speichern

    //und zurück
    this->close();
}

void neuenadminbestimmen::on_pushButton_nichtspeichernundzurck_clicked()
{
    //nicht speichern und zurück
    this->close();
}

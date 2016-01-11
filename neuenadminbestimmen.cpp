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
    //Admin holen und isAdmin auf false ändern
    //Dann den ausgewählten Anwender als admin bestimmen -> benötigen eine aendereAdmin funktion -> evtl get und set funktionen zu attributen
    admin = db->getAdministrator();
    //admin->
    //und zurück
    this->close();
}

void neuenadminbestimmen::on_pushButton_nichtspeichernundzurck_clicked()
{
    //nicht speichern und zurück
    this->close();
}

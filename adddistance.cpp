#include "adddistance.h"
#include "ui_adddistance.h"
#include <QMessageBox>
adddistance::adddistance(DataManager* inDM, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adddistance)
{
    DM = inDM;
    prev = parent;
    ui->setupUi(this);
}

adddistance::~adddistance()
{
    delete ui;
}

void adddistance::on_pushButton_add_clicked()
{
    QString source = ui->lineEdit_source->text();
    QString miles = ui->lineEdit_miles->text();
    QString dest = ui->lineEdit_destination->text();

    if(DM->addDist(source, miles, dest))
    {
        QMessageBox::information(this, "Destinations", "Destination successfully added!");
    }
    else
    {
        QMessageBox::warning(this, "Destinations", "Destination could not be added!");
    }
}

void adddistance::on_pushButton_exit_clicked()
{
    this->close();
}

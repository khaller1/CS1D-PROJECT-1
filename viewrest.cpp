#include "restView.h"
#include "ui_viewrest.h"

viewRest::viewRest(DataManager *inDM, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewRest)
{
    prev = parent;
    DM = inDM;
    DM->getRestaurants(R_Data);
    rTable = new RestaurantTable(R_Data);
    Proxy = new QSortFilterProxyModel(this);
    Proxy->setSourceModel(rTable);

    ui->setupUi(this);
    ui->Restaurant_Table->setModel(Proxy);
    ui->Restaurant_Table->setSortingEnabled(true);


}

viewRest::~viewRest()
{
    delete ui;
}

void viewRest::on_Exit_Button_clicked()
{
    this->accept();
    prev->show();
}

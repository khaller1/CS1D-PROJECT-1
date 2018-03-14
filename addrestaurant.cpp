#include "addrestaurant.h"
#include "ui_addrestaurant.h"
#include <QMessageBox>

addRestaurant::addRestaurant(DataManager* inDM, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addRestaurant)
{
    DM = inDM;
    prev=parent;
    DM->getRestaurants(R_Data);
    rTable = new RestaurantTable(R_Data);
    Proxy = new QSortFilterProxyModel(this);
    Proxy->setSourceModel(rTable);
    ui->setupUi(this);
    ui->tableView->setModel(Proxy);
    ui->tableView->setSortingEnabled(true);

}

addRestaurant::~addRestaurant()
{
    delete ui;
}

//void addRestaurant::on_pushButton_clicked()
//{
//    QString name = ui->lineEdit_name->text();
//    QString idnum = ui->lineEdit_id->text();
//    QString distance = ui->lineEdit_distance->text();
//    QString menusize = ui->lineEdit_menu->text();

//    bool check = DM->addRestaurant(idnum, name, distance, menusize);
//    if(check)
//    {
//        QMessageBox::information(this, "Add Restaurant", "Restaurant was successfully added!");
//        DM->addRestStruct(idnum, name, distance, menusize);
//    }
//    else
//        QMessageBox::warning(this, "Add Restaurant", "Restaurant could not be added!");
//}

void addRestaurant::on_pushButton_exit_clicked()
{
    this->accept();
    prev->show();
}

//void addRestaurant::on_pushButton_edit_clicked()
//{
//    QString name = ui->lineEdit_name->text();
//    QString idnum = ui->lineEdit_id->text();
//    QString distance = ui->lineEdit_distance->text();
//    QString menusize = ui->lineEdit_menu->text();

//    bool check = DM->editRestaurant(idnum, name, distance, menusize);
//    if(check)
//    {
//        QMessageBox::information(this, "Edit Restaurant", "Restaurant was successfully updated!");
//        DM->editRestStruct(idnum, name, distance, menusize);
//        DM->getRestaurants(R_Data);
//        rTable = new RestaurantTable(R_Data);
//        Proxy = new QSortFilterProxyModel(this);
//        Proxy->setSourceModel(rTable);
//        ui->tableView->setModel(Proxy);
//        ui->tableView->setSortingEnabled(true);
//    }
//    else
//        QMessageBox::warning(this, "Edit Restaurant", "Restaurant could not be updated!");

//}

void addRestaurant::on_pushButton_delete_clicked()
{
    QString idnum = ui->lineEdit_id->text();

    bool check = DM->deleteRestaurant(idnum);
    if(check)
    {
        QMessageBox::information(this, "Delete Restaurant", "Restaurant was successfully deleted!");
        DM->deleteRestStruct(idnum);
        DM->getRestaurants(R_Data);
        rTable = new RestaurantTable(R_Data);
        Proxy = new QSortFilterProxyModel(this);
        Proxy->setSourceModel(rTable);
        ui->tableView->setModel(Proxy);
        ui->tableView->setSortingEnabled(true);
    }
    else
    {
        QMessageBox::warning(this, "Delete Restaurant", "Restaurant could not be deleted!");
    }

}



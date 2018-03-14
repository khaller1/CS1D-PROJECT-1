#include "addmenu.h"
#include "ui_addmenu.h"
#include <QMessageBox>
addMenu::addMenu(DataManager* inDM, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addMenu)
{
    DM = inDM;
    prev = parent;
    DM->getRestaurants(R_Data);
    this->genComboList();
    Proxy = new QSortFilterProxyModel(this);
    ui->setupUi(this);
    ui->RestaurantCombo->addItems(combo);
}

addMenu::~addMenu()
{
    delete ui;
}
void addMenu::genComboList(){
    DM->getRestaurants(R_Data);
    for(auto it=R_Data.begin();it!=R_Data.end();++it){
        combo.push_back(it->name);
    }
}
void addMenu::on_pushButton_add_clicked()
{
    QString parentid = ui->lineEdit_id->text();
    QString name = ui->lineEdit_name->text();
    QString cost = ui->lineEdit_cost->text();

    bool check = DM->addMenu(parentid, name, cost);
    check = DM->addMenuStruct(parentid, name, cost);
    if(check)
    {
        QMessageBox::information(this, "Add Menu Item", "item was successfully added!");
        DM->getRestaurants(R_Data);
        int i;
        i = ui->RestaurantCombo->currentIndex();
        M_Table = new menuTable(R_Data[i].RMenu);
        Proxy->setSourceModel(M_Table);
        ui->MenuTable->reset();
        ui->MenuTable->setModel(Proxy);

    }
    else
    {
        QMessageBox::warning(this, "Add Menu Item", "item could not be added!");
    }
}

void addMenu::on_pushButton_edit_clicked()
{
    QString baseid = ui->lineEdit_id->text();
    QString name = ui->lineEdit_name->text();
    QString cost = ui->lineEdit_cost->text();

    bool check = DM->editMenu(baseid, name, cost);
    check = DM->editMenuStruct(baseid, name, cost);
    if(check)
    {

        QMessageBox::information(this, "Edit Menu Item", "item was successfully updated!");
        DM->getRestaurants(R_Data);
        int i;
        i = ui->RestaurantCombo->currentIndex();
        M_Table = new menuTable(R_Data[i].RMenu);
        Proxy->setSourceModel(M_Table);
        ui->MenuTable->reset();
        ui->MenuTable->setModel(Proxy);

    }
    else
    {
        QMessageBox::warning(this, "Edit Menu Item", "item could not be updated!");
    }
}

void addMenu::on_pushButton_delete_clicked()
{
    QString parentid = ui->lineEdit_id->text();
    QString name = ui->lineEdit_name->text();

    bool check = DM->deleteMenu(name, parentid);
    check = DM->deleteMenuStruct(name, parentid);

    if(check)
    {
        QMessageBox::information(this, "Delete Menu Item", "item was successfully deleted!");
        DM->getRestaurants(R_Data);
        int i;
        i = ui->RestaurantCombo->currentIndex();
        M_Table = new menuTable(R_Data[i].RMenu);
        Proxy->setSourceModel(M_Table);
        ui->MenuTable->reset();
        ui->MenuTable->setModel(Proxy);

    }
    else
    {
        QMessageBox::warning(this, "Delete Menu Item", "item couldn't be deleted!");
    }
}

void addMenu::on_pushButton_exit_clicked()
{
    this->close();
}

void addMenu::on_ViewMenu_clicked()
{
    int i;
    i = ui->RestaurantCombo->currentIndex();
    M_Table = new menuTable(R_Data[i].RMenu);
    Proxy->setSourceModel(M_Table);
    ui->MenuTable->reset();
    ui->MenuTable->setModel(Proxy);
}

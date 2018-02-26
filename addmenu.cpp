#include "addmenu.h"
#include "ui_addmenu.h"
#include <QMessageBox>
addMenu::addMenu(DataManager* inDM, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addMenu)
{
    DM = inDM;
    prev = parent;
    ui->setupUi(this);
}

addMenu::~addMenu()
{
    delete ui;
}

void addMenu::on_pushButton_add_clicked()
{
    QString baseid = ui->lineEdit_id->text();
    QString parentid = ui->lineEdit_parent->text();
    QString name = ui->lineEdit_name->text();
    QString cost = ui->lineEdit_cost->text();

    bool check = DM->addMenu(parentid, name, cost);
    if(check)
    {
        QMessageBox::information(this, "Add Menu Item", "item was successfully added!");
        DM->addMenuStruct(parentid, name, cost);
    }
    else
    {
        QMessageBox::warning(this, "Add Menu Item", "item could not be added!");
    }
}

void addMenu::on_pushButton_edit_clicked()
{
    QString baseid = ui->lineEdit_id->text();
    QString parentid = ui->lineEdit_parent->text();
    QString name = ui->lineEdit_name->text();
    QString cost = ui->lineEdit_cost->text();

    bool check = DM->editMenu(baseid, parentid, name, cost);
    if(check)
    {
        DM->editMenuStruct(baseid, parentid, name, cost);
        QMessageBox::information(this, "Edit Menu Item", "item was successfully updated!");
    }
    else
    {
        QMessageBox::warning(this, "Edit Menu Item", "item could not be updated!");
    }
}

void addMenu::on_pushButton_delete_clicked()
{
    QString baseid = ui->lineEdit_id->text();
    QString parentid = ui->lineEdit_parent->text();
    QString name = ui->lineEdit_name->text();
    QString cost = ui->lineEdit_cost->text();

    bool check = DM->deleteMenu(baseid, parentid);

    if(check)
    {
        DM->deleteMenuStruct(baseid, parentid);
        QMessageBox::information(this, "Delete Menu Item", "item was successfully deleted!");
    }
}

void addMenu::on_pushButton_exit_clicked()
{
    this->close();
}

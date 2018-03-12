#include "adminlauncher.h"
#include "ui_adminlauncher.h"
#include <addrestaurant.h>
#include <addmenu.h>
#include <adddistance.h>
#include <QMessageBox>
adminLauncher::adminLauncher(DataManager* inDM, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminLauncher)
{
    DM = inDM;
    ui->setupUi(this);
}

adminLauncher::~adminLauncher()
{
    delete ui;
}

void adminLauncher::on_ViewRestaurant_Button_clicked()
{
    viewRest *viewAll;
    viewAll = new viewRest(DM, this);
    //this->hide();
    viewAll->exec();
    //this->show();
}

void adminLauncher::on_ViewMenu_Button_clicked()
{
    MenuView *viewMenu;
    viewMenu = new MenuView(DM, this);
    //this->hide();
    viewMenu->exec();
   // this->show();
}

void adminLauncher::on_Exit_Button_clicked()
{
    QCoreApplication::exit();
}

void adminLauncher::on_pushButton_clicked()
{
    addRestaurant *rest;
    rest = new addRestaurant(DM, this);
    //this->hide();
    rest->exec();
    //this->show();

}

void adminLauncher::on_pushButton_addmenu_clicked()
{
    addMenu *menu;
    menu = new addMenu(DM, this);
   // this->hide();
    menu->exec();
    //this->show();
}

void adminLauncher::on_pushButton_3_clicked()
{
    adddistance *dist;
    dist = new adddistance(DM, this);
    dist->exec();
}

void adminLauncher::on_pushButton_import_clicked()
{
    bool success = DM->import();
    if(success)
        QMessageBox::information(this, "Import Text File", "Successfully imported restaurants!");
    else
        QMessageBox::warning(this, "Import Text File", "Error: Could not import from text file.");
}

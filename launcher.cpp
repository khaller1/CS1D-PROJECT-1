#include "launcher.h"
#include "ui_launcher.h"

Launcher::Launcher(DataManager *inDM, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Launcher)
{
    DM = inDM;
    ui->setupUi(this);
}

Launcher::~Launcher()
{
    delete ui;
}

void Launcher::on_ViewRestaurant_Button_clicked()
{
    viewRest *viewAll;
    viewAll = new viewRest(DM, this);
    this->hide();
    viewAll->exec();
    this->show();
}

void Launcher::on_Exit_Button_clicked()
{
    this->close();
}

void Launcher::on_ViewMenu_Button_clicked()
{
    MenuView *viewMenu;
    viewMenu = new MenuView(DM, this);
    this->hide();
    viewMenu->exec();
    this->show();
}

void Launcher::on_AdminLogin_Button_clicked()
{
    login* admin = new login(DM, this);
    admin->exec();
    this->show();
}

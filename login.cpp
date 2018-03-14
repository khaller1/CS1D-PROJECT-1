#include "login.h"
#include "ui_login.h"
#include <QDebug>
#include <QMessageBox>
#include <adminlauncher.h>

login::login(DataManager* inDM, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    DM = inDM;
    prev=parent;
    DM->getAdminData(A_Data);
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}

void login::on_pushButton_clicked()
{
    QString username;
    QString password;
    username=ui->lineEdit_username->text();
    password=ui->lineEdit_password->text();
    if(username == A_Data.at(0).userName && password == A_Data.at(0).passWord)
    {
        QMessageBox::information(this, "Login", "Login successful!");
        close();
        prev->hide();
        adminLauncher* admin = new adminLauncher(DM, prev);
        admin->show();

    }
    else
    {
        QMessageBox::warning(this, "Error", "The username or password you typed is incorrect. Please try again. If you still cannot log in, contact your system administrator.");
    }

}

void login::on_pushButton_2_clicked()
{
    this->close();
}

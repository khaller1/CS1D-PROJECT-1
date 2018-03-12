#include "removerestaurant.h"
#include "ui_removerestaurant.h"

removeRestaurant::removeRestaurant(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::removeRestaurant)
{
    ui->setupUi(this);
}

removeRestaurant::~removeRestaurant()
{
    delete ui;
}

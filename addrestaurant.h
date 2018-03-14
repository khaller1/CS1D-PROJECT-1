#ifndef ADDRESTAURANT_H
#define ADDRESTAURANT_H

#include <QDialog>
#include <main.h>
namespace Ui {
class addRestaurant;
}

class addRestaurant : public QDialog
{
    Q_OBJECT

public:
    explicit addRestaurant(DataManager* inDM, QWidget *parent = 0);
    ~addRestaurant();

private slots:
   // void on_pushButton_clicked();

    void on_pushButton_exit_clicked();          //exits window

    //void on_pushButton_edit_clicked();        //edits a restaurant information

    void on_pushButton_delete_clicked();        //deletes a restaurant

private:
    Ui::addRestaurant *ui;
    RestaurantTable *rTable;
    DataManager* DM;
    QSortFilterProxyModel *Proxy;
    QVector<Restaurant> R_Data;
    QWidget *prev;
};

#endif // ADDRESTAURANT_H

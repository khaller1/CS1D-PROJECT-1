#ifndef CUSTOM_TRIP_H
#define CUSTOM_TRIP_H

#include <QMainWindow>
#include <QDialog>
#include <main.h>
#include <QSortFilterProxyModel>
#include <customtrip_table.h>
#include <carttable.h>
namespace Ui {
class Custom_Trip;
}

class Custom_Trip : public QDialog
{
    Q_OBJECT

public:
    explicit Custom_Trip(DataManager *inDM, QWidget *parent = 0);
    ~Custom_Trip();
    void genStartCombo();
    void genCustomCombo();

private slots:
    void on_Back_Button_clicked();

    void on_Add_cTrip_Button_clicked();

    void on_cStart_Button_clicked();

    void on_cTrip_Start_Button_clicked();

private:
    Ui::Custom_Trip *ui;
    DataManager* DM;
    CustomTrip_Table* c_Table;
    RestaurantTable* r_table;
    QWidget *prev;
    QSortFilterProxyModel *Proxy;
    QStringList start_combo;
    QStringList trip_combo;
    QVector<Restaurant> cust_trip;
    QVector<Restaurant> r_data;
};

#endif // CUSTOM_TRIP_H

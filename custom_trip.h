#ifndef CUSTOM_TRIP_H
#define CUSTOM_TRIP_H

#include <QMainWindow>
#include <QDialog>
#include <main.h>
#include <QSortFilterProxyModel>
#include <carttable.h>
/** \class Custom_Trip
 * Class displays the options for a custom trip selection
 */
namespace Ui {
class Custom_Trip;
}

class Custom_Trip : public QDialog
{
    Q_OBJECT

public:
    explicit Custom_Trip(DataManager *inDM, QWidget *parent = 0); /// Constructor
    ~Custom_Trip(); /// Destructor
    void genStartCombo(); ///Generates values for the custom start combo box
    void genCustomCombo(); /// Generates values for the custom trip combo box

private slots:
    void on_Back_Button_clicked(); /// Returns control to previous menu

    void on_Add_cTrip_Button_clicked(); /// Adds value to custom trip

    void on_cStart_Button_clicked(); /// Selects starting location for custom start trip

    void on_cTrip_Start_Button_clicked(); /// Begins custom trip

private:
    Ui::Custom_Trip *ui; /// UI element
    DataManager* DM; /// Data accessor
    RestaurantTable* r_table; /// Restaurant Table
    QWidget *prev; /// Previous menu
    QSortFilterProxyModel *Proxy; /// Table sorter
    QStringList start_combo; /// Custom start combo box
    QStringList trip_combo; /// Custom trip combo box
    QVector<Restaurant> cust_trip; /// Custom Trip Data
    QVector<Restaurant> r_data; /// Restaurant Data
};

#endif // CUSTOM_TRIP_H

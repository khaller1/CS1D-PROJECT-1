#ifndef TRIPVIEW_H
#define TRIPVIEW_H

#include <QMainWindow>
#include <QDialog>
#include <main.h>
#include <QSortFilterProxyModel>
#include <carttable.h>
#include <triptable.h>
/** \class TripView
 * Class for UI displaying a trip, its cart, and the menu of the current restaurant.
 */
namespace Ui {
class TripView;
}

class TripView : public QMainWindow
{
    Q_OBJECT

public:
    explicit TripView(DataManager *inDM, QWidget *parent = 0); /// Constructor
    ~TripView(); /// Destructor
    void genComboMenu(); /// Generates the values for the menu combo box

private slots:
    void on_pushButton_clicked(); /// Moves to next restaurant

    void on_qty_box_valueChanged(int arg1); /// Updates values if quantity changes

    void on_selector_box_currentIndexChanged(int index); /// updates values if different item is selected
    void on_Cart_Button_clicked(); /// Adds item/Qty to cart

private:
    Ui::TripView *ui; /// UI Element
    DataManager* DM; /// Data Access
    TripTable *rTable; /// Trip Table
    menuTable* M_Table; /// Menu Table
    cartTable* C_Table; /// Cart Table
    QStringList combo; /// List of menu items
    QSortFilterProxyModel *Proxy; /// Sorter
    QWidget *prev; /// Previous menu
    QVector<Restaurant> cTrip; /// Trip Data
    QVector<Purchase> trip_Cart; /// Trip Cart Data
    double dist_traveled; /// Total distance traveled
};

#endif // TRIPVIEW_H

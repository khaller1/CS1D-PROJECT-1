#ifndef TRIPVIEW_H
#define TRIPVIEW_H

#include <QMainWindow>
#include <QDialog>
#include <main.h>
#include <QSortFilterProxyModel>
#include <carttable.h>
#include <triptable.h>

namespace Ui {
class TripView;
}

class TripView : public QMainWindow
{
    Q_OBJECT

public:
    explicit TripView(DataManager *inDM, QWidget *parent = 0);
    ~TripView();
    void genComboMenu();

private slots:
    void on_pushButton_clicked();

    void on_qty_box_valueChanged(int arg1);

    void on_selector_box_currentIndexChanged(int index);

    void on_Cart_Button_clicked();

private:
    Ui::TripView *ui;
    DataManager* DM;
    TripTable *rTable;
    menuTable* M_Table;
    cartTable* C_Table;
    QStringList combo;
    QSortFilterProxyModel *Proxy;
    QWidget *prev;
    QVector<Restaurant> cTrip;
    QVector<Purchase> trip_Cart;
    double dist_traveled;
};

#endif // TRIPVIEW_H

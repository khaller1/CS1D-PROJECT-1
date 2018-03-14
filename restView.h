#ifndef VIEWREST_H
#define VIEWREST_H

#include <QDialog>
#include <main.h>
#include <QSortFilterProxyModel>
/** \class viewRest
 * Class for UI element displaying the restaurants available
 */
namespace Ui {
class viewRest;
}

class viewRest : public QDialog
{
    Q_OBJECT

public:
    explicit viewRest(DataManager* inDM, QWidget *parent = 0); /// Constructor
    ~viewRest(); /// Destructor

private slots:
    void on_Exit_Button_clicked(); ///Returns to previous menu

private:
    Ui::viewRest *ui; /// UI Element
    DataManager* DM; /// Data Access
    RestaurantTable *rTable; /// Restaurant Table
    QSortFilterProxyModel *Proxy; /// Sorter
    QVector<Restaurant> R_Data; /// Restaurant Data
    QWidget *prev; /// Previous Menu
};

#endif // VIEWREST_H

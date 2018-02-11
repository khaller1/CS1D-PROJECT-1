#ifndef VIEWREST_H
#define VIEWREST_H

#include <QDialog>
#include <main.h>
#include <QSortFilterProxyModel>

namespace Ui {
class viewRest;
}

class viewRest : public QDialog
{
    Q_OBJECT

public:
    explicit viewRest(DataManager* inDM, QWidget *parent = 0);
    ~viewRest();

private slots:
    void on_Exit_Button_clicked();

private:
    Ui::viewRest *ui;
    DataManager* DM;
    RestaurantTable *rTable;
    QSortFilterProxyModel *Proxy;
    QVector<Restaurant> R_Data;
    QWidget *prev;
};

#endif // VIEWREST_H

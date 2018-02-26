#ifndef DATAMANAGER_H
#define DATAMANAGER_H
#include "dbmanager.h"

class DataManager
{
public:
    DataManager(QString path);

    void sortMenus();
    void sortDist();

    void getRestaurants(QVector<Restaurant>& oRest);
    void getAdminData(QVector<AdminData>& oAdmin);
    bool addRestaurant(QString id, const QString &namein, QString dist, QString size);
    bool editRestaurant(QString id, const QString &namein, QString dist, QString size);
    bool deleteRestaurant(QString id);
    void addRestStruct(QString id, const QString &namein, QString dist, QString size);
    void editRestStruct(QString id, const QString &namein, QString dist, QString size);
    void deleteRestStruct(QString id);
    bool addMenu(QString id, QString parent, const QString &namein, QString cost);
    bool editMenu(QString id, QString parent, const QString &namein, QString cost);
    bool deleteMenu(QString id, QString parent);

private:
    DbManager* DB;
    QVector<Restaurant> inRest;
    QVector<Menu> inMenu;
    QVector<AllDist> inDist;
    QVector<AdminData> inAdmin;
};

#endif // DATAMANAGER_H

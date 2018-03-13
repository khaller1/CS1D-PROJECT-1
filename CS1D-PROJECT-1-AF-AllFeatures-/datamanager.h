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
    bool deleteRestaurant(QString id);
    bool editRestaurant(QString id, const QString &namein, QString dist, QString size);

    void addRestStruct(QString id, const QString &namein, QString dist, QString size, QVector<AllDist> dlist, QVector<Menu> menu);
    void addRestStruct(QString id, const QString &namein, QString dist, QString size);
    void editRestStruct(QString id, const QString &namein, QString dist, QString size);
    void deleteRestStruct(QString id);

    bool addMenu(QString id, QString parent, const QString &namein, QString cost);
    bool addMenu(QString parent, const QString &namein, QString cost);
    bool editMenu(QString parent, const QString &namein, QString cost);
    bool deleteMenu(QString id, QString parent);

    void addMenuStruct(QString parent, const QString &namein, QString cost);
    void editMenuStruct(QString id, QString parent, const QString &namein, QString cost);
    void editMenuStruct(QString parent, const QString &namein, QString cost);
    void deleteMenuStruct(QString id, QString parent);

    bool addDist(QString source, QString miles, QString destination);
    bool import();

    void getTrip(QVector<Restaurant> &oRest);
    void makeQuickTrip();
    void makeCustomTrip(QVector<Restaurant> &oRest);
    void makeCustomStartTrip(Restaurant StartRest);
    void EndTrip();

private:
    DbManager* DB;
    QVector<Restaurant> inRest;
    QVector<Menu> inMenu;
    QVector<AllDist> inDist;
    QVector<AdminData> inAdmin;
    QVector<Restaurant> qTrip;
};

#endif // DATAMANAGER_H

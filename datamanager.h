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
    void getTrip(QVector<Restaurant> &oRest);
    void makeQuickTrip();


private:
    DbManager* DB;
    QVector<Restaurant> inRest;
    QVector<Menu> inMenu;
    QVector<AllDist> inDist;
    QVector<AdminData> inAdmin;
    QVector<Restaurant> qTrip;
};

#endif // DATAMANAGER_H

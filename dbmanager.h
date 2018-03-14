#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <structs.h>
#include <QtSql>
#include <QDebug>

using namespace std;

class DbManager
{
public:
    DbManager(const QString& path);
    ~DbManager();
    bool addRestaurant(QString id, const QString &namein, QString dist, QString size);      //adds restaurant to restaurant table in db
    bool addRestaurant(const QString &namein, QString dist, QString size);                  //adds restaurant to restaurant table in db
    bool addMenuItem(QString id, QString parent, const QString &namein, QString cost);      //adds menu to menu table in db
    bool addMenuItem(QString parent, const QString &namein, QString cost);                  //adds menu to menu table in db
    bool addDistance(int source, double miles, int destination );                           //adds distance to distance table in db
    bool addDistance(QString source, QString miles, QString destination );                  //adds distance to distance table in db

    bool deleteRestaurant(QString id);                                                      //deletes restaurant from restaurant table in db
    bool deleteMenuItem(QString name, QString parent);                                      //deletes menu from menu table in db
    bool removeRestaurant(int id);                                                          //deletes restaurant from restaurant table in db
    bool removeRestaurant(QString name);                                                    //deletes restaurant from restaurant table in db
    bool removeMenuItem(QString name);                                                      //deletes menu from menu table in db
    bool removeMenuItem(int id);                                                            //deletes menu from menu table in db
    bool removeDistance(int id);                                                            //deletes distance from distance table in db
    bool removeDistance(int src, int dst);                                                  //deletes distance from distance table in db

    bool restaurantExists(int id) const;                                                    //checks if restaurant exists
    bool restaurantExists(QString name) const;                                              //checks if restaurant exists
    bool menuItemExists(int id) const;
    bool menuItemExists(QString name) const;
    bool distanceExists(int id) const;
    bool distanceExists(int src, int dst) const;

    void printAllRestaurants() const;
    bool isOpen() const;
    bool createTable();

    bool editRest(QString id, const QString &namein, QString dist, QString size);
    void setRestName(const QString &name, int id) const;
    void setRestName(QString oldName, QString newName);
    void setRestDist(double dist, int id) const;
    void setRestDist(QString name, double dist);
    void setMenuSize(int size, int id) const;

    bool editMenu(QString parent, const QString &namein, QString cost);
    void setItemName(int id, QString newName);
    void setItemName(QString oldName, QString newName);
    void setItemPrice(int id, double price);
    void setItemPrice(QString name, double price);
    void setItemId(QString name, int newId);
    void setItemId(int baseId, int newId);

    void setDistSrc(int id, int src);
    void setDistSrc(int src, int dst, int newSrc);
    void setDistMiles(int id, double miles);
    void setDistMiles(int src, int dst, double miles);
    void setDistDstId(int id, int dst);
    void setDistDstId(int src, int dst, int newDst);


    QString getRestName(int id);
    double getRestDist(int id);
    int getMenuSize(int id);

    bool loadRestaurants(QVector<Restaurant>& vRestaurants);
    bool loadMenus(QVector<Menu>& vMenus);
    bool loadDistances(QVector<AllDist>& vDistances);
    bool loadAdmins(QVector<AdminData>& vAdmins);
    QSqlDatabase getDb();
private:
    QSqlDatabase m_db;

};

#endif // DBMANAGER_H

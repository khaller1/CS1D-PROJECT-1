#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QSqlDatabase>
#include <iomanip>
#include <iostream>
using namespace std;

class DbManager
{
public:
    DbManager();
    DbManager(const QString& path);
    ~DbManager();
    bool addRestaurant(int id, const QString &namein, double dist, int size);
    bool addMenuItem(int id, const QString &namein, double cost);
    bool addDistance(int source, double miles, int destination );

    bool removeRestaurant(int id);
    bool removeRestaurant(QString name);
    bool removeMenuItem(QString name);
    bool removeMenuItem(int id);
    bool removeDistance(int id);
    bool removeDistance(int src, int dst);

    bool restaurantExists(int id) const;
    bool restaurantExists(QString name) const;
    bool menuItemExists(int id) const;
    bool menuItemExists(QString name) const;
    bool distanceExists(int id) const;
    bool distanceExists(int src, int dst) const;

    void printAllRestaurants() const;
    bool isOpen() const;
    bool createTable();

    void setRestName(const QString &name, int id) const;
    void setRestName(QString oldName, QString newName);
    void setRestDist(double dist, int id) const;
    void setRestDist(QString name, double dist);
    void setMenuSize(int size, int id) const;

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

private:
    QSqlDatabase m_db;
};

#endif // DBMANAGER_H

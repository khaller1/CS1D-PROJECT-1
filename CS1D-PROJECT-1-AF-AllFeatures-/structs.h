#ifndef STRUCTS_H
#define STRUCTS_H
#include <QString>
#include <QVector>

struct Menu{
    int baseid;
    int parentID;
    QString name;
    double cost;
};

struct AllDist {
    int sourceID;
    int destID;
    QString destName;
    double dist;
};

struct AdminData{
    QString userName;
    QString passWord;
};
struct Restaurant{
    QString name;
    double SBdist;
    int menuSize;
    int idNum;
    QVector<AllDist> DList;
    QVector<Menu> RMenu;
};
struct Purchase{
    QString rName;
    QString pName;
    double pCost;
    int qty;
    double tCost;
};
#endif // STRUCTS_H

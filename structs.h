#ifndef STRUCTS_H
#define STRUCTS_H
#include <QString>
#include <QVector>
/** \struct Menu
 * Struct Menu definition
 */
struct Menu{
    int baseid; /// Menu IDNum
    int parentID; /// Parent IDnum
    QString name; /// Name of item
    double cost; /// Cost of item
};
/** \struct AllDist
 * Struct AllDist definition
 */
struct AllDist {
    int sourceID; /// Source of distance
    int destID; /// Destination of distance
    QString destName; /// Destination Name
    double dist; /// Distance value
};
/** \struct AdminData
 * Struct AdminData definition
 */
struct AdminData{
    QString userName; /// Username
    QString passWord; /// Password
};
/** \struct Restaurant
 * Struct Restaurant definition
 */
struct Restaurant{
    QString name; /// Restaurant Name
    double SBdist; /// Distance to Saddleback
    int menuSize; /// Size of menu
    int idNum; /// ID number of restaurant
    QVector<AllDist> DList; /// Distances to other restaurants
    QVector<Menu> RMenu; /// Menu of restaurant
};
/** \struct Purchase
 * Struct Purchase definition
 */
struct Purchase{
    QString rName; /// Name of restaurant
    QString pName; /// Name of product
    double pCost; /// cost of product
    int qty; /// qty of product 
    double tCost; /// cost of product*qty
};
#endif // STRUCTS_H

#ifndef DATAMANAGER_H
#define DATAMANAGER_H
#include "dbmanager.h"
/** \class DataManager
 * Class for controlling the data from persistent source as well as manipulates the data.
 * Persistent data set can be changed and relinked to this data manager
 */
class DataManager
{
public:
    DataManager(QString path); /// Constructor

    void sortMenus(); /// Sorts the menu's to their restaurants
    void sortDist(); /// Sorts the distance tables to each restaurant

    void getRestaurants(QVector<Restaurant>& oRest); /// Returns the restaurant data
    void getAdminData(QVector<AdminData>& oAdmin); /// Returns Admin data

    bool addRestaurant(QString id, const QString &namein, QString dist, QString size); /// Adds restaurant to DB
    bool deleteRestaurant(QString id); /// Deletes restaurant from DB
    bool editRestaurant(QString id, const QString &namein, QString dist, QString size); ///Edits Values in restaurant data

    void addRestStruct(QString id, const QString &namein, QString dist, QString size); /// Adds Struct to the data
    void addRestStruct(QString id, const QString &namein, QString dist, QString size, QVector<AllDist> dlist, QVector<Menu> menu); /// Adds struct to the data
    void editRestStruct(QString id, const QString &namein, QString dist, QString size); /// Edits a restaurant struct
    void deleteRestStruct(QString id); /// Deletes restaurant from data set

    bool addMenu(QString id, QString parent, const QString &namein, QString cost); /// Adds menu item to DB
    bool addMenu(QString parent, const QString &namein, QString cost); /// Adds menu item to DB
    bool editMenu(QString parent, const QString &namein, QString cost); /// Edits menu item
    bool deleteMenu(QString name, QString parent); /// Deletes menu item

    void addMenuStruct(QString parent, const QString &namein, QString cost); /// Adds menu struct to data
    void editMenuStruct(QString id, QString parent, const QString &namein, QString cost); /// Edits menu struct in data
    void editMenuStruct(QString parent, const QString &namein, QString cost); /// Edits menu struct in data
    void deleteMenuStruct(QString name, QString parent); /// Deletes menu struct in data

    bool addDist(QString source, QString miles, QString destination); /// Adds dist to DB
    void getTrip(QVector<Restaurant> &oRest); /// Returns current trip values
    void makeQuickTrip(); /// Generates quick trip values
    void makeCustomTrip(QVector<Restaurant> &oRest); /// Generates custom trip values
    void makeCustomStartTrip(Restaurant StartRest); /// Generates custom start trip values
    void EndTrip(); /// Clears current trip

    bool import(); /// Imports new data from .txt source

private:
    DbManager* DB; /// Persistent Data
    QVector<Restaurant> inRest; /// Restaurant Data
    QVector<Menu> inMenu; /// Menu Data
    QVector<AllDist> inDist; /// Distance Data
    QVector<AdminData> inAdmin; /// Admin Data
    QVector<Restaurant> qTrip; /// Current trip data
};

#endif // DATAMANAGER_H

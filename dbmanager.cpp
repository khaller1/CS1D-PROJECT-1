#include <dbmanager.h>

DbManager::~DbManager()
{
    if(m_db.isOpen())
    {
        m_db.close();
    }
}

bool DbManager::isOpen() const
{
    return m_db.isOpen();
}
QSqlDatabase DbManager::getDb()
{
    return m_db;
}

DbManager::DbManager(const QString& path)
{
    m_db=QSqlDatabase::addDatabase("QSQLITE");
    m_db.setDatabaseName(path);
    if(!m_db.open())
    {
        qDebug() << "Error: could not connect to Database";
    }
    else
    {
        qDebug() << "Database: connection is A-okay";
    }
}

bool DbManager::addRestaurant(QString id, const QString &namein, QString dist, QString size)
{
    bool success=false;
    QSqlQuery query;
    query.prepare("insert into restaurant (restId, restName, sbDist, menuSize) values ('"+id+"','"+namein+"','"+dist+"','"+size+"')");
    if(query.exec())
        success=true;
    else qDebug() << "add restaurant failed - " << query.lastError();
    return success;
}

bool DbManager::addRestaurant(const QString &namein, QString dist, QString size)
{
    bool success=false;;
    QSqlQuery query;
    query.prepare("insert into restaurant (restName, sbDist, menuSize) values ('"+namein+"','"+dist+"','"+size+"')");
    if(query.exec())
        success=true;
    else qDebug() << "add restaurant failed - " << query.lastError();
    return success;
}

bool DbManager::addMenuItem(QString id, QString parent, const QString &namein, QString cost)
{
    bool success=false;;
    QSqlQuery query;
    query.prepare("insert into menu (baseId, parentId, itemName, itemCost) values ('"+id+"','"+parent+"','"+namein+"','"+cost+"')");
    if(query.exec())
        success=true;
    else qDebug() << "add menu failed - " << query.lastError();
    return success;
}
bool DbManager::addMenuItem(QString parent, const QString &namein, QString cost)
{
    bool success=false;;
    QSqlQuery query;
    query.prepare("insert into menu (parentId, itemName, itemCost) values ('"+parent+"','"+namein+"','"+cost+"')");
    if(query.exec())
        success=true;
    else qDebug() << "add menu failed - " << query.lastError();
    return success;
}
bool DbManager::addDistance(QString source, QString miles, QString destination)
{
    bool success=false;;
    QSqlQuery query;
    query.prepare("insert into distance (sourceId, miles, destinationId) values ('"+source+"','"+miles+"','"+destination+"')");
    if(query.exec())
        success=true;
    else qDebug() << "add menu failed - " << query.lastError();
    return success;
}

bool DbManager::editRest(QString id, const QString &namein, QString dist, QString size)
{
    bool success=false;
    QSqlQuery query;
    query.prepare("update restaurant set restName = '"+namein+"', sbDist ='"+dist+"', menuSize = '"+size+"' where restId= '"+id+"'");
    if(query.exec())
        success=true;
    else
        qDebug() << "failed updating restaurant - " << query.lastError();
    return success;
}
bool DbManager::editMenu(QString parent, const QString &namein, QString cost)
{
    bool success=false;
    QSqlQuery query;
    query.prepare("update menu set itemCost ='"+cost+"' where parentId = '"+parent+"' and itemName = '"+namein+"'");
    if(query.exec())
        success=true;
    else
        qDebug() << "failed updating menu - " << query.lastError();
    return success;
}

bool DbManager::deleteRestaurant(QString id)
{
    bool success=false;
    QSqlQuery query;
    QSqlQuery query2;
    QSqlQuery query3;
    QSqlQuery query4;
    query.prepare("delete from restaurant where restId = '"+id+"'");
    query2.prepare("delete from menu where parentId = '"+id+"'");
    query3.prepare("delete from distance where sourceId = '"+id+"'");
    query4.prepare("delete from distance where destinationId = '"+id+"'");

    query2.exec();
    query3.exec();
    query4.exec();
    if(query.exec())
        success=true;
    else
        qDebug() << "failed deleting restaurant - " << query.lastError();
    return success;
}
bool DbManager::deleteMenuItem(QString name, QString parent)
{
    bool success=false;
    QSqlQuery query;
    query.prepare("delete from menu where itemName = '"+name+"' and parentId = '"+parent+"'");
    if(query.exec())
        success=true;
    else
        qDebug() << "failed deleting menu item - " << query.lastError();
    return success;
}

bool DbManager::addDistance(int source, double miles, int destination )
{
    bool success=false;
    QSqlQuery query("INSERT INTO distance (sourceId, miles, destinationId)"
                    "VALUES (:source, :miles, :destination)");
    query.bindValue(":source",source);
    query.bindValue(":miles",miles);
    query.bindValue(":destination",destination);
    if(query.exec())
        success=true;
    else qDebug() << "failed adding distance - " << query.lastError();
    return success;
}

bool DbManager::removeRestaurant(int id)
{
    bool success=false;
    if(restaurantExists(id))
    {
        QSqlQuery query;
        query.prepare("DELETE FROM restaurant WHERE restId = (:id)");
        query.bindValue(":id",id);
        success=query.exec();

        if(!success)
        {
            qDebug() << "removeRestaurant error: " << query.lastError();
        }
    }
    else
    {
        qDebug() << "remove restaurant failed, restaurant does not exist";
    }
    return success;
}
bool DbManager::removeRestaurant(QString name)
{
    bool success=false;
    if(restaurantExists(name))
    {
        QSqlQuery query;
        query.prepare("DELETE FROM restaurant WHERE restName = (:name)");
        query.bindValue(":name",name);
        success=query.exec();

        if(!success)
        {
            qDebug() << "removeRestaurant error: " << query.lastError();
        }
    }
    else
    {
        qDebug() << "remove restaurant failed, restaurant does not exist";
    }
    return success;
}
bool DbManager::removeMenuItem(QString name)
{
    bool success=false;
    if(menuItemExists(name))
    {
        QSqlQuery query;
        query.prepare("DELETE FROM menu WHERE itemName=(:name)");
        query.bindValue(":name",name);
        success=query.exec();
        if(!success)
            qDebug() << "menu removal error: " << query.lastError();
    }
    else qDebug() << "remove menu item failed, menu item does not exist";
    return success;
}
bool DbManager::removeMenuItem(int id)
{
    bool success=false;
    if(menuItemExists(id))
    {
        QSqlQuery query;
        query.prepare("DELETE FROM menu WHERE itemName=(:id)");
        query.bindValue(":id",id);
        success=query.exec();
        if(!success)
            qDebug() << "menu removal error: " << query.lastError();
    }
    else qDebug() << "remove menu item failed, menu item does not exist";
    return success;
}
bool DbManager::removeDistance(int id)
{
    bool success=false;
    if(distanceExists(id))
    {
        QSqlQuery query;
        query.prepare("DELETE FROM distance WHERE id=(:id)");
        query.bindValue(":id",id);
        success=query.exec();
        if(!success)
            qDebug() << "distance removal error: " << query.lastError();
    }
    else qDebug() << "remove distance failed, distance does not exist";
    return success;
}
bool DbManager::removeDistance(int src, int dst)
{
    bool success=false;
    if(distanceExists(src, dst))
    {
        QSqlQuery query;
        query.prepare("DELETE FROM distance WHERE sourceId=(:src) AND destinationId = (:dst)");
        query.bindValue(":src",src);
        query.bindValue(":dst",dst);
        success=query.exec();
        if(!success)
            qDebug() << "distance removal error: " << query.lastError();
    }
    else qDebug() << "remove distance failed, distance does not exist";
    return success;
}
bool DbManager::restaurantExists(int id) const
{
    bool exists = false;
    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT restId FROM restaurant WHERE restId = (:id)");
    checkQuery.bindValue(":id",id);
    if(checkQuery.exec())
    {
        if(checkQuery.next())
        {
            exists=true;
        }
    }
    else qDebug() << "restaurant doesnt exist";
    return exists;
}
bool DbManager::restaurantExists(QString name) const
{
    bool exists = false;
    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT restName FROM restaurant WHERE restName = (:name)");
    checkQuery.bindValue(":name",name);
    if(checkQuery.exec())
    {
        if(checkQuery.next())
        {
            exists=true;
        }
    }
    else qDebug() << "restaurant doesnt exist";
    return exists;
}
bool DbManager::menuItemExists(int id) const
{
    bool exists = false;
    QSqlQuery query;
    query.prepare("SELECT baseId FROM menu WHERE baseId = (:id)");
    query.bindValue(":id",id);
    if(query.exec())
    {
        if(query.next())
        {
            exists=true;
        }
    }
    else qDebug() << "menu item doesnt exist";
    return exists;
}
bool DbManager::menuItemExists(QString name) const
{
    bool exists = false;
    QSqlQuery query;
    query.prepare("SELECT itemName FROM menu WHERE itemName = (:name)");
    query.bindValue(":name",name);
    if(query.exec())
    {
        if(query.next())
        {
            exists=true;
        }
    }
    else qDebug() << "menu item doesnt exist";
    return exists;
}
bool DbManager::distanceExists(int id) const
{
    bool exists = false;
    QSqlQuery query;
    query.prepare("SELECT id FROM distance WHERE id = (:id)");
    query.bindValue(":id",id);
    if(query.exec())
    {
        if(query.next())
        {
            exists=true;
        }
    }
    else qDebug() << "distance does not exist";
    return exists;
}
bool DbManager::distanceExists(int src, int dst) const
{
    bool exists = false;
    QSqlQuery query;
    query.prepare("SELECT sourceId, destinationId FROM distance WHERE sourceId = (:src) AND destinationId = (:dst)");
    query.bindValue(":src",src);
    query.bindValue(":dst",dst);
    if(query.exec())
    {
        if(query.next())
        {
            exists=true;
        }
    }
    else qDebug() << "distance does not exist";
    return exists;
}
void DbManager::printAllRestaurants() const
{
    qDebug() << "Restaurants in db:";
    QSqlQuery query("SELECT * FROM restaurant");

    while (query.next())
    {
        QString temp="";
        int idName = query.record().indexOf("restId");
        temp+=query.value(idName).toString();

        idName = query.record().indexOf("restName");
        temp+=": " + query.value(idName).toString();

        idName = query.record().indexOf("sbDist");
        temp+=" - distance from Saddleback : " + query.value(idName).toString();

        qDebug() << temp;
    }
}
void DbManager::setRestName(const QString &name, int id) const
{
    QSqlQuery query;
    if(restaurantExists(id))
    {
        query.prepare("UPDATE restaurant SET restName=(:name) WHERE restId = (:id)");
        query.bindValue(":id",id);
        query.bindValue(":name",name);
        query.exec();
    }

}
void DbManager::setRestName(QString oldName, QString newName)
{
    QSqlQuery query;
    if(restaurantExists(oldName))
    {
        query.prepare("UPDATE restaurant SET restName=(:newName) WHERE restName = (:oldName)");
        query.bindValue(":oldName",oldName);
        query.bindValue(":newName",newName);
        query.exec();
    }
}
void DbManager::setRestDist(double dist, int id) const
{
    if(restaurantExists(id))
    {
        QSqlQuery query;
        query.prepare("UPDATE restaurant SET sbDist=(:dist) WHERE restId = (:id)");
        query.bindValue(":id",id);
        query.bindValue(":dist",dist);
        query.exec();
    }
}
void DbManager::setRestDist(QString name, double dist)
{
    if(restaurantExists(name))
    {
        QSqlQuery query;
        query.prepare("UPDATE restaurant SET sbDist=(:dist) WHERE restName = (:name)");
        query.bindValue(":name",name);
        query.bindValue(":dist",dist);
        query.exec();
    }
}
void DbManager::setMenuSize(int size, int id) const
{
    if(restaurantExists(id))
    {
        QSqlQuery query;
        query.prepare("UPDATE restaurant SET menuSize=(:size) WHERE restId=(:id)");
        query.bindValue(":id",id);
        query.bindValue(":size",size);
        query.exec();
    }
}
void DbManager::setItemName(QString oldName, QString newName)
{
    if(menuItemExists(oldName))
    {
        QSqlQuery query;
        query.prepare("UPDATE menu SET itemName=(:newName) WHERE itemName=(:oldName)");
        query.bindValue(":oldName",oldName);
        query.bindValue(":newName",newName);
        query.exec();
    }
}
void DbManager::setItemName(int id, QString newName)
{
    if(menuItemExists(id))
    {
        QSqlQuery query;
        query.prepare("UPDATE menu SET itemName=(:newName) WHERE baseId=(:id)");
        query.bindValue(":newName",newName);
        query.bindValue(":id",id);
        query.exec();
    }
}
void DbManager::setItemPrice(int id, double price)
{
    if(menuItemExists(id))
    {
        QSqlQuery query;
        query.prepare("UPDATE menu SET itemCost=(:price) WHERE baseId=(:id)");
        query.bindValue(":id",id);
        query.bindValue(":price",price);
        query.exec();
    }
}
void DbManager::setItemPrice(QString name, double price)
{
    if(menuItemExists(name))
    {
        QSqlQuery query;
        query.prepare("UPDATE menu SET itemCost=(:price) WHERE itemName=(:name)");
        query.bindValue(":name",name);
        query.bindValue(":price",price);
        query.exec();
    }
}
void DbManager::setItemId(QString name, int newId)
{
    if(menuItemExists(name))
    {
        QSqlQuery query;
        query.prepare("UPDATE menu SET parentId=(:newId) WHERE itemName=(:name)");
        query.bindValue(":name",name);
        query.bindValue(":newId",newId);
        query.exec();
    }
}
void DbManager::setItemId(int baseId, int newId)
{
    if(menuItemExists(baseId))
    {
        QSqlQuery query;
        query.prepare("UPDATE menu SET parentId=(:newId) WHERE baseId=(:baseId)");
        query.bindValue(":baseId",baseId);
        query.bindValue(":newId",newId);
        query.exec();
    }
}
void DbManager::setDistSrc(int id, int src)
{
    if(distanceExists(id))
    {
        QSqlQuery query;
        query.prepare("UPDATE distance SET sourceId=(:src) WHERE id=(:id)");
        query.bindValue(":src",src);
        query.bindValue(":id",id);
        query.exec();
    }
}
void DbManager::setDistSrc(int src, int dst, int newSrc)
{
    if(distanceExists(src,dst))
    {
        QSqlQuery query;
        query.prepare("UPDATE distance SET sourceId=(:newSrc) WHERE sourceId=(:src) AND destinationId=(:dst)");
        query.bindValue(":src",src);
        query.bindValue(":dst",dst);
        query.bindValue(":newSrc",newSrc);
        query.exec();
    }
}
void DbManager::setDistMiles(int src, int dst, double miles)
{
    if(distanceExists(src,dst))
    {
        QSqlQuery query;
        query.prepare("UPDATE distance SET miles=(:miles) WHERE sourceId=(:src) AND destinationId=(:dst)");
        query.bindValue(":src",src);
        query.bindValue(":dst",dst);
        query.bindValue(":miles",miles);
        query.exec();
    }
}
void DbManager::setDistMiles(int id, double miles)
{
    if(distanceExists(id))
    {
        QSqlQuery query;
        query.prepare("UPDATE distance SET miles=(:miles) WHERE id=(:id)");
        query.bindValue(":miles",miles);
        query.bindValue(":id",id);
        query.exec();
    }
}
void DbManager::setDistDstId(int id, int dst)
{
    if(distanceExists(id))
    {
        QSqlQuery query;
        query.prepare("UPDATE distance SET destinationId=(:dst) WHERE id=(:id)");
        query.bindValue(":id",id);
        query.bindValue(":dst",dst);
        query.exec();
    }
}
void DbManager::setDistDstId(int src, int dst, int newDst)
{
    if(distanceExists(src,dst))
    {
        QSqlQuery query;
        query.prepare("UPDATE distance SET destinationId=(:newDst) WHERE sourceId=(:src) AND destinationId=(:dst)");
        query.bindValue(":src",src);
        query.bindValue(":dst",dst);
        query.bindValue(":newDst",newDst);
        query.exec();
    }
}
QString DbManager::getRestName(int id)
{
    QSqlQuery query;
    QString name="";

    query.prepare("SELECT restName FROM restaurant WHERE restId=(:id)");
    query.bindValue(":id",id);
    query.exec();
    query.next();
    int index =query.record().indexOf("restName");
    name+=query.value(index).toString();

    return name;
}
double DbManager::getRestDist(int id)
{
    double dist;
    QSqlQuery query;
    query.prepare("SELECT sbDist FROM restaurant WHERE restId=(:id)");
    query.bindValue(":id",id);
    query.exec();
    query.next();
    int index=query.record().indexOf("sbDist");
    dist=query.value(index).toDouble();
    return dist;
}
int DbManager::getMenuSize(int id)
{
    int size;
    QSqlQuery query;
    query.prepare("SELECT menuSize FROM restaurant WHERE restId=(:id)");
    query.bindValue(":id",id);
    query.exec();
    query.next();
    int index=query.record().indexOf("menuSize");
    size = query.value(index).toInt();
    return size;
}
bool DbManager::loadRestaurants(QVector<Restaurant>& vRestaurants){
    Restaurant temp;
    QSqlQuery query("SELECT * FROM restaurant");
    query.exec();

      while(query.next())
      {
          temp.idNum = query.value(0).toInt();
          temp.name = query.value(1).toString();
          temp.SBdist = query.value(2).toDouble();
          temp.menuSize = query.value(3).toInt();

          vRestaurants.push_back(temp);
      }
      return vRestaurants.size() > 0;
}
bool DbManager::loadMenus(QVector<Menu>& vMenus){
    Menu temp;
    QSqlQuery query("SELECT * FROM menu");
    query.exec();

      while(query.next())
      {
          temp.baseid = query.value(0).toInt();
          temp.parentID = query.value(1).toInt();
          temp.name = query.value(2).toString();
          temp.cost = query.value(3).toDouble();
          vMenus.push_back(temp);
      }
      return vMenus.size() > 0;
}

bool DbManager::loadDistances(QVector<AllDist>& vDistances){
    AllDist temp;
    QSqlQuery query("SELECT * FROM distance");
    query.exec();

      while(query.next())
      {
          temp.sourceID = query.value(1).toInt();
          temp.dist = query.value(2).toDouble();
          temp.destID = query.value(3).toInt();

          vDistances.push_back(temp);
      }
      return vDistances.size() > 0;
}
bool DbManager::loadAdmins(QVector<AdminData>& vAdmins){
    AdminData temp;
    QSqlQuery query("SELECT * FROM admin");
    query.exec();

      while(query.next())
      {
          temp.userName = query.value(0).toString();
          temp.passWord = query.value(1).toString();

          vAdmins.push_back(temp);
      }
      return vAdmins.size() > 0;
}

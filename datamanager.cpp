#include "datamanager.h"

DataManager::DataManager(QString path)
{
    DB = new DbManager(path);
    DB->loadRestaurants(inRest);
    DB->loadMenus(inMenu);
    DB->loadDistances(inDist);
    DB->loadAdmins(inAdmin);
    this->sortDist();
    this->sortMenus();
}

void DataManager::sortMenus(){
    Menu temp;
    for(auto it=inRest.begin();it<inRest.end();++it){
        for(auto j=inMenu.begin();j<inMenu.end();++j){
            if(it->idNum == j->parentID){
                temp.name = j->name;
                temp.cost = j->cost;
                it->RMenu.push_back(temp);
            }
        }
    }
}

void DataManager::sortDist(){
    AllDist temp;
    for(auto it=inRest.begin();it<inRest.end();++it){
        for(auto j=inDist.begin();j<inDist.end();++j){
            if(it->idNum == j->sourceID){
                temp.dist = j->dist;
                temp.destID = j->destID;
                it->DList.push_back(temp);
            }
        }
    }
}

void DataManager::getRestaurants(QVector<Restaurant> &oRest){
    oRest = inRest;
}

void DataManager::getAdminData(QVector<AdminData> &oAdmin){
    oAdmin = inAdmin;
}

bool DataManager::addRestaurant(QString id, const QString &namein, QString dist, QString size)
{
    return DB->addRestaurant(id, namein, dist, size);
}
bool DataManager::editRestaurant(QString id, const QString &namein, QString dist, QString size)
{
    return DB->editRest(id, namein, dist, size);
}
bool DataManager::deleteRestaurant(QString id)
{
    return DB->deleteRestaurant(id);
}

bool DataManager::addMenu(QString id, QString parent, const QString &namein, QString cost)
{
    return DB->addMenuItem(id, parent, namein, cost);
}
void DataManager::addRestStruct(QString id, const QString &namein, QString dist, QString size)
{
    Restaurant temp;
    temp.idNum=id.toInt();
    temp.SBdist=dist.toDouble();
    temp.name=namein;
    temp.menuSize=size.toInt();
    inRest.push_back(temp);
}
void DataManager::editRestStruct(QString id, const QString &namein, QString dist, QString size)
{
    Restaurant temp;
    temp.idNum=id.toInt();
    temp.SBdist=dist.toDouble();
    temp.name=namein;
    temp.menuSize=size.toInt();
    for(int i=0;i<inRest.length()-1;i++)
    {
        if(inRest[i].idNum==id.toInt())
        {
            inRest.remove(i);
            qDebug() << "test";
        }
    }
    inRest.push_back(temp);
}
void DataManager::deleteRestStruct(QString id)
{
    for(int i=0;i<inRest.length()-1;i++)
    {
        if(inRest[i].idNum==id.toInt())
        {
            inRest.remove(i);
        }
    }
    qDebug() << "end of loop";
}
bool DataManager::editMenu(QString id, QString parent, const QString &namein, QString cost)
{
    return DB->editMenu(id, parent, namein, cost);
}
bool DataManager::deleteMenu(QString id, QString parent)
{
    return DB->deleteMenuItem(id, parent);
}

void DataManager::addMenuStruct(QString id, QString parent, const QString &namein, QString cost)
{
    int idnum = id.toInt();
    int parentid = parent.toInt();
    QString name = namein;
    double price = cost.toDouble();

    Menu temp;
    temp.cost=price;
    temp.name=name;
    temp.parentID=parent.toInt();
    inMenu.push_back(temp);
    for(int i=0;i<inRest.length()-1;i++)
    {
        if(inRest.at(i).idNum==parentid)
        {

            inRest[i].RMenu.push_back(temp);
        }
    }
}
void DataManager::editMenuStruct(QString id, QString parent, const QString &namein, QString cost)
{
    int idnum = id.toInt();
    int parentid = parent.toInt();
    QString name = namein;
    double price = cost.toDouble();

    Menu temp;
    temp.baseid=idnum;
    temp.cost=price;
    temp.name=name;
    temp.parentID=parent.toInt();

    for(int i=0;i<inMenu.length()-1;i++)
    {
        if(inMenu[i].baseid==idnum)
        {
            inMenu.remove(i);
            inMenu.push_back(temp);
        }
    }
}

void DataManager::deleteMenuStruct(QString id, QString parent)
{
    int idnum = id.toInt();
    int parentid = parent.toInt();

    for(int i=0;i<inMenu.length()-1;i++)
    {
        if(inMenu[i].baseid==idnum && inMenu[i].parentID==parentid)
        {
            inMenu.remove(i);
        }
    }
}
bool DataManager::addDist(QString source, QString miles, QString destination)
{
    return DB->addDistance(source, miles, destination);
}

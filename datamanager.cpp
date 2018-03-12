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
void DataManager::getTrip(QVector<Restaurant>& oRest){
    oRest = qTrip;
    qTrip.clear();
}
void DataManager::makeQuickTrip(){
    Restaurant temp;
    QVector<Restaurant> tempRests;
    int id;
    QVector<int> used;
    double Tdist;
    for(auto it=inRest.begin();it!=inRest.end();++it){
        tempRests.push_back(*it);
    }
    temp = tempRests[0];
    for(auto it = tempRests.begin();it<tempRests.end();++it){
        if(temp.SBdist > it->SBdist){
            temp = *it;
        }
    }
    qTrip.push_back(temp);
    used.push_back(qTrip[0].idNum);

    for(int i=0;i<tempRests.size();++i){
        Tdist = 999;

        for(auto it = 0;it<qTrip[i].DList.size();++it){
            for(auto itz = used.begin();itz!=used.end();itz++){;
                if(it < qTrip[i].DList.size()){
                    if(qTrip[i].DList[it].destID == *itz){
                        qTrip[i].DList.remove(it);
                    }
                } else {
                    it = 0;
                }
            }
        }

        for(auto it = qTrip[i].DList.begin();it!=qTrip[i].DList.end();++it){
            if(it->dist != 0 &&
               it->dist < Tdist){
                id = it->destID;
                Tdist = it->dist;
            }
        }

        for(auto it = tempRests.begin();it<tempRests.end();++it){
            if(it->idNum == id){
                temp = *it;
                temp.SBdist = Tdist;
                qTrip.push_back(temp);
                used.push_back(temp.idNum);
            }
        }
    }
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
bool DataManager::addMenu(QString parent, const QString &namein, QString cost)
{
    return DB->addMenuItem(parent, namein, cost);
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

void DataManager::addMenuStruct(QString parent, const QString &namein, QString cost)
{
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

void DataManager::makeCustomStartTrip(Restaurant StartRest){
    Restaurant temp;
    QVector<Restaurant> tempRests;
    int id;
    QVector<int> used;
    double Tdist;
    for(auto it=inRest.begin();it!=inRest.end();++it){
        tempRests.push_back(*it);
    }
    temp = StartRest;
    qTrip.push_back(temp);
    used.push_back(qTrip[0].idNum);

    for(int i=0;i<tempRests.size();++i){
        Tdist = 999;

        for(auto it = 0;it<qTrip[i].DList.size();++it){
            for(auto itz = used.begin();itz!=used.end();itz++){;
                if(it < qTrip[i].DList.size()){
                    if(qTrip[i].DList[it].destID == *itz){
                        qTrip[i].DList.remove(it);
                    }
                } else {
                    it = 0;
                }
            }
        }

        for(auto it = qTrip[i].DList.begin();it!=qTrip[i].DList.end();++it){
            if(it->dist != 0 &&
               it->dist < Tdist){
                id = it->destID;
                Tdist = it->dist;
            }
        }

        for(auto it = tempRests.begin();it<tempRests.end();++it){
            if(it->idNum == id){
                temp = *it;
                temp.SBdist = Tdist;
                qTrip.push_back(temp);
                used.push_back(temp.idNum);
            }
        }
    }
}
void DataManager::makeCustomTrip(QVector<Restaurant> &oRest){
    Restaurant temp;
    QVector<Restaurant> tempRests;
    int id;
    QVector<int> used;
    QVector<int> dests;
    double Tdist;
    for(auto it=oRest.begin();it!=oRest.end();++it){
        tempRests.push_back(*it);
        dests.push_back(it->idNum);
    }
    temp = tempRests[0];
    for(auto it = tempRests.begin();it<tempRests.end();++it){
        if(temp.SBdist > it->SBdist){
            temp = *it;
        }
    }
    qTrip.push_back(temp);
    used.push_back(qTrip[0].idNum);

    for(int i=0;i<tempRests.size()-1;++i){
        Tdist = 999;

        for(auto it = 0;it<qTrip[i].DList.size();++it){
            for(auto itz = used.begin();itz!=used.end();itz++){;
                if(it < qTrip[i].DList.size()){
                    if(qTrip[i].DList[it].destID == *itz){
                        qTrip[i].DList.remove(it);
                    }
                } else {
                    it = 0;
                }
            }
        }

        for(auto it = qTrip[i].DList.begin();it!=qTrip[i].DList.end();++it){
            for(auto itz = dests.begin();itz!= dests.end();++itz){
                if(it->destID == *itz){
                    if(it->dist != 0 &&
                       it->dist < Tdist){
                        id = it->destID;
                        Tdist = it->dist;
                    }
                }
            }
        }

        for(auto it = tempRests.begin();it<tempRests.end();++it){
            if(it->idNum == id){
                temp = *it;
                temp.SBdist = Tdist;
                qTrip.push_back(temp);
                used.push_back(temp.idNum);
            }
        }
    }
}
void DataManager::EndTrip(){
    qTrip.clear();
}

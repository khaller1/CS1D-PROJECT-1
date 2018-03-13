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
                temp.parentID = j->parentID;
                temp.baseid = j->baseid;
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
void DataManager::addRestStruct(QString id, const QString &namein, QString dist, QString size, QVector<AllDist> dlist, QVector<Menu> menu)
{
    Restaurant temp;
    temp.idNum=id.toInt();
    temp.SBdist=dist.toDouble();
    temp.name=namein;
    temp.menuSize=size.toInt();
    temp.RMenu=menu;
    temp.DList=dlist;
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
bool DataManager::editMenu(QString parent, const QString &namein, QString cost)
{
    return DB->editMenu(parent, namein, cost);
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
void DataManager::editMenuStruct(QString parent, const QString &namein, QString cost)
{
    int parentid = parent.toInt();
    QString name = namein;
    double price = cost.toDouble();

    for(int i=0;i<inRest.length();i++)
    {
        if(inRest[i].idNum==parentid)
        {
            for(int x=0;x<inRest[i].RMenu.length();x++)
            {
                if(inRest[i].RMenu[x].name==name)
                {
                    inRest[i].RMenu[x].cost=price;
                }
            }
        }
    }
}
void DataManager::deleteMenuStruct(QString name, QString parent)
{
    int parentid = parent.toInt();

    for(int i=0; i<inRest.length();i++)
    {
        if(inRest[i].idNum==parentid)
        {
            for(int x=0;x<inRest[i].RMenu.length();x++)
            {
                if(inRest[i].RMenu[x].name==name)
                    inRest[i].RMenu.remove(x);
            }
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
bool DataManager::import()
{
    bool success=true;
    QFile file("CS1D Spring 2018 New Fast Food Project.txt");
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
        success=false;
    else
    {
        QTextStream in(&file);
        QString name;
        QString num;
        QString dist;
        QString sbDist;
        QString menucount;
        QString menuitem;
        QString menucost;
        int distcount;
        int id;

        while(!in.atEnd())
        {
            name = in.readLine();
            name=name.remove(0,30);
            qDebug() << name;
            num = in.readLine();
            num = num.remove(0, 28);
            qDebug() << num;
            QString temp = in.readLine();
            temp = temp.remove(0, 50);
            distcount = temp.toInt();
            qDebug() << temp;
            QVector<AllDist> dlist;
            QVector<Menu> rmenu;
            for(int i=0;i<distcount;i++)
            {
                QString dst;
                QString miles;
                AllDist temp;
                in >> dst;
                in >> miles;
                temp.destID=dst.toInt();
                temp.sourceID=num.toInt();
                temp.dist=dist.toDouble();
                dlist.push_back(temp);
                qDebug() << dst;
                qDebug() << miles;
                addDist(num, miles, dst);
                in.readLine();
            }
            sbDist=in.readLine();
            sbDist = sbDist.remove(4,sbDist.length()-1);
            qDebug() << sbDist;
            menucount = in.readLine();
            menucount=menucount.remove(1,menucount.length()-1);
            qDebug() << menucount;
            for(int i=0; i<menucount.toInt(); i++)
            {
                Menu temp;
                menuitem=in.readLine();
                qDebug() << menuitem;
                menucost=in.readLine();
                qDebug() << menucost;
                temp.parentID=num.toInt();
                temp.name=menuitem;
                temp.cost=menucost.toDouble();
                rmenu.push_back(temp);
                addMenu(num, menuitem, menucost);
                addMenuStruct(num, menuitem, menucost);
            }
            addRestaurant(num, name, sbDist, menucount);
            addRestStruct(num, name, sbDist, menucount, dlist, rmenu);
            in.readLine();
            in.readLine();
        }
    }
    return success;
}

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

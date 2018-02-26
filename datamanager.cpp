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
void DataManager::getAdminData(QVector<AdminData> &oAdmin){
    oAdmin = inAdmin;
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

    for(int i=0;i<9;++i){
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
                qTrip.push_back(temp);
                used.push_back(temp.idNum);
            }
        }



    }
}

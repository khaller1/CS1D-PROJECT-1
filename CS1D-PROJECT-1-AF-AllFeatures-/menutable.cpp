#include "menutable.h"

menuTable::menuTable(QVector<Menu> &inData)
    : QAbstractTableModel()
{
    R_Data = inData;
}

QVariant menuTable::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (role == Qt::DisplayRole){
            if (orientation == Qt::Horizontal){
                switch (section){
                   case 0: return QString("Menu Item");
                   case 1: return QString("Cost");
                   case 2: return QString("Restaurant ID");
                }
            }
    }
    return QVariant();
}


int menuTable::rowCount(const QModelIndex &parent) const
{
    return R_Data.size();
}

int menuTable::columnCount(const QModelIndex &parent) const
{
    return 3;
}

QVariant menuTable::data(const QModelIndex &index, int role) const
{
    int r = index.row();
    int c = index.column();
    QString iName;
    double iCost;
    int iId;
    if (R_Data.size() >0){
        iName = R_Data[r].name;
        iCost = R_Data[r].cost;
        iId = R_Data[r].parentID;
    }
    if (role == Qt::DisplayRole) {
        switch(c){
            case 0: return iName;
            case 1: return iCost;
            case 2: return iId;
        }
    }
    return QVariant();
}

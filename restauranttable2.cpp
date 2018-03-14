#include "restauranttable2.h"

RestaurantTable2::RestaurantTable(QVector<Restaurant> &inRestaurant)
    : QAbstractTableModel()
{
    r_data = inRestaurant;
}

QVariant RestaurantTable2::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (role == Qt::DisplayRole){
            if (orientation == Qt::Horizontal){
                switch (section){
                   case 0: return QString("Restaurant");
                   case 1: return QString("Distance From Saddleback");
                   case 2: return QString("Menu Size");
                   case 3: return QString("Restaurant ID");
                }
            }
    }
    return QVariant();
}

int RestaurantTable2::rowCount(const QModelIndex &parent) const
{
    return r_data.size();
}

int RestaurantTable2::columnCount(const QModelIndex &parent) const
{
    return 4;
}

QVariant RestaurantTable2::data(const QModelIndex &index, int role) const
{
    int r = index.row();
    int c = index.column();
    QString rName;
    double rDist;
    int mSize;
    int rId;
    if (r_data.size()>0){
        rName = r_data[r].name;
        rDist = r_data[r].SBdist;
        mSize = r_data[r].menuSize;
        rId   = r_data[r].idNum;
    }
    if (role == Qt::DisplayRole) {
        switch(c){
            case 0: return rName;
            case 1: return rDist;
            case 2: return mSize;
        }
    }
    return QVariant();
}

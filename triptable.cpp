#include "triptable.h"

TripTable::TripTable(QVector<Restaurant> &inRestaurant)
    : QAbstractTableModel()
{
    r_data = inRestaurant;
}

QVariant TripTable::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (role == Qt::DisplayRole){
            if (orientation == Qt::Horizontal){
                switch (section){
                   case 0: return QString("Restaurant");
                   case 1: return QString("Travel Distance");
                   case 2: return QString("Menu Size");
                }
            }
    }
    return QVariant();
}

int TripTable::rowCount(const QModelIndex &parent) const
{
    return r_data.size();
}

int TripTable::columnCount(const QModelIndex &parent) const
{
    return 3;
}

QVariant TripTable::data(const QModelIndex &index, int role) const
{
    int r = index.row();
    int c = index.column();
    QString rName;
    double rDist;
    int mSize;
    if (r_data.size()>0){
        rName = r_data[r].name;
        rDist = r_data[r].SBdist;
        mSize = r_data[r].menuSize;
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

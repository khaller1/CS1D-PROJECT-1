#include "customtrip_table.h"

CustomTrip_Table::CustomTrip_Table(QVector<Restaurant> &inRestaurant)
    : QAbstractTableModel()
{
    trip_data = inRestaurant;
}

QVariant CustomTrip_Table::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (role == Qt::DisplayRole){
            if (orientation == Qt::Horizontal){
                switch (section){
                   case 0: return QString("Restaurant");
                   case 1: return QString("Menu Size");
                }
            }
    }
}

int CustomTrip_Table::rowCount(const QModelIndex &parent) const
{
    return trip_data.size();
}

int CustomTrip_Table::columnCount(const QModelIndex &parent) const
{
   return 3;
}

QVariant CustomTrip_Table::data(const QModelIndex &index, int role) const
{
    int r = index.row();
    int c = index.column();
    QString rName;
    double mSize;
    if (trip_data.size() >0){
        rName = trip_data[r].name;
        mSize = trip_data[r].menuSize;
    }
    if(role == Qt::DisplayRole){
        switch(c){
        case 0: return rName;
        case 1: return mSize;
        }
    }
    return QVariant();
}

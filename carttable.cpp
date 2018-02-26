#include "carttable.h"

cartTable::cartTable(QVector<Purchase> &inPurchase)
    : QAbstractTableModel()
{
    tCart = inPurchase;
}

QVariant cartTable::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (role == Qt::DisplayRole){
            if (orientation == Qt::Horizontal){
                switch (section){
                   case 0: return QString("Restaurant Name");
                   case 1: return QString("Product Name");
                   case 2: return QString("Individual Cost");
                   case 3: return QString("Quantity Purchased");
                   case 4: return QString("Total Cost");

                }
            }
    }
    return QVariant();
}

int cartTable::rowCount(const QModelIndex &parent) const
{
    return tCart.size();
}

int cartTable::columnCount(const QModelIndex &parent) const
{
        return 5;
}

QVariant cartTable::data(const QModelIndex &index, int role) const
{
    int r = index.row();
    int c = index.column();
    QString iRName;
    QString iPName;
    double iCost;
    int iQty;
    double iTCost;
    if (tCart.size() >0){
        iRName = tCart[r].rName;
        iPName = tCart[r].pName;
        iCost = tCart[r].pCost;
        iQty = tCart[r].qty;
        iTCost = tCart[r].tCost;
    }
    if (role == Qt::DisplayRole) {
        switch(c){
            case 0: return iRName;
            case 1: return iPName;
            case 2: return iCost;
            case 3: return iQty;
            case 4: return iTCost;
        }
    }
    return QVariant();
}

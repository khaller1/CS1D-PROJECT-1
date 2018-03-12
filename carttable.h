#ifndef CARTTABLE_H
#define CARTTABLE_H

#include <QAbstractTableModel>
#include <structs.h>
class cartTable : public QAbstractTableModel
{
    Q_OBJECT

public:
    explicit cartTable(QVector<Purchase> &inPurchase);

    // Header:
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override;

    // Basic functionality:
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    int columnCount(const QModelIndex &parent = QModelIndex()) const override;

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

private:
    QVector<Purchase> tCart;
};

#endif // CARTTABLE_H

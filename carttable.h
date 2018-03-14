#ifndef CARTTABLE_H
#define CARTTABLE_H

#include <QAbstractTableModel>
#include <structs.h>
/** \class cartTable
 * Class for table displaying the cart during a trip
 */

class cartTable : public QAbstractTableModel
{
    Q_OBJECT

public:
    explicit cartTable(QVector<Purchase> &inPurchase);  /// Constructor

    // Header:
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override; /// Table Header Data

    // Basic functionality:
    int rowCount(const QModelIndex &parent = QModelIndex()) const override; /// Set table row count
    int columnCount(const QModelIndex &parent = QModelIndex()) const override; /// Set table column count

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override; /// Set table data set

private:
    QVector<Purchase> tCart; /// Tables data set
};

#endif // CARTTABLE_H

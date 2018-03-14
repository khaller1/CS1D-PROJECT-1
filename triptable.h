#ifndef TRIPTABLE_H
#define TRIPTABLE_H

#include <QAbstractTableModel>
#include <structs.h>
/** \class TripTable
 * Class for table displaying a current trip
 */
class TripTable : public QAbstractTableModel
{
    Q_OBJECT

public:
    explicit TripTable(QVector<Restaurant>& inRestaurant); /// Constructor

    // Header:
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override; /// Sets header Data

    // Basic functionality:
    int rowCount(const QModelIndex &parent = QModelIndex()) const override; /// Sets row count
    int columnCount(const QModelIndex &parent = QModelIndex()) const override; /// Sets column count

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override; /// Sets table data

private:
    QVector<Restaurant> r_data; /// Restaurant Data
};

#endif // TRIPTABLE_H

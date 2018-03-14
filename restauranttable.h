#ifndef RESTAURANTTABLE_H
#define RESTAURANTTABLE_H

#include <QAbstractTableModel>
#include <structs.h>
/** \class RestaurantTable
 * Class for table displaying restaurant values
 */
class RestaurantTable : public QAbstractTableModel
{
    Q_OBJECT

public:
    explicit RestaurantTable(QVector<Restaurant>& inRestaurant); /// Constructor

    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override; /// Sets header data

    int rowCount(const QModelIndex &parent = QModelIndex()) const override; /// Sets row count
    int columnCount(const QModelIndex &parent = QModelIndex()) const override; /// Sets column count

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override; /// Sets data in table

private:
    QVector<Restaurant> r_data; /// Restaurant Data
};

#endif // RESTAURANTTABLE_H

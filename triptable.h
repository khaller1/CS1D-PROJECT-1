#ifndef TRIPTABLE_H
#define TRIPTABLE_H

#include <QAbstractTableModel>
#include <structs.h>

class TripTable : public QAbstractTableModel
{
    Q_OBJECT

public:
    explicit TripTable(QVector<Restaurant>& inRestaurant);

    // Header:
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override;

    // Basic functionality:
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    int columnCount(const QModelIndex &parent = QModelIndex()) const override;

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

private:
    QVector<Restaurant> r_data;
};

#endif // TRIPTABLE_H

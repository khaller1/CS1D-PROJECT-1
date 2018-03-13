#ifndef CUSTOMTRIP_TABLE_H
#define CUSTOMTRIP_TABLE_H

#include <QAbstractTableModel>
#include <structs.h>

class CustomTrip_Table : public QAbstractTableModel
{
    Q_OBJECT

public:
    explicit CustomTrip_Table(QVector<Restaurant>& inRestaurant);

    // Header:
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override;

    // Basic functionality:
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    int columnCount(const QModelIndex &parent = QModelIndex()) const override;

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

private:
     QVector<Restaurant> trip_data;
};

#endif // CUSTOMTRIP_TABLE_H

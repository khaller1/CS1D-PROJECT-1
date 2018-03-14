#ifndef RESAURANTTABLE2_H
#define RESAURANTTABLE2_H
#include <QAbstractTableModel>
#include <structs.h>

class RestaurantTable2 : public QAbstractTableModel
{
    Q_OBJECT

public:
    explicit RestaurantTable2(QVector<Restaurant>& inRestaurant);

    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override;

    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    int columnCount(const QModelIndex &parent = QModelIndex()) const override;

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

private:
    QVector<Restaurant> r_data;
};
#endif // RESAURANTTABLE2_H

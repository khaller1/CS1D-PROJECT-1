#ifndef MENUTABLE_H
#define MENUTABLE_H

#include <QAbstractTableModel>
#include <structs.h>
/** \class menuTable
 * Class for table displaying the menu items of a restaurant
 */
class menuTable : public QAbstractTableModel
{
    Q_OBJECT

public:
    explicit menuTable(QVector<Menu> &inData); /// Constructor

    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override; /// sets Header Data


    int rowCount(const QModelIndex &parent = QModelIndex()) const override; /// sets row count
    int columnCount(const QModelIndex &parent = QModelIndex()) const override; /// sets column count

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override; /// places data into table

private:
    QVector<Menu> R_Data; /// Menu Data
};

#endif // MENUTABLE_H

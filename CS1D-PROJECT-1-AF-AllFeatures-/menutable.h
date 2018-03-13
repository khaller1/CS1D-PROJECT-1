#ifndef MENUTABLE_H
#define MENUTABLE_H

#include <QAbstractTableModel>
#include <structs.h>
class menuTable : public QAbstractTableModel
{
    Q_OBJECT

public:
    explicit menuTable(QVector<Menu> &inData);

    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override;


    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    int columnCount(const QModelIndex &parent = QModelIndex()) const override;

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

private:
    QVector<Menu> R_Data;
};

#endif // MENUTABLE_H

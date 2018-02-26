#ifndef MENUVIEW_H
#define MENUVIEW_H

#include <QDialog>
#include <datamanager.h>
#include <menutable.h>
namespace Ui {
class MenuView;
}

class MenuView : public QDialog
{
    Q_OBJECT

public:
    explicit MenuView(DataManager* inDM, QWidget *parent = 0);
    ~MenuView();

    void genComboList();

private slots:
    void on_ViewMenu_clicked();

    void on_pushButton_clicked();

private:
    Ui::MenuView *ui;
    DataManager* DM;
    QStringList combo;
    QVector<Restaurant> R_Data;
    menuTable* M_Table;
    QSortFilterProxyModel *Proxy;
    QWidget* prev;
};

#endif // MENUVIEW_H

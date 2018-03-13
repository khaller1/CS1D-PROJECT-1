#ifndef ADDMENU_H
#define ADDMENU_H

#include <QDialog>
#include <main.h>
namespace Ui {
class addMenu;
}

class addMenu : public QDialog
{
    Q_OBJECT

public:
    explicit addMenu(DataManager* inDM, QWidget *parent = 0);
    ~addMenu();
    void genComboList();

private slots:
    void on_pushButton_add_clicked();

    void on_pushButton_edit_clicked();

    void on_pushButton_delete_clicked();

    void on_pushButton_exit_clicked();

    void on_ViewMenu_clicked();

private:
    Ui::addMenu *ui;
    QWidget *prev;
    DataManager* DM;
    QStringList combo;
    QVector<Menu> m_data;
    QVector<Restaurant> R_Data;
    menuTable* M_Table;
    QSortFilterProxyModel *Proxy;
};

#endif // ADDMENU_H

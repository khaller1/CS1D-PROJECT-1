#ifndef MENUVIEW_H
#define MENUVIEW_H

#include <QDialog>
#include <datamanager.h>
#include <menutable.h>
/** \class MenuView
 * Class for ui element displaying a menu table and a combo box containing all restaurants
 */
namespace Ui {
class MenuView;
}

class MenuView : public QDialog
{
    Q_OBJECT

public:
    explicit MenuView(DataManager* inDM, QWidget *parent = 0); /// Constructor
    ~MenuView(); /// Destructor

    void genComboList(); /// Generates restaurant combo box values

private slots:
    void on_ViewMenu_clicked(); /// Changes table view to currently selected restaurant

    void on_pushButton_clicked(); /// Returns to previous menu

private:
    Ui::MenuView *ui; /// UI element
    DataManager* DM; /// Data Access
    QStringList combo; /// List of restaurants for combo box
    QVector<Restaurant> R_Data; /// Restaurant data
    menuTable* M_Table; /// Menu Table
    QSortFilterProxyModel *Proxy; /// Sorter
    QWidget* prev; /// Previous menu
};

#endif // MENUVIEW_H

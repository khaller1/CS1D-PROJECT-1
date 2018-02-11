#include "menuview.h"
#include "ui_menuview.h"

MenuView::MenuView(DataManager* inDM, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MenuView)
{
    DM = inDM;
    prev = parent;
    DM->getRestaurants(R_Data);
    this->genComboList();
    Proxy = new QSortFilterProxyModel(this);

    ui->setupUi(this);
    ui->RestaurantCombo->addItems(combo);

}

MenuView::~MenuView()
{
    delete ui;
}

void MenuView::genComboList(){
    DM->getRestaurants(R_Data);
    for(auto it=R_Data.begin();it!=R_Data.end();++it){
        combo.push_back(it->name);
    }
}

void MenuView::on_ViewMenu_clicked()
{
    int i;
    i = ui->RestaurantCombo->currentIndex();
    M_Table = new menuTable(R_Data[i].RMenu);
    Proxy->setSourceModel(M_Table);
    ui->MenuTable->reset();
    ui->MenuTable->setModel(Proxy);
}

void MenuView::on_pushButton_clicked()
{
    this->accept();
    prev->show();
}

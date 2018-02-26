#include "tripview.h"
#include "ui_tripview.h"

TripView::TripView(DataManager* inDM, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TripView)
{
    prev = parent;
    DM = inDM;
    DM->getTrip(cTrip);

    M_Table = new menuTable(cTrip[0].RMenu);
    C_Table = new cartTable(trip_Cart);
    rTable = new RestaurantTable(cTrip);
    Proxy = new QSortFilterProxyModel(this);
    Proxy->setSourceModel(rTable);
    genComboMenu();
    ui->setupUi(this);
    ui->Trip_List->setModel(Proxy);
    ui->Menu_List->setModel(M_Table);
    ui->Cart_Table->setModel(C_Table);
    ui->selector_box->addItems(combo);
}

TripView::~TripView()
{
    delete ui;
}

void TripView::genComboMenu(){
    combo.clear();

    for(auto it=cTrip[0].RMenu.begin();it!=cTrip[0].RMenu.end();++it){
        combo.push_back(it->name);
    }
}
void TripView::on_pushButton_clicked()
{
    if(cTrip.size() > 1){
        ui->Total_Label->clear();
        ui->qty_box->setValue(0);
        ui->selector_box->setCurrentIndex(0);
        cTrip.pop_front();
        ui->Trip_List->reset();
        rTable = new RestaurantTable(cTrip);
        Proxy = new QSortFilterProxyModel(this);
        Proxy->setSourceModel(rTable);
        ui->Trip_List->setModel(Proxy);
        ui->Menu_List->reset();
        M_Table = new menuTable(cTrip[0].RMenu);
        ui->Menu_List->setModel(M_Table);
        genComboMenu();
        ui->selector_box->clear();
        ui->selector_box->addItems(combo);
    } else {
        this->close();
    }

}

void TripView::on_qty_box_valueChanged(int arg1)
{

    int i;
    double qty;
    if(ui->selector_box->currentIndex()>=0){
        i = ui->selector_box->currentIndex();
        qty = cTrip[0].RMenu[i].cost * ui->qty_box->value();
        QString total;
        total.setNum(qty);
        ui->Total_Label->setText(total);
    } else {
        ui->Total_Label->clear();
    }
}

void TripView::on_selector_box_currentIndexChanged(int index)
{
    int i;
    double qty;
    if(ui->selector_box->currentIndex() >= 0){
        i = ui->selector_box->currentIndex();
        qty = cTrip[0].RMenu[i].cost * ui->qty_box->value();
        QString total;
        total.setNum(qty);
        ui->Total_Label->setText(total);
    } else {
        ui->Total_Label->clear();
    }

}

void TripView::on_Cart_Button_clicked()
{
    Purchase temp;
    if(ui->qty_box->value() > 0){
        temp.rName = cTrip[0].name;
        temp.pName = ui->selector_box->currentText();
        temp.pCost = cTrip[0].RMenu[ui->selector_box->currentIndex()].cost;
        temp.qty = ui->qty_box->value();
        temp.tCost = temp.pCost * temp.qty;
        trip_Cart.push_back(temp);

        ui->Cart_Table->reset();
        C_Table = new cartTable(trip_Cart);
        ui->Cart_Table->setModel(C_Table);
    }
}

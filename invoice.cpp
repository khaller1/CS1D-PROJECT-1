#include "invoice.h"
#include "ui_invoice.h"

Invoice::Invoice(DataManager *inDM, QVector<Purchase> &inCart, double TravelDist, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Invoice)
{
    prev = parent;
    QString tDist;
    QString Total;
    tSpent = 0;
    tDist.setNum(TravelDist);
    DM = inDM;
    trip_Cart = inCart;
    genInvoice();
    C_Table = new cartTable(trip_Cart);
    Total.setNum(tSpent);
    ui->setupUi(this);
    ui->Invoice_Table->setModel(C_Table);
    ui->Dist_Label->setText(tDist);
    ui->Total_Label->setText(Total);
}

Invoice::~Invoice()
{
    delete ui;
}

void Invoice::genInvoice(){
    Purchase temp;
    if(!trip_Cart.empty()){
        temp = trip_Cart[0];
        Purchase tempins;
        tempins.rName = temp.rName;
        tempins.pName = "Restaurant Total";
        tempins.tCost = 0;
        tempins.pCost = 0;
        tempins.qty = 0;
        for(auto it=trip_Cart.begin();it!=trip_Cart.end();++it){
            tSpent += it->tCost;
        }
        for(auto it=0;it<trip_Cart.size();++it){
            if(trip_Cart[it].rName == temp.rName){
                tempins.tCost += trip_Cart[it].tCost;
                tempins.qty += trip_Cart[it].qty;
            } else {
                temp = trip_Cart[it];
                trip_Cart.insert(it, tempins);
                tempins.rName = temp.rName;
                tempins.pName = "Restaurant Total";
                tempins.tCost = 0;
                tempins.pCost = 0;
                tempins.qty = 0;
            }
        }
        temp = trip_Cart.back();
        if(temp.pCost != 0){
            trip_Cart.push_back(tempins);
        }
    }

}

void Invoice::on_pushButton_clicked()
{
    DM->EndTrip();
    this->close();
    prev->show();
}

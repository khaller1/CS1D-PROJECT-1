#include "custom_trip.h"
#include "ui_custom_trip.h"
#include <tripview.h>
Custom_Trip::Custom_Trip(DataManager *inDM, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Custom_Trip)
{
    prev = parent;
    DM = inDM;
    DM->getRestaurants(r_data);
    r_table = new RestaurantTable(cust_trip);
    genStartCombo();
    genCustomCombo();

    ui->setupUi(this);
    ui->cTrip_Table->setModel(r_table);
    ui->cStart_Combo->addItems(start_combo);
    ui->cTrip_Box->addItems(trip_combo);
}

Custom_Trip::~Custom_Trip()
{
    delete ui;
}

void Custom_Trip::genStartCombo(){
    start_combo.clear();

    for(auto it =r_data.begin();it!=r_data.end();++it){
        start_combo.push_back(it->name);
    }
}

void Custom_Trip::genCustomCombo(){
    trip_combo.clear();

    for(auto it =r_data.begin();it!=r_data.end();++it){
        trip_combo.push_back(it->name);
    }
}

void Custom_Trip::on_Back_Button_clicked()
{
    this->close();
}

void Custom_Trip::on_Add_cTrip_Button_clicked()
{
    Restaurant temp;
    QString Name;
    int i = ui->cTrip_Box->currentIndex();
    Name = ui->cTrip_Box->currentText();
    for(auto it=r_data.begin();it!=r_data.end();++it){
        if(it->name == Name){
            cust_trip.push_back(*it);
        }
    }
    ui->cTrip_Box->removeItem(i);
    ui->cTrip_Table->reset();
    r_table = new RestaurantTable(cust_trip);
    ui->cTrip_Table->setModel(r_table);
}

void Custom_Trip::on_cStart_Button_clicked()
{
    TripView *Custom;
    QString Name;
    Restaurant temp;
    Name = ui->cStart_Combo->currentText();
    for(auto it=r_data.begin();it!=r_data.end();++it){
        if(it->name == Name){
            temp = *it;
        }
    }
    DM->makeCustomStartTrip(temp);
    Custom = new TripView(DM, prev);
    this->close();
    Custom->show();
}

void Custom_Trip::on_cTrip_Start_Button_clicked()
{
    if(cust_trip.size() > 0){
        TripView *Custom;
        DM->makeCustomTrip(cust_trip);
        Custom = new TripView(DM, prev);
        this->close();
        Custom->show();
    }
}

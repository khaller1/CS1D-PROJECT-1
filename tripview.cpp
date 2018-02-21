#include "tripview.h"
#include "ui_tripview.h"

TripView::TripView(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TripView)
{
    ui->setupUi(this);
}

TripView::~TripView()
{
    delete ui;
}

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(DataManager *inDM)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

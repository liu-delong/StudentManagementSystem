#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "checkinmodel.h"
#include <QItemDelegate>
#include <QPushButton>
#include <checkinbuttondelegate.h>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    CheckInModel* model=new CheckInModel(this);
    ui->checkInView->setModel(model);
    ui->checkInView->setItemDelegateForColumn(3, new CheckInButtonDelegate(model,this));
    ui->checkInView->setEditTriggers(QAbstractItemView::DoubleClicked | QAbstractItemView::SelectedClicked);
    ui->checkInView->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}


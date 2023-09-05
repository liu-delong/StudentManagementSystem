#include "checkinbutton.h"
#include <QDebug>
CheckInButton::CheckInButton(QModelIndex _index,CheckInModel* _model, QWidget *parent):QPushButton(parent),index(_index),model(_model)
{
    connect(this,&QPushButton::clicked,this,&CheckInButton::checkIn);
}

void CheckInButton::checkIn()
{
    auto data=model->data(index,Qt::DisplayRole);
    qDebug("%d",data.toInt());
}

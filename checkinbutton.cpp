#include "checkinbutton.h"
#include <QDebug>
CheckInButton::CheckInButton(const QModelIndex &_index,CheckInModel* _model, QWidget *parent):QPushButton(parent),index(_index),model(_model)
{
    connect(this,&QPushButton::click,this,&CheckInButton::checkIn);
}

void CheckInButton::checkIn()
{
    auto data=model->data(index);
    qDebug("%d",data.toInt());
}

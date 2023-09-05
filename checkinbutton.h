#ifndef CHECKINBUTTON_H
#define CHECKINBUTTON_H

#include <QWidget>
#include <QPushButton>
#include "checkinmodel.h"
class CheckInButton : public QPushButton
{
    Q_OBJECT
public:
    QModelIndex index;
    CheckInModel* model;
    explicit CheckInButton(QModelIndex _index,CheckInModel* _model,QWidget *parent = nullptr);

signals:

public slots:
    void checkIn();
};

#endif // CHECKINBUTTON_H

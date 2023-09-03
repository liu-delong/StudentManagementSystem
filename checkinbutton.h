#ifndef CHECKINBUTTON_H
#define CHECKINBUTTON_H

#include <QWidget>
#include <QPushButton>
#include "checkinmodel.h"
class CheckInButton : public QPushButton
{
    Q_OBJECT
public:
    const QModelIndex& index;
    CheckInModel* model;
    explicit CheckInButton(const QModelIndex& index,CheckInModel* model,QWidget *parent = nullptr);

signals:

public slots:
    void checkIn();
};

#endif // CHECKINBUTTON_H

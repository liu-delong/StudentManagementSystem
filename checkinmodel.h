#ifndef CHECKINMODEL_H
#define CHECKINMODEL_H

#include <QObject>

class CheckInModel : public QObject
{
    Q_OBJECT
public:
    explicit CheckInModel(QObject *parent = nullptr);

signals:

public slots:
};

#endif // CHECKINMODEL_H

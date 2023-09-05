#ifndef CHECKINMODEL_H
#define CHECKINMODEL_H

#include <QObject>
#include <QAbstractTableModel>
class CheckInModel : public QAbstractTableModel
{
    Q_OBJECT
public:
    explicit CheckInModel(QObject *parent = nullptr);
    virtual int rowCount(const QModelIndex &index/*parent*/ = QModelIndex()) const override;
    virtual int columnCount(const QModelIndex &index = QModelIndex()) const override;
    virtual QVariant data(const QModelIndex& index,int role=Qt::DisplayRole) const override;
    Qt::ItemFlags flags(const QModelIndex& index) const override;


signals:

public slots:
};

#endif // CHECKINMODEL_H

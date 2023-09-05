#include "checkinmodel.h"

CheckInModel::CheckInModel(QObject *parent) : QAbstractTableModel(parent)
{

}

int CheckInModel::rowCount(const QModelIndex &index) const
{
    return 4;
}

int CheckInModel::columnCount(const QModelIndex &index) const
{
    return 5;
}

QVariant CheckInModel::data(const QModelIndex &index, int role) const
{
    if(role==Qt::DisplayRole)
    {
        return index.row()*1000+index.column();
    }
    else
    {
        return QVariant();
    }
}

Qt::ItemFlags CheckInModel::flags(const QModelIndex &index) const
{
    if(!index.isValid())
    {
        return 0;
    }
    return Qt::ItemIsEditable|QAbstractItemModel::flags(index);
}


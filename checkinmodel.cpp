#include "checkinmodel.h"

CheckInModel::CheckInModel(QObject *parent) : QAbstractTableModel(parent)
{
    for (int row = 0; row < rowCount(); ++row) {
        for (int column = 0; column < columnCount(); ++column) {
            QModelIndex index = this->index(row, column);
            Qt::ItemFlags flags = this->flags(index);
            flags |= Qt::ItemIsEditable;
            this->setFlags(index, flags);
        }
    }
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


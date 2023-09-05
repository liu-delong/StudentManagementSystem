#include "checkinbuttondelegate.h"
#include "checkinbutton.h"
CheckInButtonDelegate::CheckInButtonDelegate(CheckInModel* _model,QObject *parent) : QItemDelegate(parent),model(_model)
{

}

QWidget *CheckInButtonDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    auto button=new CheckInButton(index,model,parent);
    qDebug("%d %d",index.row(),index.column());
    return button;
}

void CheckInButtonDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{
    QPushButton* button = static_cast<QPushButton*>(editor);
    button->setText("处理");
}

void CheckInButtonDelegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const
{

}

#ifndef CHECKINBUTTONDELEGATE_H
#define CHECKINBUTTONDELEGATE_H

#include <QObject>
#include <QItemDelegate>
#include <checkinmodel.h>
class CheckInButtonDelegate : public QItemDelegate
{
    Q_OBJECT
    CheckInModel* model;
public:
    explicit CheckInButtonDelegate(CheckInModel* model,QObject *parent = nullptr);
    QWidget* createEditor(QWidget* parent, const QStyleOptionViewItem& option, const QModelIndex& index) const override;
    void setEditorData(QWidget* editor, const QModelIndex& index) const override;
    void setModelData(QWidget* editor, QAbstractItemModel* model, const QModelIndex& index) const override;

signals:
     void buttonClicked(const QModelIndex& index);

public slots:
};

#endif // CHECKINBUTTONDELEGATE_H

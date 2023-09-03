#ifndef COUSRESIGNIN_H
#define COUSRESIGNIN_H

#include <QWidget>

namespace Ui {
class CousreSignIn;
}

class CousreSignIn : public QWidget
{
    Q_OBJECT

public:
    explicit CousreSignIn(QWidget *parent = nullptr);
    ~CousreSignIn();

private:
    Ui::CousreSignIn *ui;
};

#endif // COUSRESIGNIN_H

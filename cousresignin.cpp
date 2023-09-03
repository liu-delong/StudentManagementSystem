#include "cousresignin.h"
#include "ui_cousresignin.h"

CousreSignIn::CousreSignIn(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CousreSignIn)
{
    ui->setupUi(this);
}

CousreSignIn::~CousreSignIn()
{
    delete ui;
}

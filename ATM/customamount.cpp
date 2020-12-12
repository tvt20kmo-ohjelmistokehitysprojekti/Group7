#include "customamount.h"
#include "ui_customamount.h"
#include "withdrawAmount.h"
#include "confirmwithdraw.h"
#include "mainwindow.h"

bool change = false;

CustomAmount::CustomAmount(QWidget *parent) :QWidget(parent),ui(new Ui::CustomAmount)
{
    ui->setupUi(this);
    ui->errorLbl->setVisible(false);
}

CustomAmount::~CustomAmount()
{
    delete ui;
}

void CustomAmount::on_cancelBtn_clicked()
{
    Withdraw *w = new Withdraw;
    ChangeWindow(this, w);
}

void CustomAmount::on_okBtn_clicked()
{
    QString val = QString::number(ui->customVal->value());

    if(change)
    {
        int maxL = val.length();
        val.remove(maxL - 1, maxL);
        val += "0";
        ui->customVal->setValue(val.toInt());
    }

    double amount = ui->customVal->value();
    dSelectedAmount = amount;
    ConfirmWithdraw *w = new ConfirmWithdraw;
    ChangeWindow(this, w);
}

void CustomAmount::on_customVal_valueChanged(int arg1)
{
    QString val = QString::number(arg1);
    if(val.endsWith("5") || val.endsWith("0"))
        change = false;
    else
        change = true;
}

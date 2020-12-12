#include "confirmwithdraw.h"
#include "ui_confirmwithdraw.h"
#include "withdrawAmount.h"
#include "creditdebit.h"
#include "mainwindow.h"
#include "balance.h"

ConfirmWithdraw::ConfirmWithdraw(QWidget *parent) :QWidget(parent),ui(new Ui::ConfirmWithdraw)
{
    ui->setupUi(this);
    ui->cancelBtn->setText("Cancel");
    ui->statusLbl->setVisible(false);
    ui->chooseLbl->setText("Selected amount: " + QString::number(dSelectedAmount, 'f', 2) + "€");
}

ConfirmWithdraw::~ConfirmWithdraw()
{
    delete ui;
}

void ConfirmWithdraw::WithdrawMoney()
{
    ui->confirmBtn->setEnabled(false);
    ui->cancelBtn->setEnabled(false);

    double balance = GetBalance().toDouble();
    if((dSelectedAmount > balance) && iCardType != CARD_CREDIT)
    {
        ui->statusLbl->setText("Unable to withdraw: Not enough balance.");
        ui->statusLbl->setVisible(true);
        ui->cancelBtn->setEnabled(true);
        return;
    }

    QString Data = ReadURL("http://www.students.oamk.fi/~t9jaja02/atm_project/Withdraw.php?user="
    + QString::number(userID) + "&card=" + QString::number(iCardType) + "&amount="+ QString::number((dSelectedAmount), 'f', 2));
    if(Data.contains("Done"))
    {
        ui->statusLbl->setVisible(true);
        ui->statusLbl->setText("Withdraw complete.");
        ui->cancelBtn->setText("Ok");
        ui->cancelBtn->setEnabled(true);
    }else
    {
        ui->statusLbl->setText("Withdraw failed.");
        ui->cancelBtn->setEnabled(true);
    }
}

void ConfirmWithdraw::on_confirmBtn_clicked()
{
    WithdrawMoney();
}

void ConfirmWithdraw::on_cancelBtn_clicked()
{
    Withdraw *w = new Withdraw;
    ChangeWindow(this, w);
}

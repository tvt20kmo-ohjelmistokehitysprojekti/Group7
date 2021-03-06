#include "withdrawAmount.h"
#include "ui_withdrawAmount.h"
#include "customamount.h"
#include "AccountMenu.h"
#include "confirmwithdraw.h"
#include "mainwindow.h"

double dSelectedAmount = 0;
Withdraw::Withdraw(QWidget *parent) : QWidget(parent), ui(new Ui::Withdraw)
{
    ui->setupUi(this);
}

Withdraw::~Withdraw()
{
    delete ui;
}

void Withdraw::on_otherBtn_clicked()
{
    CustomAmount *w = new CustomAmount;
    ChangeWindow(this, w);
}

void Withdraw::on_cancelBtn_clicked()
{
    AccountMenu *w = new AccountMenu;
    ChangeWindow(this, w);
}

void Withdraw::SelectAndConfirm(double amount)
{
    dSelectedAmount = amount;
    ConfirmWithdraw *w = new ConfirmWithdraw;
    ChangeWindow(this, w);
}

void Withdraw::on_twentyBtn_clicked()
{
    SelectAndConfirm(20.00);
}

void Withdraw::on_fourtyBtn_clicked()
{
    SelectAndConfirm(40.00);
}

void Withdraw::on_fiftyBtn_clicked()
{
    SelectAndConfirm(50.00);
}

void Withdraw::on_hundredBtn_clicked()
{
    SelectAndConfirm(100.00);
}

#include "AccountMenu.h"
#include "creditdebit.h"
#include "ui_AccountMenu.h"
#include "transactions.h"
#include "balance.h"
#include "withdrawAmount.h"
#include "mainwindow.h"

AccountMenu::AccountMenu(QWidget *parent) :QWidget(parent),ui(new Ui::AccountMenu)
{
    ui->setupUi(this);
    QString str;
    if(iCardType == CARD_DEBIT)
        str += "Debit Card";
    else
        str += "Credit Card";
    ui->nameLbl->setText(str + " | Welcome " +fullname);
}

AccountMenu::~AccountMenu()
{
    delete ui;
}

void AccountMenu::on_withdrawBtn_clicked()
{
    ui->withdrawBtn->setEnabled(false);
    ui->balanceBtn->setEnabled(false);
    ui->transactiondBtn->setEnabled(false);
    Withdraw *w = new Withdraw;
    w->setAttribute(Qt::WA_DeleteOnClose);
    w->show();
    this->close();
}

void AccountMenu::on_balanceBtn_clicked()
{
    ui->withdrawBtn->setEnabled(false);
    ui->balanceBtn->setEnabled(false);
    ui->transactiondBtn->setEnabled(false);
    Balance *w = new Balance;
    w->setAttribute(Qt::WA_DeleteOnClose);
    w->show();
    this->close();
}

void AccountMenu::on_transactiondBtn_clicked()
{
    ui->withdrawBtn->setEnabled(false);
    ui->balanceBtn->setEnabled(false);
    ui->transactiondBtn->setEnabled(false);
    transactions *w = new transactions;
    w->setAttribute(Qt::WA_DeleteOnClose);
    w->show();
    this->close();
}

void AccountMenu::on_pushButton_clicked()
{
    CreditDebit *w = new CreditDebit;
    w->setAttribute(Qt::WA_DeleteOnClose);
    w->show();
    this->close();
}

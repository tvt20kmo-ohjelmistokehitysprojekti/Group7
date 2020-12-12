#include "AccountMenu.h"
#include "creditdebit.h"
#include "ui_creditdebit.h"
#include "mainwindow.h"
int iCardType;

CreditDebit::CreditDebit(QWidget *parent) : QWidget(parent), ui(new Ui::CreditDebit)
{
    ui->setupUi(this);
}

CreditDebit::~CreditDebit()
{
    delete ui;
}

void CreditDebit::on_creditBtn_clicked()
{
    iCardType = CARD_CREDIT;
    AccountMenu *w = new AccountMenu;
    ChangeWindow(this, w);
}

void CreditDebit::on_debitBtn_clicked()
{
    iCardType = CARD_DEBIT;
    AccountMenu *w = new AccountMenu;
    ChangeWindow(this, w);
}

void CreditDebit::on_pushButton_clicked()
{
    MainWindow *w = new MainWindow;
    ChangeWindow(this, w);
}

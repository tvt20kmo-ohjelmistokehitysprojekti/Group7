#include "mainwindow.h"
#include "AccountMenu.h"
#include "creditdebit.h"
#include "ui_creditdebit.h"
int iCardType;

CreditDebit::CreditDebit(QWidget *parent) : QWidget(parent), ui(new Ui::CreditDebit)
{
    ui->setupUi(this);
    //this->showMaximized();
}

CreditDebit::~CreditDebit()
{
    delete ui;
}

void selectCard(int cardType)
{
    iCardType = cardType;
    AccountMenu *w = new AccountMenu;
    w->setAttribute(Qt::WA_DeleteOnClose);
    w->show();
}

void CreditDebit::on_creditBtn_clicked()
{
    selectCard(CARD_CREDIT);
    this->close();
}

void CreditDebit::on_debitBtn_clicked()
{
    selectCard(CARD_DEBIT);
    this->close();
}

void CreditDebit::on_pushButton_clicked()
{
    MainWindow *w = new MainWindow;
    w->setAttribute(Qt::WA_DeleteOnClose);
    w->show();
    this->close();
}

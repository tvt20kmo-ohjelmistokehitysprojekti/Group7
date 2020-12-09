#include "balance.h"
#include "ui_balance.h"
#include "creditdebit.h"
#include "mainwindow.h"
#include "AccountMenu.h"

QString GetBalance(bool includeEur)
{
    QString Data = ReadURL("http://www.students.oamk.fi/~t9jaja02/atm_project/GetBalance.php?user=" + QString::number(userID) + "&card=" + QString::number(iCardType));

    QStringList dataSplit = Data.split(":");
    QString money = QString::number(dataSplit.first().toDouble(), 'f', 2);
    if(includeEur)
        money += "€";
    return money;
}

Balance::Balance(QWidget *parent) : QWidget(parent), ui(new Ui::Balance)
{
    ui->setupUi(this);
    QString str;
    if(iCardType == CARD_DEBIT)
    {
        str += "Debit Card | ";
        ui->bLabel->setText("Balance:");
    }
    else
    {
        str += "Credit Card | ";
        ui->bLabel->setText("Credit available:");
    }
    ui->nameLbl->setText(str + fullname);
    ui->moneyLbl->setText(GetBalance(true));
}

Balance::~Balance()
{
    delete ui;
}

void Balance::on_pushButton_clicked()
{
    AccountMenu *w = new AccountMenu;
    w->setAttribute(Qt::WA_DeleteOnClose);
    w->show();
    this->close();
}

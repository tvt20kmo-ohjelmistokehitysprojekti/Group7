#include "transactions.h"
#include "ui_transactions.h"
#include "creditdebit.h"
#include "mainwindow.h"
#include "AccountMenu.h"

enum TransactionType_t
{
    TRANSACTION_DEPOSIT,
    TRANSACTION_WITHDRAW,
    TRANSACTION_PURCHASE,
    TRANSACTION_REFUND,
    TRANSACTION_PAYMENT_OUT,
    TRANSACTION_PAYMENT_RECEIVE
};

QString TransactionToString(int i)
{
    switch (i)
    {
        case TRANSACTION_DEPOSIT:
        return "Deposit: +";
        break;
        case TRANSACTION_WITHDRAW:
        return "Withdraw: -";
        break;
        case TRANSACTION_PURCHASE:
        return "Purchase: -";
        break;
        case TRANSACTION_REFUND:
        return "Refund: +";
        break;
        case TRANSACTION_PAYMENT_OUT:
        return "Payment: -";
        break;
        case TRANSACTION_PAYMENT_RECEIVE:
        return "Payment: +";
        break;
    }
    return "Unknown: ";
}

transactions::transactions(QWidget *parent) :QWidget(parent),ui(new Ui::transactions)
{
    ui->setupUi(this);

    QString Data = ReadURL("http://www.students.oamk.fi/~t9jaja02/atm_project/GetTransactions.php?user=" + QString::number(userID) + "&card=" + QString::number(iCardType));
    QStringList lineSplit = Data.split("+");
    QString dataSplit[20];

    for (int i = 0; i < lineSplit.count() - 1; i++)
    {
       if(lineSplit[i].contains("<") || lineSplit[i].contains(">"))
           continue;
       dataSplit[i] = lineSplit[i];
    }

    int lastLength = 0;
    for (int i = 0; i < lineSplit.count() - 1; i++)
    {
        QStringList itemSplit = dataSplit[i].split(":");
        QString line = TransactionToString(itemSplit[3].toInt()) + QString::number(itemSplit[2].toDouble(), 'f', 2) + "€";
        QString line2 = line;

        int newLength = line.length();
        if(lastLength != 0 && lastLength != line.length())
        {
            if(lastLength < line.length())
                newLength += (lastLength - line.length());
            else
                newLength -= (lastLength - line.length());
        }
        for(int i = 60; i > newLength; i--)
        {
            line2 += " ";
        }
        line2 += itemSplit[1];
        ui->trView->addItem(line2);
        lastLength = line.length();
    }
}

transactions::~transactions()
{
    delete ui;
}

void transactions::on_pushButton_clicked()
{
    AccountMenu *w = new AccountMenu;
    w->setAttribute(Qt::WA_DeleteOnClose);
    w->show();
    this->close();
}

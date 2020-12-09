#ifndef CREDITDEBIT_H
#define CREDITDEBIT_H

#include <QWidget>

enum CARDTYPE_T
{
    CARD_CREDIT,
    CARD_DEBIT
};
namespace Ui {
class CreditDebit;
}

class CreditDebit : public QWidget
{
    Q_OBJECT

public:
    explicit CreditDebit(QWidget *parent = 0);
    ~CreditDebit();

private slots:
    void on_creditBtn_clicked();

    void on_debitBtn_clicked();

    void on_pushButton_clicked();

private:
    Ui::CreditDebit *ui;
};

#endif // CREDITDEBIT_H

extern int iCardType;

#ifndef WITHDRAW_H
#define WITHDRAW_H

#include <QWidget>

namespace Ui {
class Withdraw;
}

class Withdraw : public QWidget
{
    Q_OBJECT

public:
    explicit Withdraw(QWidget *parent = 0);
    ~Withdraw();

private slots:
    void SelectAndConfirm(double amount);

    void on_cancelBtn_clicked();

    void on_twentyBtn_clicked();

    void on_fourtyBtn_clicked();

    void on_fiftyBtn_clicked();

    void on_hundredBtn_clicked();

    void on_otherBtn_clicked();

private:
    Ui::Withdraw *ui;
};

#endif // WITHDRAW_H

extern double dSelectedAmount;

#ifndef CONFIRMWITHDRAW_H
#define CONFIRMWITHDRAW_H

#include <QWidget>

namespace Ui {
class ConfirmWithdraw;
}

class ConfirmWithdraw : public QWidget
{
    Q_OBJECT

public:
    explicit ConfirmWithdraw(QWidget *parent = 0);
    ~ConfirmWithdraw();

private slots:
    void WithdrawMoney();
    void on_confirmBtn_clicked();
    void on_cancelBtn_clicked();

private:
    Ui::ConfirmWithdraw *ui;
};

#endif // CONFIRMWITHDRAW_H

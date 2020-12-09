#ifndef BALANCE_H
#define BALANCE_H

#include <QWidget>

namespace Ui {
class Balance;
}

class Balance : public QWidget
{
    Q_OBJECT

public:
    explicit Balance(QWidget *parent = 0);
    ~Balance();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Balance *ui;
};

QString GetBalance(bool includeEur = false);
#endif // BALANCE_H

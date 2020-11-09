#ifndef TRANSACTIONS_H
#define TRANSACTIONS_H

#include <QWidget>

namespace Ui {
class transactions;
}

class transactions : public QWidget
{
    Q_OBJECT

public:
    explicit transactions(QWidget *parent = 0);
    ~transactions();

private slots:
    void on_pushButton_clicked();

private:
    Ui::transactions *ui;
};

#endif // TRANSACTIONS_H

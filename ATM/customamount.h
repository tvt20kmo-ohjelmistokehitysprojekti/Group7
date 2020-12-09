#ifndef CUSTOMAMOUNT_H
#define CUSTOMAMOUNT_H

#include <QWidget>

namespace Ui {
class CustomAmount;
}

class CustomAmount : public QWidget
{
    Q_OBJECT

public:
    explicit CustomAmount(QWidget *parent = 0);
    ~CustomAmount();

private slots:
    void on_cancelBtn_clicked();

    void on_okBtn_clicked();

    void on_customVal_valueChanged(int arg1);

private:
    Ui::CustomAmount *ui;
};

#endif // CUSTOMAMOUNT_H

#include <QWidget>

namespace Ui {
class AccountMenu;
}

class AccountMenu : public QWidget
{
    Q_OBJECT
public:
    explicit AccountMenu(QWidget *parent = 0);
    ~AccountMenu();

private slots:
    void on_withdrawBtn_clicked();

    void on_balanceBtn_clicked();

    void on_transactiondBtn_clicked();

    void on_pushButton_clicked();

private:
    Ui::AccountMenu *ui;
};

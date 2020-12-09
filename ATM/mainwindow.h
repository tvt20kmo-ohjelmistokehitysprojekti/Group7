#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

enum LRESPOND
{
    LOGIN_FAILED,
    LOGIN_INVALID_CARD,
    LOGIN_SUCCESS
};

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_LogInBtn_clicked();

    void on_id_lnEdit_textChanged(const QString &arg1);

    void on_pw_lnEdit_returnPressed();

    void on_pw_lnEdit_textChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

QString ReadURL(QString URL);
extern int userID;
extern QString fullname;

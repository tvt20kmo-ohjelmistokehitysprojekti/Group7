#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "creditdebit.h"
#include <QtNetwork>
#include <functional>
using namespace std;

int userID;
QString fullname;

QString ReadURL(QString URL)
{
    QNetworkAccessManager manager;
    QNetworkReply *response = manager.get(QNetworkRequest(QUrl(URL)));
    QEventLoop event;
    manager.connect(response,SIGNAL(finished()),&event,SLOT(quit()));
    event.exec();
    return response->readAll();
}

void ChangeWindow(QWidget* window, QWidget* w)
{
    w->setAttribute(Qt::WA_DeleteOnClose);
    QRect geo = window->geometry();
    w->setGeometry(geo.x(), geo.y(), geo.width(), geo.height());
    if(window->isMaximized())
        w->showMaximized();
    w->show();
    window->close();
}

int Login(QString tempNumber, QString tempPass)
{
    if(tempNumber.length() < 7 || tempPass.length() < 3)
        return LOGIN_INVALID_CARD;

    bool lSuccess = false;
    lSuccess = ReadURL("http://www.students.oamk.fi/~t9jaja02/atm_project/Login.php?user=" + tempNumber + "&pass=" + tempPass).contains(tempNumber);

    if(!lSuccess)
        return LOGIN_FAILED;

    QString Data = ReadURL("http://www.students.oamk.fi/~t9jaja02/atm_project/GetData.php?user=" + tempNumber);

    QStringList dataSplit = Data.split(":");
    userID = dataSplit.first().toInt();
    fullname = dataSplit.value(1) + " " +dataSplit.value(2);

    if(lSuccess)
        return LOGIN_SUCCESS;

    return LOGIN_INVALID_CARD;
}

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->responseLbl->setVisible(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_LogInBtn_clicked()
{
    ui->responseLbl->setText("");
    ui->LogInBtn->setEnabled(false);
    ui->pw_lnEdit->setEnabled(false);
    ui->id_lnEdit->setEnabled(false);
    int response = Login(ui->id_lnEdit->text(), ui->pw_lnEdit->text());
    ui->responseLbl->setVisible(true);
    switch(response)
    {
        case LOGIN_INVALID_CARD:
            ui->responseLbl->setText("Invalid card details, try again.");
            break;
        case LOGIN_FAILED:
            ui->responseLbl->setText("Login failed, try again.");
            break;
        case LOGIN_SUCCESS:
            ui->responseLbl->setText("");
            ui->responseLbl->setVisible(false);
            CreditDebit *w = new CreditDebit;
            ChangeWindow(this, w);
            break;
    };
    ui->LogInBtn->setEnabled(true);
    ui->pw_lnEdit->setEnabled(true);
    ui->id_lnEdit->setEnabled(true);
}

void MainWindow::on_id_lnEdit_textChanged(const QString &arg1)
{
    ui->responseLbl->setVisible(false);
    if(arg1.length() == 8)
    {
        ui->LogInBtn->setEnabled(true);
        ui->pw_lnEdit->setFocus();
    }else
    {
        ui->LogInBtn->setEnabled(false);
    }
}

void MainWindow::on_pw_lnEdit_returnPressed()
{
    this->on_LogInBtn_clicked();
}

void MainWindow::on_pw_lnEdit_textChanged(const QString &arg1)
{
    ui->responseLbl->setVisible(false);
}

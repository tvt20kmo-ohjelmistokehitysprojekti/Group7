/********************************************************************************
** Form generated from reading UI file 'AccountMenu.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTMENU_H
#define UI_ACCOUNTMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AccountMenu
{
public:
    QPushButton *withdrawBtn;
    QPushButton *balanceBtn;
    QPushButton *transactiondBtn;
    QFrame *frame;
    QLabel *nameLbl;
    QLabel *imgLbl;
    QLabel *chooseLbl;
    QPushButton *pushButton;

    void setupUi(QWidget *AccountMenu)
    {
        if (AccountMenu->objectName().isEmpty())
            AccountMenu->setObjectName(QStringLiteral("AccountMenu"));
        AccountMenu->resize(742, 680);
        AccountMenu->setStyleSheet(QStringLiteral("background-color:white;"));
        withdrawBtn = new QPushButton(AccountMenu);
        withdrawBtn->setObjectName(QStringLiteral("withdrawBtn"));
        withdrawBtn->setGeometry(QRect(190, 200, 331, 101));
        QFont font;
        font.setPointSize(18);
        withdrawBtn->setFont(font);
        withdrawBtn->setStyleSheet(QStringLiteral(""));
        balanceBtn = new QPushButton(AccountMenu);
        balanceBtn->setObjectName(QStringLiteral("balanceBtn"));
        balanceBtn->setGeometry(QRect(190, 310, 331, 101));
        balanceBtn->setFont(font);
        transactiondBtn = new QPushButton(AccountMenu);
        transactiondBtn->setObjectName(QStringLiteral("transactiondBtn"));
        transactiondBtn->setGeometry(QRect(190, 420, 331, 101));
        transactiondBtn->setFont(font);
        frame = new QFrame(AccountMenu);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 80, 741, 51));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 166, 168, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(246, 113, 115, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(119, 30, 31, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(159, 40, 42, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(246, 157, 159, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush9(QColor(238, 60, 63, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        frame->setPalette(palette);
        frame->setAutoFillBackground(false);
        frame->setStyleSheet(QStringLiteral("background-color:red;"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Raised);
        nameLbl = new QLabel(frame);
        nameLbl->setObjectName(QStringLiteral("nameLbl"));
        nameLbl->setGeometry(QRect(10, 10, 521, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Verdana"));
        font1.setPointSize(14);
        nameLbl->setFont(font1);
        nameLbl->setStyleSheet(QStringLiteral("QLabel { color : white; }"));
        nameLbl->setTextFormat(Qt::AutoText);
        imgLbl = new QLabel(AccountMenu);
        imgLbl->setObjectName(QStringLiteral("imgLbl"));
        imgLbl->setGeometry(QRect(10, 10, 191, 61));
        imgLbl->setFrameShape(QFrame::NoFrame);
        imgLbl->setFrameShadow(QFrame::Plain);
        imgLbl->setPixmap(QPixmap(QString::fromUtf8("ATM_Logo.bmp")));
        chooseLbl = new QLabel(AccountMenu);
        chooseLbl->setObjectName(QStringLiteral("chooseLbl"));
        chooseLbl->setGeometry(QRect(240, 150, 241, 31));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        chooseLbl->setPalette(palette1);
        QFont font2;
        font2.setFamily(QStringLiteral("Verdana"));
        font2.setPointSize(20);
        chooseLbl->setFont(font2);
        chooseLbl->setStyleSheet(QStringLiteral(""));
        pushButton = new QPushButton(AccountMenu);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(570, 10, 161, 61));
        QFont font3;
        font3.setPointSize(12);
        pushButton->setFont(font3);

        retranslateUi(AccountMenu);

        QMetaObject::connectSlotsByName(AccountMenu);
    } // setupUi

    void retranslateUi(QWidget *AccountMenu)
    {
        AccountMenu->setWindowTitle(QApplication::translate("AccountMenu", "ATM", Q_NULLPTR));
        withdrawBtn->setText(QApplication::translate("AccountMenu", "Withdraw", Q_NULLPTR));
        balanceBtn->setText(QApplication::translate("AccountMenu", "Show Balance", Q_NULLPTR));
        transactiondBtn->setText(QApplication::translate("AccountMenu", "Transaction log", Q_NULLPTR));
        nameLbl->setText(QApplication::translate("AccountMenu", "Name Lastname | Cardtype", Q_NULLPTR));
        imgLbl->setText(QString());
        chooseLbl->setText(QApplication::translate("AccountMenu", "Choose a service.", Q_NULLPTR));
        pushButton->setText(QApplication::translate("AccountMenu", "Back", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AccountMenu: public Ui_AccountMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTMENU_H

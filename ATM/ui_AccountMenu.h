/********************************************************************************
** Form generated from reading UI file 'AccountMenu.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTMENU_H
#define UI_ACCOUNTMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AccountMenu
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QLabel *nameLbl;
    QPushButton *withdrawBtn;
    QPushButton *balanceBtn;
    QLabel *label;
    QLabel *imgLbl;
    QLabel *chooseLbl;
    QPushButton *transactiondBtn;
    QLabel *label_2;
    QPushButton *pushButton;
    QLabel *label_3;

    void setupUi(QWidget *AccountMenu)
    {
        if (AccountMenu->objectName().isEmpty())
            AccountMenu->setObjectName(QString::fromUtf8("AccountMenu"));
        AccountMenu->resize(945, 610);
        AccountMenu->setStyleSheet(QString::fromUtf8("background-color:white;"));
        gridLayout = new QGridLayout(AccountMenu);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame = new QFrame(AccountMenu);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setMinimumSize(QSize(400, 100));
        frame->setMaximumSize(QSize(16777215, 100));
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
        QBrush brush9(QColor(0, 0, 0, 128));
        brush9.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
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
        QBrush brush10(QColor(0, 0, 0, 128));
        brush10.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
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
        QBrush brush11(QColor(238, 60, 63, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush11);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush12(QColor(0, 0, 0, 128));
        brush12.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        frame->setPalette(palette);
        frame->setAutoFillBackground(false);
        frame->setStyleSheet(QString::fromUtf8("background-color:red;"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        nameLbl = new QLabel(frame);
        nameLbl->setObjectName(QString::fromUtf8("nameLbl"));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(14);
        nameLbl->setFont(font);
        nameLbl->setStyleSheet(QString::fromUtf8("QLabel { color : white; }"));
        nameLbl->setTextFormat(Qt::AutoText);

        gridLayout_2->addWidget(nameLbl, 0, 0, 1, 1);


        gridLayout->addWidget(frame, 1, 0, 1, 4);

        withdrawBtn = new QPushButton(AccountMenu);
        withdrawBtn->setObjectName(QString::fromUtf8("withdrawBtn"));
        sizePolicy.setHeightForWidth(withdrawBtn->sizePolicy().hasHeightForWidth());
        withdrawBtn->setSizePolicy(sizePolicy);
        withdrawBtn->setMinimumSize(QSize(500, 100));
        withdrawBtn->setMaximumSize(QSize(500, 100));
        QFont font1;
        font1.setPointSize(18);
        withdrawBtn->setFont(font1);
        withdrawBtn->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: red;"));

        gridLayout->addWidget(withdrawBtn, 5, 1, 1, 1);

        balanceBtn = new QPushButton(AccountMenu);
        balanceBtn->setObjectName(QString::fromUtf8("balanceBtn"));
        sizePolicy.setHeightForWidth(balanceBtn->sizePolicy().hasHeightForWidth());
        balanceBtn->setSizePolicy(sizePolicy);
        balanceBtn->setMinimumSize(QSize(500, 100));
        balanceBtn->setMaximumSize(QSize(500, 100));
        balanceBtn->setFont(font1);
        balanceBtn->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: red;"));

        gridLayout->addWidget(balanceBtn, 6, 1, 1, 1);

        label = new QLabel(AccountMenu);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 3, 0, 1, 1, Qt::AlignHCenter);

        imgLbl = new QLabel(AccountMenu);
        imgLbl->setObjectName(QString::fromUtf8("imgLbl"));
        imgLbl->setFrameShape(QFrame::NoFrame);
        imgLbl->setFrameShadow(QFrame::Plain);
        imgLbl->setPixmap(QPixmap(QString::fromUtf8("ATM_Logo.bmp")));

        gridLayout->addWidget(imgLbl, 0, 0, 1, 1);

        chooseLbl = new QLabel(AccountMenu);
        chooseLbl->setObjectName(QString::fromUtf8("chooseLbl"));
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
        font2.setFamily(QString::fromUtf8("Verdana"));
        font2.setPointSize(20);
        chooseLbl->setFont(font2);
        chooseLbl->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(chooseLbl, 3, 1, 1, 1);

        transactiondBtn = new QPushButton(AccountMenu);
        transactiondBtn->setObjectName(QString::fromUtf8("transactiondBtn"));
        sizePolicy.setHeightForWidth(transactiondBtn->sizePolicy().hasHeightForWidth());
        transactiondBtn->setSizePolicy(sizePolicy);
        transactiondBtn->setMinimumSize(QSize(500, 100));
        transactiondBtn->setMaximumSize(QSize(500, 100));
        transactiondBtn->setFont(font1);
        transactiondBtn->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: red;"));

        gridLayout->addWidget(transactiondBtn, 7, 1, 1, 1);

        label_2 = new QLabel(AccountMenu);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 12, 0, 1, 1, Qt::AlignHCenter);

        pushButton = new QPushButton(AccountMenu);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(100, 60));
        pushButton->setMaximumSize(QSize(100, 60));
        QFont font3;
        font3.setPointSize(12);
        pushButton->setFont(font3);

        gridLayout->addWidget(pushButton, 0, 3, 1, 1);

        label_3 = new QLabel(AccountMenu);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 1, 1, 1);

        pushButton->raise();
        label->raise();
        imgLbl->raise();
        label_2->raise();
        frame->raise();
        withdrawBtn->raise();
        balanceBtn->raise();
        transactiondBtn->raise();
        chooseLbl->raise();
        label_3->raise();

        retranslateUi(AccountMenu);

        QMetaObject::connectSlotsByName(AccountMenu);
    } // setupUi

    void retranslateUi(QWidget *AccountMenu)
    {
        AccountMenu->setWindowTitle(QCoreApplication::translate("AccountMenu", "ATM", nullptr));
        nameLbl->setText(QCoreApplication::translate("AccountMenu", "Name Lastname | Cardtype", nullptr));
        withdrawBtn->setText(QCoreApplication::translate("AccountMenu", "Withdraw", nullptr));
        balanceBtn->setText(QCoreApplication::translate("AccountMenu", "Show Balance", nullptr));
        label->setText(QString());
        imgLbl->setText(QString());
        chooseLbl->setText(QCoreApplication::translate("AccountMenu", "Choose a service.", nullptr));
        transactiondBtn->setText(QCoreApplication::translate("AccountMenu", "Transaction log", nullptr));
        label_2->setText(QString());
        pushButton->setText(QCoreApplication::translate("AccountMenu", "Back", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AccountMenu: public Ui_AccountMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTMENU_H

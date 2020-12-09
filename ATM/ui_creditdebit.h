/********************************************************************************
** Form generated from reading UI file 'creditdebit.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDITDEBIT_H
#define UI_CREDITDEBIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreditDebit
{
public:
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *imgLbl;
    QPushButton *pushButton;
    QPushButton *debitBtn;
    QLabel *label_2;
    QPushButton *creditBtn;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QLabel *nameLbl;
    QLabel *label;

    void setupUi(QWidget *CreditDebit)
    {
        if (CreditDebit->objectName().isEmpty())
            CreditDebit->setObjectName(QString::fromUtf8("CreditDebit"));
        CreditDebit->resize(945, 610);
        CreditDebit->setStyleSheet(QString::fromUtf8("background-color:white;"));
        gridLayout = new QGridLayout(CreditDebit);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(6, 6, 6, 0);
        label_3 = new QLabel(CreditDebit);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 12, 1, 1, 1, Qt::AlignHCenter);

        imgLbl = new QLabel(CreditDebit);
        imgLbl->setObjectName(QString::fromUtf8("imgLbl"));
        imgLbl->setFrameShape(QFrame::NoFrame);
        imgLbl->setFrameShadow(QFrame::Plain);
        imgLbl->setPixmap(QPixmap(QString::fromUtf8("ATM_Logo.bmp")));

        gridLayout->addWidget(imgLbl, 0, 0, 1, 2);

        pushButton = new QPushButton(CreditDebit);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(100, 60));
        pushButton->setMaximumSize(QSize(100, 60));
        QFont font;
        font.setPointSize(12);
        pushButton->setFont(font);

        gridLayout->addWidget(pushButton, 0, 5, 1, 1);

        debitBtn = new QPushButton(CreditDebit);
        debitBtn->setObjectName(QString::fromUtf8("debitBtn"));
        sizePolicy.setHeightForWidth(debitBtn->sizePolicy().hasHeightForWidth());
        debitBtn->setSizePolicy(sizePolicy);
        debitBtn->setMinimumSize(QSize(500, 100));
        debitBtn->setMaximumSize(QSize(500, 100));
        QFont font1;
        font1.setPointSize(18);
        debitBtn->setFont(font1);
        debitBtn->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: red;"));

        gridLayout->addWidget(debitBtn, 9, 2, 1, 1, Qt::AlignHCenter);

        label_2 = new QLabel(CreditDebit);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 4, 1, 1, 2, Qt::AlignHCenter);

        creditBtn = new QPushButton(CreditDebit);
        creditBtn->setObjectName(QString::fromUtf8("creditBtn"));
        sizePolicy.setHeightForWidth(creditBtn->sizePolicy().hasHeightForWidth());
        creditBtn->setSizePolicy(sizePolicy);
        creditBtn->setMinimumSize(QSize(500, 100));
        creditBtn->setMaximumSize(QSize(500, 100));
        creditBtn->setFont(font1);
        creditBtn->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: red;"));

        gridLayout->addWidget(creditBtn, 8, 2, 1, 1, Qt::AlignHCenter);

        frame = new QFrame(CreditDebit);
        frame->setObjectName(QString::fromUtf8("frame"));
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
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        nameLbl = new QLabel(frame);
        nameLbl->setObjectName(QString::fromUtf8("nameLbl"));
        sizePolicy.setHeightForWidth(nameLbl->sizePolicy().hasHeightForWidth());
        nameLbl->setSizePolicy(sizePolicy);
        nameLbl->setMinimumSize(QSize(400, 0));
        nameLbl->setMaximumSize(QSize(400, 16777215));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Verdana"));
        font2.setPointSize(14);
        nameLbl->setFont(font2);
        nameLbl->setStyleSheet(QString::fromUtf8("QLabel { color : white; }"));
        nameLbl->setTextFormat(Qt::AutoText);

        verticalLayout->addWidget(nameLbl);


        gridLayout->addWidget(frame, 3, 0, 1, 6);

        label = new QLabel(CreditDebit);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(400, 30));
        label->setMaximumSize(QSize(400, 100));
        QFont font3;
        font3.setPointSize(20);
        label->setFont(font3);
        label->setScaledContents(false);

        gridLayout->addWidget(label, 6, 2, 1, 1);

        imgLbl->raise();
        pushButton->raise();
        debitBtn->raise();
        label_3->raise();
        frame->raise();
        label_2->raise();
        creditBtn->raise();
        label->raise();

        retranslateUi(CreditDebit);

        QMetaObject::connectSlotsByName(CreditDebit);
    } // setupUi

    void retranslateUi(QWidget *CreditDebit)
    {
        CreditDebit->setWindowTitle(QCoreApplication::translate("CreditDebit", "ATM", nullptr));
        label_3->setText(QString());
        imgLbl->setText(QString());
        pushButton->setText(QCoreApplication::translate("CreditDebit", "Log out", nullptr));
        debitBtn->setText(QCoreApplication::translate("CreditDebit", "Debit", nullptr));
        label_2->setText(QString());
        creditBtn->setText(QCoreApplication::translate("CreditDebit", "Credit", nullptr));
        nameLbl->setText(QCoreApplication::translate("CreditDebit", "Select card", nullptr));
        label->setText(QCoreApplication::translate("CreditDebit", "Select card:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreditDebit: public Ui_CreditDebit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDITDEBIT_H

/********************************************************************************
** Form generated from reading UI file 'withdrawAmount.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WITHDRAWAMOUNT_H
#define UI_WITHDRAWAMOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Withdraw
{
public:
    QGridLayout *gridLayout_2;
    QLabel *imgLbl;
    QLabel *label;
    QPushButton *fiftyBtn;
    QPushButton *otherBtn;
    QPushButton *twentyBtn;
    QPushButton *cancelBtn;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *nameLbl;
    QLabel *label_2;
    QPushButton *hundredBtn;
    QPushButton *fourtyBtn;

    void setupUi(QWidget *Withdraw)
    {
        if (Withdraw->objectName().isEmpty())
            Withdraw->setObjectName(QString::fromUtf8("Withdraw"));
        Withdraw->resize(945, 610);
        Withdraw->setStyleSheet(QString::fromUtf8("background-color:white;"));
        gridLayout_2 = new QGridLayout(Withdraw);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        imgLbl = new QLabel(Withdraw);
        imgLbl->setObjectName(QString::fromUtf8("imgLbl"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(imgLbl->sizePolicy().hasHeightForWidth());
        imgLbl->setSizePolicy(sizePolicy);
        imgLbl->setMinimumSize(QSize(923, 60));
        imgLbl->setMaximumSize(QSize(923, 60));
        imgLbl->setFrameShape(QFrame::NoFrame);
        imgLbl->setFrameShadow(QFrame::Plain);
        imgLbl->setPixmap(QPixmap(QString::fromUtf8("ATM_Logo.bmp")));

        gridLayout_2->addWidget(imgLbl, 0, 0, 1, 2);

        label = new QLabel(Withdraw);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 2, 0, 1, 2, Qt::AlignHCenter);

        fiftyBtn = new QPushButton(Withdraw);
        fiftyBtn->setObjectName(QString::fromUtf8("fiftyBtn"));
        sizePolicy.setHeightForWidth(fiftyBtn->sizePolicy().hasHeightForWidth());
        fiftyBtn->setSizePolicy(sizePolicy);
        fiftyBtn->setMinimumSize(QSize(300, 100));
        fiftyBtn->setMaximumSize(QSize(300, 100));
        QFont font;
        font.setPointSize(18);
        fiftyBtn->setFont(font);
        fiftyBtn->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: red;"));

        gridLayout_2->addWidget(fiftyBtn, 7, 0, 1, 1, Qt::AlignRight);

        otherBtn = new QPushButton(Withdraw);
        otherBtn->setObjectName(QString::fromUtf8("otherBtn"));
        sizePolicy.setHeightForWidth(otherBtn->sizePolicy().hasHeightForWidth());
        otherBtn->setSizePolicy(sizePolicy);
        otherBtn->setMinimumSize(QSize(300, 100));
        otherBtn->setMaximumSize(QSize(300, 100));
        QFont font1;
        font1.setPointSize(16);
        otherBtn->setFont(font1);
        otherBtn->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: red;"));

        gridLayout_2->addWidget(otherBtn, 9, 0, 1, 1, Qt::AlignRight);

        twentyBtn = new QPushButton(Withdraw);
        twentyBtn->setObjectName(QString::fromUtf8("twentyBtn"));
        sizePolicy.setHeightForWidth(twentyBtn->sizePolicy().hasHeightForWidth());
        twentyBtn->setSizePolicy(sizePolicy);
        twentyBtn->setMinimumSize(QSize(300, 100));
        twentyBtn->setMaximumSize(QSize(300, 100));
        twentyBtn->setFont(font);
        twentyBtn->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: red;"));

        gridLayout_2->addWidget(twentyBtn, 4, 0, 1, 1, Qt::AlignRight);

        cancelBtn = new QPushButton(Withdraw);
        cancelBtn->setObjectName(QString::fromUtf8("cancelBtn"));
        sizePolicy.setHeightForWidth(cancelBtn->sizePolicy().hasHeightForWidth());
        cancelBtn->setSizePolicy(sizePolicy);
        cancelBtn->setMinimumSize(QSize(300, 100));
        cancelBtn->setMaximumSize(QSize(300, 100));
        cancelBtn->setFont(font1);
        cancelBtn->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: red;"));

        gridLayout_2->addWidget(cancelBtn, 9, 1, 1, 1, Qt::AlignLeft);

        frame = new QFrame(Withdraw);
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
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        nameLbl = new QLabel(frame);
        nameLbl->setObjectName(QString::fromUtf8("nameLbl"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Verdana"));
        font2.setPointSize(14);
        nameLbl->setFont(font2);
        nameLbl->setStyleSheet(QString::fromUtf8("QLabel { color : white; }"));
        nameLbl->setTextFormat(Qt::AutoText);

        gridLayout->addWidget(nameLbl, 0, 0, 1, 1);


        gridLayout_2->addWidget(frame, 1, 0, 1, 2);

        label_2 = new QLabel(Withdraw);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 10, 0, 1, 2, Qt::AlignHCenter);

        hundredBtn = new QPushButton(Withdraw);
        hundredBtn->setObjectName(QString::fromUtf8("hundredBtn"));
        sizePolicy.setHeightForWidth(hundredBtn->sizePolicy().hasHeightForWidth());
        hundredBtn->setSizePolicy(sizePolicy);
        hundredBtn->setMinimumSize(QSize(300, 100));
        hundredBtn->setMaximumSize(QSize(300, 100));
        hundredBtn->setFont(font);
        hundredBtn->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: red;"));

        gridLayout_2->addWidget(hundredBtn, 7, 1, 1, 1, Qt::AlignLeft);

        fourtyBtn = new QPushButton(Withdraw);
        fourtyBtn->setObjectName(QString::fromUtf8("fourtyBtn"));
        sizePolicy.setHeightForWidth(fourtyBtn->sizePolicy().hasHeightForWidth());
        fourtyBtn->setSizePolicy(sizePolicy);
        fourtyBtn->setMinimumSize(QSize(300, 100));
        fourtyBtn->setMaximumSize(QSize(300, 100));
        fourtyBtn->setFont(font);
        fourtyBtn->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: red;"));

        gridLayout_2->addWidget(fourtyBtn, 4, 1, 1, 1, Qt::AlignLeft);


        retranslateUi(Withdraw);

        QMetaObject::connectSlotsByName(Withdraw);
    } // setupUi

    void retranslateUi(QWidget *Withdraw)
    {
        Withdraw->setWindowTitle(QCoreApplication::translate("Withdraw", "ATM", nullptr));
        imgLbl->setText(QString());
        label->setText(QString());
        fiftyBtn->setText(QCoreApplication::translate("Withdraw", "50\342\202\254", nullptr));
        otherBtn->setText(QCoreApplication::translate("Withdraw", "Other Amount", nullptr));
        twentyBtn->setText(QCoreApplication::translate("Withdraw", "20\342\202\254", nullptr));
        cancelBtn->setText(QCoreApplication::translate("Withdraw", "Cancel", nullptr));
        nameLbl->setText(QCoreApplication::translate("Withdraw", "Withdrawal", nullptr));
        label_2->setText(QString());
        hundredBtn->setText(QCoreApplication::translate("Withdraw", "100\342\202\254", nullptr));
        fourtyBtn->setText(QCoreApplication::translate("Withdraw", "40\342\202\254", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Withdraw: public Ui_Withdraw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WITHDRAWAMOUNT_H

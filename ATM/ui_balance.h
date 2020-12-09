/********************************************************************************
** Form generated from reading UI file 'balance.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BALANCE_H
#define UI_BALANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Balance
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QLabel *imgLbl;
    QLabel *moneyLbl;
    QLabel *label_3;
    QFrame *frame;
    QLabel *nameLbl;
    QLabel *label_2;
    QLabel *label;
    QLabel *bLabel;

    void setupUi(QWidget *Balance)
    {
        if (Balance->objectName().isEmpty())
            Balance->setObjectName(QString::fromUtf8("Balance"));
        Balance->resize(945, 610);
        Balance->setStyleSheet(QString::fromUtf8("background-color: white;"));
        gridLayout = new QGridLayout(Balance);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(Balance);
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

        gridLayout->addWidget(pushButton, 0, 1, 1, 1);

        imgLbl = new QLabel(Balance);
        imgLbl->setObjectName(QString::fromUtf8("imgLbl"));
        imgLbl->setFrameShape(QFrame::NoFrame);
        imgLbl->setFrameShadow(QFrame::Plain);
        imgLbl->setPixmap(QPixmap(QString::fromUtf8("ATM_Logo.bmp")));

        gridLayout->addWidget(imgLbl, 0, 0, 1, 1);

        moneyLbl = new QLabel(Balance);
        moneyLbl->setObjectName(QString::fromUtf8("moneyLbl"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(moneyLbl->sizePolicy().hasHeightForWidth());
        moneyLbl->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(48);
        font1.setBold(false);
        font1.setUnderline(false);
        font1.setWeight(50);
        font1.setStyleStrategy(QFont::PreferDefault);
        moneyLbl->setFont(font1);
        moneyLbl->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(moneyLbl, 4, 0, 1, 2, Qt::AlignHCenter);

        label_3 = new QLabel(Balance);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 5, 0, 1, 1, Qt::AlignHCenter);

        frame = new QFrame(Balance);
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
        nameLbl = new QLabel(frame);
        nameLbl->setObjectName(QString::fromUtf8("nameLbl"));
        nameLbl->setGeometry(QRect(10, 30, 521, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Verdana"));
        font2.setPointSize(14);
        nameLbl->setFont(font2);
        nameLbl->setStyleSheet(QString::fromUtf8("QLabel { color : white; }"));
        nameLbl->setTextFormat(Qt::AutoText);

        gridLayout->addWidget(frame, 1, 0, 1, 2);

        label_2 = new QLabel(Balance);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 6, 0, 1, 1, Qt::AlignHCenter);

        label = new QLabel(Balance);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1, Qt::AlignHCenter);

        bLabel = new QLabel(Balance);
        bLabel->setObjectName(QString::fromUtf8("bLabel"));
        sizePolicy1.setHeightForWidth(bLabel->sizePolicy().hasHeightForWidth());
        bLabel->setSizePolicy(sizePolicy1);
        QFont font3;
        font3.setFamily(QString::fromUtf8("Verdana"));
        font3.setPointSize(20);
        bLabel->setFont(font3);
        bLabel->setContextMenuPolicy(Qt::DefaultContextMenu);

        gridLayout->addWidget(bLabel, 3, 0, 1, 2, Qt::AlignHCenter);


        retranslateUi(Balance);

        QMetaObject::connectSlotsByName(Balance);
    } // setupUi

    void retranslateUi(QWidget *Balance)
    {
        Balance->setWindowTitle(QCoreApplication::translate("Balance", "ATM", nullptr));
        pushButton->setText(QCoreApplication::translate("Balance", "Back", nullptr));
        imgLbl->setText(QString());
        moneyLbl->setText(QCoreApplication::translate("Balance", "50,00\342\202\254", nullptr));
        label_3->setText(QString());
        nameLbl->setText(QCoreApplication::translate("Balance", "Name Lastname | Cardtype", nullptr));
        label_2->setText(QString());
        label->setText(QString());
        bLabel->setText(QCoreApplication::translate("Balance", "Balance:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Balance: public Ui_Balance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BALANCE_H

/********************************************************************************
** Form generated from reading UI file 'withdrawAmount.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WITHDRAWAMOUNT_H
#define UI_WITHDRAWAMOUNT_H

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

class Ui_Withdraw
{
public:
    QPushButton *twentyBtn;
    QPushButton *hundredBtn;
    QPushButton *fourtyBtn;
    QPushButton *otherBtn;
    QPushButton *fiftyBtn;
    QPushButton *cancelBtn;
    QLabel *imgLbl;
    QFrame *frame;
    QLabel *nameLbl;

    void setupUi(QWidget *Withdraw)
    {
        if (Withdraw->objectName().isEmpty())
            Withdraw->setObjectName(QStringLiteral("Withdraw"));
        Withdraw->resize(741, 682);
        Withdraw->setStyleSheet(QStringLiteral("background-color:white;"));
        twentyBtn = new QPushButton(Withdraw);
        twentyBtn->setObjectName(QStringLiteral("twentyBtn"));
        twentyBtn->setGeometry(QRect(60, 160, 181, 81));
        QFont font;
        font.setPointSize(18);
        twentyBtn->setFont(font);
        hundredBtn = new QPushButton(Withdraw);
        hundredBtn->setObjectName(QStringLiteral("hundredBtn"));
        hundredBtn->setGeometry(QRect(500, 160, 181, 81));
        hundredBtn->setFont(font);
        fourtyBtn = new QPushButton(Withdraw);
        fourtyBtn->setObjectName(QStringLiteral("fourtyBtn"));
        fourtyBtn->setGeometry(QRect(60, 290, 181, 81));
        fourtyBtn->setFont(font);
        otherBtn = new QPushButton(Withdraw);
        otherBtn->setObjectName(QStringLiteral("otherBtn"));
        otherBtn->setGeometry(QRect(500, 290, 181, 81));
        QFont font1;
        font1.setPointSize(16);
        otherBtn->setFont(font1);
        fiftyBtn = new QPushButton(Withdraw);
        fiftyBtn->setObjectName(QStringLiteral("fiftyBtn"));
        fiftyBtn->setGeometry(QRect(60, 420, 181, 81));
        fiftyBtn->setFont(font);
        cancelBtn = new QPushButton(Withdraw);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));
        cancelBtn->setGeometry(QRect(500, 420, 181, 81));
        cancelBtn->setFont(font1);
        imgLbl = new QLabel(Withdraw);
        imgLbl->setObjectName(QStringLiteral("imgLbl"));
        imgLbl->setGeometry(QRect(10, 5, 191, 61));
        imgLbl->setFrameShape(QFrame::NoFrame);
        imgLbl->setFrameShadow(QFrame::Plain);
        imgLbl->setPixmap(QPixmap(QString::fromUtf8("ATM_Logo.bmp")));
        frame = new QFrame(Withdraw);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 70, 741, 51));
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
        QFont font2;
        font2.setFamily(QStringLiteral("Verdana"));
        font2.setPointSize(14);
        nameLbl->setFont(font2);
        nameLbl->setStyleSheet(QStringLiteral("QLabel { color : white; }"));
        nameLbl->setTextFormat(Qt::AutoText);

        retranslateUi(Withdraw);

        QMetaObject::connectSlotsByName(Withdraw);
    } // setupUi

    void retranslateUi(QWidget *Withdraw)
    {
        Withdraw->setWindowTitle(QApplication::translate("Withdraw", "ATM", Q_NULLPTR));
        twentyBtn->setText(QApplication::translate("Withdraw", "20\342\202\254", Q_NULLPTR));
        hundredBtn->setText(QApplication::translate("Withdraw", "100\342\202\254", Q_NULLPTR));
        fourtyBtn->setText(QApplication::translate("Withdraw", "40\342\202\254", Q_NULLPTR));
        otherBtn->setText(QApplication::translate("Withdraw", "Other Amount", Q_NULLPTR));
        fiftyBtn->setText(QApplication::translate("Withdraw", "50\342\202\254", Q_NULLPTR));
        cancelBtn->setText(QApplication::translate("Withdraw", "Cancel", Q_NULLPTR));
        imgLbl->setText(QString());
        nameLbl->setText(QApplication::translate("Withdraw", "Withdrawal", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Withdraw: public Ui_Withdraw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WITHDRAWAMOUNT_H

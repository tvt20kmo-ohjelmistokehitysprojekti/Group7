/********************************************************************************
** Form generated from reading UI file 'confirmwithdraw.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRMWITHDRAW_H
#define UI_CONFIRMWITHDRAW_H

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

class Ui_ConfirmWithdraw
{
public:
    QFrame *frame;
    QLabel *nameLbl;
    QPushButton *cancelBtn;
    QLabel *imgLbl;
    QLabel *chooseLbl;
    QPushButton *confirmBtn;
    QLabel *statusLbl;

    void setupUi(QWidget *ConfirmWithdraw)
    {
        if (ConfirmWithdraw->objectName().isEmpty())
            ConfirmWithdraw->setObjectName(QStringLiteral("ConfirmWithdraw"));
        ConfirmWithdraw->resize(741, 375);
        ConfirmWithdraw->setStyleSheet(QStringLiteral("background-color: white;"));
        frame = new QFrame(ConfirmWithdraw);
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
        QFont font;
        font.setFamily(QStringLiteral("Verdana"));
        font.setPointSize(14);
        nameLbl->setFont(font);
        nameLbl->setStyleSheet(QStringLiteral("QLabel { color : white; }"));
        nameLbl->setTextFormat(Qt::AutoText);
        cancelBtn = new QPushButton(ConfirmWithdraw);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));
        cancelBtn->setGeometry(QRect(360, 220, 231, 101));
        QFont font1;
        font1.setPointSize(12);
        cancelBtn->setFont(font1);
        imgLbl = new QLabel(ConfirmWithdraw);
        imgLbl->setObjectName(QStringLiteral("imgLbl"));
        imgLbl->setGeometry(QRect(10, 0, 191, 61));
        imgLbl->setFrameShape(QFrame::NoFrame);
        imgLbl->setFrameShadow(QFrame::Plain);
        imgLbl->setPixmap(QPixmap(QString::fromUtf8("ATM_Logo.bmp")));
        chooseLbl = new QLabel(ConfirmWithdraw);
        chooseLbl->setObjectName(QStringLiteral("chooseLbl"));
        chooseLbl->setGeometry(QRect(120, 150, 501, 31));
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
        font2.setPointSize(26);
        chooseLbl->setFont(font2);
        chooseLbl->setStyleSheet(QStringLiteral(""));
        confirmBtn = new QPushButton(ConfirmWithdraw);
        confirmBtn->setObjectName(QStringLiteral("confirmBtn"));
        confirmBtn->setGeometry(QRect(120, 220, 231, 101));
        confirmBtn->setFont(font1);
        statusLbl = new QLabel(ConfirmWithdraw);
        statusLbl->setObjectName(QStringLiteral("statusLbl"));
        statusLbl->setGeometry(QRect(180, 330, 411, 31));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        statusLbl->setPalette(palette2);
        QFont font3;
        font3.setFamily(QStringLiteral("Verdana"));
        font3.setPointSize(12);
        statusLbl->setFont(font3);
        statusLbl->setStyleSheet(QStringLiteral(""));

        retranslateUi(ConfirmWithdraw);

        QMetaObject::connectSlotsByName(ConfirmWithdraw);
    } // setupUi

    void retranslateUi(QWidget *ConfirmWithdraw)
    {
        ConfirmWithdraw->setWindowTitle(QApplication::translate("ConfirmWithdraw", "ATM", Q_NULLPTR));
        nameLbl->setText(QApplication::translate("ConfirmWithdraw", "Confirm withdraw", Q_NULLPTR));
        cancelBtn->setText(QApplication::translate("ConfirmWithdraw", "Cancel", Q_NULLPTR));
        imgLbl->setText(QString());
        chooseLbl->setText(QApplication::translate("ConfirmWithdraw", "Selected Amount: 2000.00\342\202\254", Q_NULLPTR));
        confirmBtn->setText(QApplication::translate("ConfirmWithdraw", "Confirm and withdraw", Q_NULLPTR));
        statusLbl->setText(QApplication::translate("ConfirmWithdraw", "Unable to withdraw: Not enough balance.", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ConfirmWithdraw: public Ui_ConfirmWithdraw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRMWITHDRAW_H

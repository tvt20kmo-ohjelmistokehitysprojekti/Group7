/********************************************************************************
** Form generated from reading UI file 'confirmwithdraw.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRMWITHDRAW_H
#define UI_CONFIRMWITHDRAW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfirmWithdraw
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *imgLbl;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QLabel *nameLbl;
    QLabel *label;
    QLabel *chooseLbl;
    QPushButton *confirmBtn;
    QPushButton *cancelBtn;
    QLabel *statusLbl;
    QLabel *label_2;

    void setupUi(QWidget *ConfirmWithdraw)
    {
        if (ConfirmWithdraw->objectName().isEmpty())
            ConfirmWithdraw->setObjectName(QString::fromUtf8("ConfirmWithdraw"));
        ConfirmWithdraw->resize(945, 610);
        ConfirmWithdraw->setStyleSheet(QString::fromUtf8("background-color: white;"));
        verticalLayout = new QVBoxLayout(ConfirmWithdraw);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        imgLbl = new QLabel(ConfirmWithdraw);
        imgLbl->setObjectName(QString::fromUtf8("imgLbl"));
        imgLbl->setFrameShape(QFrame::NoFrame);
        imgLbl->setFrameShadow(QFrame::Plain);
        imgLbl->setPixmap(QPixmap(QString::fromUtf8("ATM_Logo.bmp")));

        verticalLayout->addWidget(imgLbl);

        frame = new QFrame(ConfirmWithdraw);
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

        gridLayout_2->addWidget(nameLbl, 0, 0, 1, 1, Qt::AlignVCenter);


        verticalLayout->addWidget(frame, 0, Qt::AlignTop);

        label = new QLabel(ConfirmWithdraw);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label, 0, Qt::AlignTop);

        chooseLbl = new QLabel(ConfirmWithdraw);
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
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(26);
        chooseLbl->setFont(font1);
        chooseLbl->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(chooseLbl, 0, Qt::AlignHCenter);

        confirmBtn = new QPushButton(ConfirmWithdraw);
        confirmBtn->setObjectName(QString::fromUtf8("confirmBtn"));
        sizePolicy.setHeightForWidth(confirmBtn->sizePolicy().hasHeightForWidth());
        confirmBtn->setSizePolicy(sizePolicy);
        confirmBtn->setMinimumSize(QSize(400, 100));
        confirmBtn->setMaximumSize(QSize(400, 100));
        QFont font2;
        font2.setPointSize(12);
        confirmBtn->setFont(font2);
        confirmBtn->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: red;"));

        verticalLayout->addWidget(confirmBtn, 0, Qt::AlignHCenter);

        cancelBtn = new QPushButton(ConfirmWithdraw);
        cancelBtn->setObjectName(QString::fromUtf8("cancelBtn"));
        sizePolicy.setHeightForWidth(cancelBtn->sizePolicy().hasHeightForWidth());
        cancelBtn->setSizePolicy(sizePolicy);
        cancelBtn->setMinimumSize(QSize(400, 100));
        cancelBtn->setMaximumSize(QSize(400, 100));
        cancelBtn->setFont(font2);
        cancelBtn->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: red;"));

        verticalLayout->addWidget(cancelBtn, 0, Qt::AlignHCenter);

        statusLbl = new QLabel(ConfirmWithdraw);
        statusLbl->setObjectName(QString::fromUtf8("statusLbl"));
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
        font3.setFamily(QString::fromUtf8("Verdana"));
        font3.setPointSize(12);
        statusLbl->setFont(font3);
        statusLbl->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(statusLbl, 0, Qt::AlignHCenter);

        label_2 = new QLabel(ConfirmWithdraw);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);


        retranslateUi(ConfirmWithdraw);

        QMetaObject::connectSlotsByName(ConfirmWithdraw);
    } // setupUi

    void retranslateUi(QWidget *ConfirmWithdraw)
    {
        ConfirmWithdraw->setWindowTitle(QCoreApplication::translate("ConfirmWithdraw", "ATM", nullptr));
        imgLbl->setText(QString());
        nameLbl->setText(QCoreApplication::translate("ConfirmWithdraw", "Confirm withdraw", nullptr));
        label->setText(QString());
        chooseLbl->setText(QCoreApplication::translate("ConfirmWithdraw", "Selected Amount: 2000.00\342\202\254", nullptr));
        confirmBtn->setText(QCoreApplication::translate("ConfirmWithdraw", "Confirm and withdraw", nullptr));
        cancelBtn->setText(QCoreApplication::translate("ConfirmWithdraw", "Cancel", nullptr));
        statusLbl->setText(QCoreApplication::translate("ConfirmWithdraw", "Unable to withdraw: Not enough balance.", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ConfirmWithdraw: public Ui_ConfirmWithdraw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRMWITHDRAW_H

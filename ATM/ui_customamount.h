/********************************************************************************
** Form generated from reading UI file 'customamount.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMAMOUNT_H
#define UI_CUSTOMAMOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomAmount
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *imgLbl;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QLabel *nameLbl;
    QLabel *label;
    QSpinBox *customVal;
    QLabel *label_3;
    QPushButton *okBtn;
    QPushButton *cancelBtn;
    QLabel *errorLbl;
    QLabel *label_2;

    void setupUi(QWidget *CustomAmount)
    {
        if (CustomAmount->objectName().isEmpty())
            CustomAmount->setObjectName(QString::fromUtf8("CustomAmount"));
        CustomAmount->resize(945, 610);
        CustomAmount->setStyleSheet(QString::fromUtf8("background-color: white;"));
        verticalLayout = new QVBoxLayout(CustomAmount);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        imgLbl = new QLabel(CustomAmount);
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

        verticalLayout->addWidget(imgLbl);

        frame = new QFrame(CustomAmount);
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


        verticalLayout->addWidget(frame);

        label = new QLabel(CustomAmount);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        customVal = new QSpinBox(CustomAmount);
        customVal->setObjectName(QString::fromUtf8("customVal"));
        sizePolicy.setHeightForWidth(customVal->sizePolicy().hasHeightForWidth());
        customVal->setSizePolicy(sizePolicy);
        customVal->setMinimumSize(QSize(400, 100));
        customVal->setMaximumSize(QSize(400, 100));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setWeight(50);
        customVal->setFont(font1);
        customVal->setAccelerated(false);
        customVal->setMinimum(5);
        customVal->setMaximum(2000);
        customVal->setSingleStep(20);
        customVal->setValue(20);

        verticalLayout->addWidget(customVal, 0, Qt::AlignHCenter);

        label_3 = new QLabel(CustomAmount);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        okBtn = new QPushButton(CustomAmount);
        okBtn->setObjectName(QString::fromUtf8("okBtn"));
        sizePolicy.setHeightForWidth(okBtn->sizePolicy().hasHeightForWidth());
        okBtn->setSizePolicy(sizePolicy);
        okBtn->setMinimumSize(QSize(300, 100));
        okBtn->setMaximumSize(QSize(300, 100));
        QFont font2;
        font2.setPointSize(18);
        okBtn->setFont(font2);
        okBtn->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: red;"));

        verticalLayout->addWidget(okBtn, 0, Qt::AlignHCenter);

        cancelBtn = new QPushButton(CustomAmount);
        cancelBtn->setObjectName(QString::fromUtf8("cancelBtn"));
        sizePolicy.setHeightForWidth(cancelBtn->sizePolicy().hasHeightForWidth());
        cancelBtn->setSizePolicy(sizePolicy);
        cancelBtn->setMinimumSize(QSize(300, 100));
        cancelBtn->setMaximumSize(QSize(300, 100));
        cancelBtn->setFont(font2);
        cancelBtn->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: red;"));

        verticalLayout->addWidget(cancelBtn, 0, Qt::AlignHCenter);

        errorLbl = new QLabel(CustomAmount);
        errorLbl->setObjectName(QString::fromUtf8("errorLbl"));
        QFont font3;
        font3.setPointSize(12);
        errorLbl->setFont(font3);

        verticalLayout->addWidget(errorLbl, 0, Qt::AlignHCenter);

        label_2 = new QLabel(CustomAmount);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);


        retranslateUi(CustomAmount);

        QMetaObject::connectSlotsByName(CustomAmount);
    } // setupUi

    void retranslateUi(QWidget *CustomAmount)
    {
        CustomAmount->setWindowTitle(QCoreApplication::translate("CustomAmount", "ATM", nullptr));
        imgLbl->setText(QString());
        nameLbl->setText(QCoreApplication::translate("CustomAmount", "Set Amount", nullptr));
        label->setText(QString());
        customVal->setSuffix(QCoreApplication::translate("CustomAmount", "\342\202\254", nullptr));
        label_3->setText(QString());
        okBtn->setText(QCoreApplication::translate("CustomAmount", "OK", nullptr));
        cancelBtn->setText(QCoreApplication::translate("CustomAmount", "Cancel", nullptr));
        errorLbl->setText(QCoreApplication::translate("CustomAmount", "Invalid amount, the value must be between 5 and 2000\342\202\254, every 5\342\202\254 minimum.", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CustomAmount: public Ui_CustomAmount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMAMOUNT_H

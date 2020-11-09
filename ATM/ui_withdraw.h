/********************************************************************************
** Form generated from reading UI file 'withdraw.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WITHDRAW_H
#define UI_WITHDRAW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Withdraw
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *label;
    QPushButton *cancelBtn;

    void setupUi(QWidget *Withdraw)
    {
        if (Withdraw->objectName().isEmpty())
            Withdraw->setObjectName(QStringLiteral("Withdraw"));
        Withdraw->resize(741, 682);
        Withdraw->setStyleSheet(QStringLiteral("background-color:white;"));
        pushButton = new QPushButton(Withdraw);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(60, 160, 181, 81));
        QFont font;
        font.setPointSize(18);
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(Withdraw);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(500, 160, 181, 81));
        pushButton_2->setFont(font);
        pushButton_3 = new QPushButton(Withdraw);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(60, 290, 181, 81));
        pushButton_3->setFont(font);
        pushButton_4 = new QPushButton(Withdraw);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(500, 290, 181, 81));
        QFont font1;
        font1.setPointSize(16);
        pushButton_4->setFont(font1);
        pushButton_5 = new QPushButton(Withdraw);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(60, 420, 181, 81));
        pushButton_5->setFont(font);
        label = new QLabel(Withdraw);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(290, 50, 161, 51));
        label->setFont(font);
        cancelBtn = new QPushButton(Withdraw);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));
        cancelBtn->setGeometry(QRect(500, 420, 181, 81));
        QFont font2;
        font2.setPointSize(12);
        cancelBtn->setFont(font2);

        retranslateUi(Withdraw);

        QMetaObject::connectSlotsByName(Withdraw);
    } // setupUi

    void retranslateUi(QWidget *Withdraw)
    {
        Withdraw->setWindowTitle(QApplication::translate("Withdraw", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Withdraw", "20\342\202\254", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Withdraw", "100\342\202\254", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Withdraw", "40\342\202\254", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("Withdraw", "Other Amount", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("Withdraw", "50\342\202\254", Q_NULLPTR));
        label->setText(QApplication::translate("Withdraw", "Withdrawal", Q_NULLPTR));
        cancelBtn->setText(QApplication::translate("Withdraw", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Withdraw: public Ui_Withdraw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WITHDRAW_H

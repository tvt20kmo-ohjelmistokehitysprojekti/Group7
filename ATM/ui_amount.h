/********************************************************************************
** Form generated from reading UI file 'amount.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AMOUNT_H
#define UI_AMOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_amount
{
public:
    QLabel *label;
    QPushButton *okBtn;
    QLineEdit *amountBox;
    QPushButton *cancelBtn;

    void setupUi(QWidget *amount)
    {
        if (amount->objectName().isEmpty())
            amount->setObjectName(QStringLiteral("amount"));
        amount->resize(741, 681);
        amount->setStyleSheet(QStringLiteral("background-color: white;"));
        label = new QLabel(amount);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(200, 210, 171, 41));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        okBtn = new QPushButton(amount);
        okBtn->setObjectName(QStringLiteral("okBtn"));
        okBtn->setGeometry(QRect(200, 370, 171, 71));
        okBtn->setFont(font);
        amountBox = new QLineEdit(amount);
        amountBox->setObjectName(QStringLiteral("amountBox"));
        amountBox->setGeometry(QRect(200, 260, 351, 91));
        amountBox->setFont(font);
        amountBox->setAlignment(Qt::AlignCenter);
        cancelBtn = new QPushButton(amount);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));
        cancelBtn->setGeometry(QRect(380, 370, 171, 71));
        cancelBtn->setFont(font);

        retranslateUi(amount);

        QMetaObject::connectSlotsByName(amount);
    } // setupUi

    void retranslateUi(QWidget *amount)
    {
        amount->setWindowTitle(QApplication::translate("amount", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("amount", "Set Amount", Q_NULLPTR));
        okBtn->setText(QApplication::translate("amount", "OK", Q_NULLPTR));
        cancelBtn->setText(QApplication::translate("amount", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class amount: public Ui_amount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AMOUNT_H

#-------------------------------------------------
#
# Project created by QtCreator 2020-10-29T14:19:53
#
#-------------------------------------------------

QT       += core gui

QT += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ATM
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    creditdebit.cpp \
    balance.cpp \
    transactions.cpp \
    AccountMenu.cpp \
    withdrawAmount.cpp \
    confirmwithdraw.cpp \
    customamount.cpp

HEADERS += \
        mainwindow.h \
    creditdebit.h \
    balance.h \
    transactions.h \
    AccountMenu.h \
    withdrawAmount.h \
    confirmwithdraw.h \
    customamount.h

FORMS += \
    mainwindow.ui \
    creditdebit.ui \
    balance.ui \
    transactions.ui \
    AccountMenu.ui \
    withdrawAmount.ui \
    confirmwithdraw.ui \
    customamount.ui

/****************************************************************************
** Meta object code from reading C++ file 'withdrawAmount.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../Desktop/ATM_Projekti/ATM/ATM/withdrawAmount.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'withdrawAmount.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Withdraw_t {
    QByteArrayData data[10];
    char stringdata0[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Withdraw_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Withdraw_t qt_meta_stringdata_Withdraw = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Withdraw"
QT_MOC_LITERAL(1, 9, 16), // "SelectAndConfirm"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 6), // "amount"
QT_MOC_LITERAL(4, 34, 20), // "on_cancelBtn_clicked"
QT_MOC_LITERAL(5, 55, 20), // "on_twentyBtn_clicked"
QT_MOC_LITERAL(6, 76, 20), // "on_fourtyBtn_clicked"
QT_MOC_LITERAL(7, 97, 19), // "on_fiftyBtn_clicked"
QT_MOC_LITERAL(8, 117, 21), // "on_hundredBtn_clicked"
QT_MOC_LITERAL(9, 139, 19) // "on_otherBtn_clicked"

    },
    "Withdraw\0SelectAndConfirm\0\0amount\0"
    "on_cancelBtn_clicked\0on_twentyBtn_clicked\0"
    "on_fourtyBtn_clicked\0on_fiftyBtn_clicked\0"
    "on_hundredBtn_clicked\0on_otherBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Withdraw[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x08 /* Private */,
       4,    0,   52,    2, 0x08 /* Private */,
       5,    0,   53,    2, 0x08 /* Private */,
       6,    0,   54,    2, 0x08 /* Private */,
       7,    0,   55,    2, 0x08 /* Private */,
       8,    0,   56,    2, 0x08 /* Private */,
       9,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Withdraw::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Withdraw *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SelectAndConfirm((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->on_cancelBtn_clicked(); break;
        case 2: _t->on_twentyBtn_clicked(); break;
        case 3: _t->on_fourtyBtn_clicked(); break;
        case 4: _t->on_fiftyBtn_clicked(); break;
        case 5: _t->on_hundredBtn_clicked(); break;
        case 6: _t->on_otherBtn_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Withdraw::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Withdraw.data,
    qt_meta_data_Withdraw,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Withdraw::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Withdraw::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Withdraw.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Withdraw::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

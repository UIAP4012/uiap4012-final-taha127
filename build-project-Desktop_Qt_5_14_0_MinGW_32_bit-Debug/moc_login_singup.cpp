/****************************************************************************
** Meta object code from reading C++ file 'login_singup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../project/login_singup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'login_singup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_login_singup_t {
    QByteArrayData data[12];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_login_singup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_login_singup_t qt_meta_stringdata_login_singup = {
    {
QT_MOC_LITERAL(0, 0, 12), // "login_singup"
QT_MOC_LITERAL(1, 13, 17), // "on_exit_triggered"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(4, 54, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(5, 78, 9), // "find_user"
QT_MOC_LITERAL(6, 88, 8), // "QString&"
QT_MOC_LITERAL(7, 97, 9), // "user_name"
QT_MOC_LITERAL(8, 107, 8), // "password"
QT_MOC_LITERAL(9, 116, 4), // "type"
QT_MOC_LITERAL(10, 121, 19), // "QPair<size_t,user>&"
QT_MOC_LITERAL(11, 141, 6) // "person"

    },
    "login_singup\0on_exit_triggered\0\0"
    "on_pushButton_clicked\0on_pushButton_2_clicked\0"
    "find_user\0QString&\0user_name\0password\0"
    "type\0QPair<size_t,user>&\0person"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_login_singup[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    4,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 10,    7,    8,    9,   11,

       0        // eod
};

void login_singup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<login_singup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_exit_triggered(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_pushButton_2_clicked(); break;
        case 3: { bool _r = _t->find_user((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QPair<size_t,user>(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject login_singup::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_login_singup.data,
    qt_meta_data_login_singup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *login_singup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *login_singup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_login_singup.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int login_singup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

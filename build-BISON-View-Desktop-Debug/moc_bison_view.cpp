/****************************************************************************
** Meta object code from reading C++ file 'bison_view.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../client/bison_view.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bison_view.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BISON_View_t {
    QByteArrayData data[18];
    char stringdata[332];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_BISON_View_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_BISON_View_t qt_meta_stringdata_BISON_View = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 11),
QT_MOC_LITERAL(2, 23, 0),
QT_MOC_LITERAL(3, 24, 11),
QT_MOC_LITERAL(4, 36, 9),
QT_MOC_LITERAL(5, 46, 8),
QT_MOC_LITERAL(6, 55, 30),
QT_MOC_LITERAL(7, 86, 34),
QT_MOC_LITERAL(8, 121, 28),
QT_MOC_LITERAL(9, 150, 13),
QT_MOC_LITERAL(10, 164, 19),
QT_MOC_LITERAL(11, 184, 31),
QT_MOC_LITERAL(12, 216, 5),
QT_MOC_LITERAL(13, 222, 29),
QT_MOC_LITERAL(14, 252, 17),
QT_MOC_LITERAL(15, 270, 13),
QT_MOC_LITERAL(16, 284, 17),
QT_MOC_LITERAL(17, 302, 28)
    },
    "BISON_View\0user_update\0\0user_logout\0"
    "new_image\0go_press\0on_actionWhat_s_this_triggered\0"
    "on_actionBISON_View_Help_triggered\0"
    "on_commandLinkButton_clicked\0broadcast_tcp\0"
    "process_pending_tcp\0on_comboBox_currentIndexChanged\0"
    "index\0on_actionSet_Server_triggered\0"
    "connect_to_server\0timeToRefresh\0"
    "server_disconnect\0image_processing_button_push\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BISON_View[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06,
       3,    1,   92,    2, 0x06,
       4,    1,   95,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       5,    0,   98,    2, 0x08,
       6,    0,   99,    2, 0x08,
       7,    0,  100,    2, 0x08,
       8,    0,  101,    2, 0x08,
       9,    0,  102,    2, 0x08,
      10,    0,  103,    2, 0x08,
      11,    1,  104,    2, 0x08,
      13,    0,  107,    2, 0x08,
      14,    1,  108,    2, 0x08,
      15,    0,  111,    2, 0x08,
      16,    0,  112,    2, 0x08,
      17,    1,  113,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void BISON_View::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BISON_View *_t = static_cast<BISON_View *>(_o);
        switch (_id) {
        case 0: _t->user_update((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->user_logout((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->new_image((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->go_press(); break;
        case 4: _t->on_actionWhat_s_this_triggered(); break;
        case 5: _t->on_actionBISON_View_Help_triggered(); break;
        case 6: _t->on_commandLinkButton_clicked(); break;
        case 7: _t->broadcast_tcp(); break;
        case 8: _t->process_pending_tcp(); break;
        case 9: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_actionSet_Server_triggered(); break;
        case 11: _t->connect_to_server((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->timeToRefresh(); break;
        case 13: _t->server_disconnect(); break;
        case 14: _t->image_processing_button_push((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BISON_View::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BISON_View::user_update)) {
                *result = 0;
            }
        }
        {
            typedef void (BISON_View::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BISON_View::user_logout)) {
                *result = 1;
            }
        }
        {
            typedef void (BISON_View::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BISON_View::new_image)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject BISON_View::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_BISON_View.data,
      qt_meta_data_BISON_View,  qt_static_metacall, 0, 0}
};


const QMetaObject *BISON_View::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BISON_View::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BISON_View.stringdata))
        return static_cast<void*>(const_cast< BISON_View*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int BISON_View::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void BISON_View::user_update(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BISON_View::user_logout(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BISON_View::new_image(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE

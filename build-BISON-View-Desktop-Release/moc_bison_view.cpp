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
    QByteArrayData data[12];
    char stringdata[234];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_BISON_View_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_BISON_View_t qt_meta_stringdata_BISON_View = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 8),
QT_MOC_LITERAL(2, 20, 0),
QT_MOC_LITERAL(3, 21, 30),
QT_MOC_LITERAL(4, 52, 34),
QT_MOC_LITERAL(5, 87, 28),
QT_MOC_LITERAL(6, 116, 18),
QT_MOC_LITERAL(7, 135, 25),
QT_MOC_LITERAL(8, 161, 13),
QT_MOC_LITERAL(9, 175, 19),
QT_MOC_LITERAL(10, 195, 31),
QT_MOC_LITERAL(11, 227, 5)
    },
    "BISON_View\0go_press\0\0"
    "on_actionWhat_s_this_triggered\0"
    "on_actionBISON_View_Help_triggered\0"
    "on_commandLinkButton_clicked\0"
    "broadcast_datagram\0process_pending_datagrams\0"
    "broadcast_tcp\0process_pending_tcp\0"
    "on_comboBox_currentIndexChanged\0index\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BISON_View[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08,
       3,    0,   60,    2, 0x08,
       4,    0,   61,    2, 0x08,
       5,    0,   62,    2, 0x08,
       6,    0,   63,    2, 0x08,
       7,    0,   64,    2, 0x08,
       8,    0,   65,    2, 0x08,
       9,    0,   66,    2, 0x08,
      10,    1,   67,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,

       0        // eod
};

void BISON_View::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BISON_View *_t = static_cast<BISON_View *>(_o);
        switch (_id) {
        case 0: _t->go_press(); break;
        case 1: _t->on_actionWhat_s_this_triggered(); break;
        case 2: _t->on_actionBISON_View_Help_triggered(); break;
        case 3: _t->on_commandLinkButton_clicked(); break;
        case 4: _t->broadcast_datagram(); break;
        case 5: _t->process_pending_datagrams(); break;
        case 6: _t->broadcast_tcp(); break;
        case 7: _t->process_pending_tcp(); break;
        case 8: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
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
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

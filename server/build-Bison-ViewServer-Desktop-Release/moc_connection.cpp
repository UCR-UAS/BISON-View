/****************************************************************************
** Meta object code from reading C++ file 'connection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Bison-ViewServer/connection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'connection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_connection_t {
    QByteArrayData data[27];
    char stringdata[283];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_connection_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_connection_t qt_meta_stringdata_connection = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 10),
QT_MOC_LITERAL(2, 22, 0),
QT_MOC_LITERAL(3, 23, 5),
QT_MOC_LITERAL(4, 29, 4),
QT_MOC_LITERAL(5, 34, 8),
QT_MOC_LITERAL(6, 43, 11),
QT_MOC_LITERAL(7, 55, 10),
QT_MOC_LITERAL(8, 66, 16),
QT_MOC_LITERAL(9, 83, 6),
QT_MOC_LITERAL(10, 90, 11),
QT_MOC_LITERAL(11, 102, 8),
QT_MOC_LITERAL(12, 111, 5),
QT_MOC_LITERAL(13, 117, 23),
QT_MOC_LITERAL(14, 141, 12),
QT_MOC_LITERAL(15, 154, 17),
QT_MOC_LITERAL(16, 172, 11),
QT_MOC_LITERAL(17, 184, 6),
QT_MOC_LITERAL(18, 191, 12),
QT_MOC_LITERAL(19, 204, 7),
QT_MOC_LITERAL(20, 212, 4),
QT_MOC_LITERAL(21, 217, 12),
QT_MOC_LITERAL(22, 230, 5),
QT_MOC_LITERAL(23, 236, 14),
QT_MOC_LITERAL(24, 251, 7),
QT_MOC_LITERAL(25, 259, 9),
QT_MOC_LITERAL(26, 269, 12)
    },
    "connection\0login_main\0\0uname\0pass\0"
    "sock_num\0logout_main\0user_index\0"
    "go_status_update\0status\0role_update\0"
    "new_role\0error\0QTcpSocket::SocketError\0"
    "socket_error\0client_disconnect\0"
    "connection*\0client\0info_request\0welcome\0"
    "sock\0login_listen\0index\0server_message\0"
    "message\0readyRead\0disconnected\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_connection[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   74,    2, 0x06,
       6,    1,   81,    2, 0x06,
       8,    2,   84,    2, 0x06,
      10,    2,   89,    2, 0x06,
      12,    1,   94,    2, 0x06,
      15,    1,   97,    2, 0x06,
      18,    1,  100,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
      19,    1,  103,    2, 0x0a,
      21,    2,  106,    2, 0x0a,
      23,    2,  111,    2, 0x0a,
      25,    0,  116,    2, 0x0a,
      26,    0,  117,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int,    3,    4,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    7,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    7,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, QMetaType::Int,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   20,   22,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   24,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void connection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        connection *_t = static_cast<connection *>(_o);
        switch (_id) {
        case 0: _t->login_main((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->logout_main((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->go_status_update((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->role_update((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->error((*reinterpret_cast< QTcpSocket::SocketError(*)>(_a[1]))); break;
        case 5: _t->client_disconnect((*reinterpret_cast< connection*(*)>(_a[1]))); break;
        case 6: _t->info_request((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->welcome((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->login_listen((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->server_message((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->readyRead(); break;
        case 11: _t->disconnected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< connection* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (connection::*_t)(QString , QString , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&connection::login_main)) {
                *result = 0;
            }
        }
        {
            typedef void (connection::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&connection::logout_main)) {
                *result = 1;
            }
        }
        {
            typedef void (connection::*_t)(int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&connection::go_status_update)) {
                *result = 2;
            }
        }
        {
            typedef void (connection::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&connection::role_update)) {
                *result = 3;
            }
        }
        {
            typedef void (connection::*_t)(QTcpSocket::SocketError );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&connection::error)) {
                *result = 4;
            }
        }
        {
            typedef void (connection::*_t)(connection * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&connection::client_disconnect)) {
                *result = 5;
            }
        }
        {
            typedef void (connection::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&connection::info_request)) {
                *result = 6;
            }
        }
    }
}

const QMetaObject connection::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_connection.data,
      qt_meta_data_connection,  qt_static_metacall, 0, 0}
};


const QMetaObject *connection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *connection::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_connection.stringdata))
        return static_cast<void*>(const_cast< connection*>(this));
    return QObject::qt_metacast(_clname);
}

int connection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void connection::login_main(QString _t1, QString _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void connection::logout_main(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void connection::go_status_update(int _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void connection::role_update(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void connection::error(QTcpSocket::SocketError _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void connection::client_disconnect(connection * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void connection::info_request(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE

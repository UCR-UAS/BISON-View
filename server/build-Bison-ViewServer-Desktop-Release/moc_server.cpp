/****************************************************************************
** Meta object code from reading C++ file 'server.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Bison-ViewServer/server.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'server.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Server_t {
    QByteArrayData data[23];
    char stringdata[208];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Server_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Server_t qt_meta_stringdata_Server = {
    {
QT_MOC_LITERAL(0, 0, 6),
QT_MOC_LITERAL(1, 7, 14),
QT_MOC_LITERAL(2, 22, 0),
QT_MOC_LITERAL(3, 23, 8),
QT_MOC_LITERAL(4, 32, 5),
QT_MOC_LITERAL(5, 38, 14),
QT_MOC_LITERAL(6, 53, 7),
QT_MOC_LITERAL(7, 61, 9),
QT_MOC_LITERAL(8, 71, 7),
QT_MOC_LITERAL(9, 79, 4),
QT_MOC_LITERAL(10, 84, 5),
QT_MOC_LITERAL(11, 90, 5),
QT_MOC_LITERAL(12, 96, 4),
QT_MOC_LITERAL(13, 101, 6),
QT_MOC_LITERAL(14, 108, 10),
QT_MOC_LITERAL(15, 119, 9),
QT_MOC_LITERAL(16, 129, 6),
QT_MOC_LITERAL(17, 136, 11),
QT_MOC_LITERAL(18, 148, 8),
QT_MOC_LITERAL(19, 157, 17),
QT_MOC_LITERAL(20, 175, 11),
QT_MOC_LITERAL(21, 187, 6),
QT_MOC_LITERAL(22, 194, 12)
    },
    "Server\0login_response\0\0sock_num\0index\0"
    "server_message\0message\0user_info\0"
    "welcome\0sock\0login\0uname\0pass\0logout\0"
    "user_index\0go_change\0status\0role_change\0"
    "new_role\0client_disconnect\0connection*\0"
    "client\0info_request\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Server[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x06,
       5,    2,   69,    2, 0x06,
       7,    2,   74,    2, 0x06,
       8,    1,   79,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
      10,    3,   82,    2, 0x0a,
      13,    1,   89,    2, 0x0a,
      15,    2,   92,    2, 0x0a,
      17,    2,   97,    2, 0x0a,
      19,    1,  102,    2, 0x0a,
      22,    1,  105,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    6,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    6,    3,
    QMetaType::Void, QMetaType::Int,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int,   11,   12,    3,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   14,   16,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   14,   18,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void Server::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Server *_t = static_cast<Server *>(_o);
        switch (_id) {
        case 0: _t->login_response((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->server_message((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->user_info((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->welcome((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->login((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->logout((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->go_change((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->role_change((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->client_disconnect((*reinterpret_cast< connection*(*)>(_a[1]))); break;
        case 9: _t->info_request((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
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
            typedef void (Server::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Server::login_response)) {
                *result = 0;
            }
        }
        {
            typedef void (Server::*_t)(QString , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Server::server_message)) {
                *result = 1;
            }
        }
        {
            typedef void (Server::*_t)(QString , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Server::user_info)) {
                *result = 2;
            }
        }
        {
            typedef void (Server::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Server::welcome)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject Server::staticMetaObject = {
    { &QTcpServer::staticMetaObject, qt_meta_stringdata_Server.data,
      qt_meta_data_Server,  qt_static_metacall, 0, 0}
};


const QMetaObject *Server::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Server::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Server.stringdata))
        return static_cast<void*>(const_cast< Server*>(this));
    return QTcpServer::qt_metacast(_clname);
}

int Server::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void Server::login_response(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Server::server_message(QString _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Server::user_info(QString _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Server::welcome(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE

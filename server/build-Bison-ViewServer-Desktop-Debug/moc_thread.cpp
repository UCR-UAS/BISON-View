/****************************************************************************
** Meta object code from reading C++ file 'thread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Bison-ViewServer/thread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'thread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Thread_t {
    QByteArrayData data[20];
    char stringdata[200];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Thread_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Thread_t qt_meta_stringdata_Thread = {
    {
QT_MOC_LITERAL(0, 0, 6),
QT_MOC_LITERAL(1, 7, 10),
QT_MOC_LITERAL(2, 18, 0),
QT_MOC_LITERAL(3, 19, 5),
QT_MOC_LITERAL(4, 25, 4),
QT_MOC_LITERAL(5, 30, 8),
QT_MOC_LITERAL(6, 39, 11),
QT_MOC_LITERAL(7, 51, 10),
QT_MOC_LITERAL(8, 62, 16),
QT_MOC_LITERAL(9, 79, 6),
QT_MOC_LITERAL(10, 86, 5),
QT_MOC_LITERAL(11, 92, 23),
QT_MOC_LITERAL(12, 116, 12),
QT_MOC_LITERAL(13, 129, 12),
QT_MOC_LITERAL(14, 142, 4),
QT_MOC_LITERAL(15, 147, 5),
QT_MOC_LITERAL(16, 153, 14),
QT_MOC_LITERAL(17, 168, 7),
QT_MOC_LITERAL(18, 176, 9),
QT_MOC_LITERAL(19, 186, 12)
    },
    "Thread\0login_main\0\0uname\0pass\0sock_num\0"
    "logout_main\0user_index\0go_status_update\0"
    "status\0error\0QTcpSocket::SocketError\0"
    "socket_error\0login_listen\0sock\0index\0"
    "server_message\0message\0readyRead\0"
    "disconnected\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Thread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   54,    2, 0x06,
       6,    1,   61,    2, 0x06,
       8,    2,   64,    2, 0x06,
      10,    1,   69,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
      13,    2,   72,    2, 0x0a,
      16,    1,   77,    2, 0x0a,
      18,    0,   80,    2, 0x0a,
      19,    0,   81,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int,    3,    4,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    7,    9,
    QMetaType::Void, 0x80000000 | 11,   12,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   14,   15,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Thread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Thread *_t = static_cast<Thread *>(_o);
        switch (_id) {
        case 0: _t->login_main((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->logout_main((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->go_status_update((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->error((*reinterpret_cast< QTcpSocket::SocketError(*)>(_a[1]))); break;
        case 4: _t->login_listen((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->server_message((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->readyRead(); break;
        case 7: _t->disconnected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Thread::*_t)(QString , QString , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Thread::login_main)) {
                *result = 0;
            }
        }
        {
            typedef void (Thread::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Thread::logout_main)) {
                *result = 1;
            }
        }
        {
            typedef void (Thread::*_t)(int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Thread::go_status_update)) {
                *result = 2;
            }
        }
        {
            typedef void (Thread::*_t)(QTcpSocket::SocketError );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Thread::error)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject Thread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_Thread.data,
      qt_meta_data_Thread,  qt_static_metacall, 0, 0}
};


const QMetaObject *Thread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Thread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Thread.stringdata))
        return static_cast<void*>(const_cast< Thread*>(this));
    return QThread::qt_metacast(_clname);
}

int Thread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Thread::login_main(QString _t1, QString _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Thread::logout_main(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Thread::go_status_update(int _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Thread::error(QTcpSocket::SocketError _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE

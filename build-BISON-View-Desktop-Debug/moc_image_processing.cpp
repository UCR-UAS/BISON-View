/****************************************************************************
** Meta object code from reading C++ file 'image_processing.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../client/image_processing.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'image_processing.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_image_processing_t {
    QByteArrayData data[10];
    char stringdata[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_image_processing_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_image_processing_t qt_meta_stringdata_image_processing = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 13),
QT_MOC_LITERAL(2, 31, 0),
QT_MOC_LITERAL(3, 32, 9),
QT_MOC_LITERAL(4, 42, 15),
QT_MOC_LITERAL(5, 58, 15),
QT_MOC_LITERAL(6, 74, 15),
QT_MOC_LITERAL(7, 90, 16),
QT_MOC_LITERAL(8, 107, 18),
QT_MOC_LITERAL(9, 126, 16)
    },
    "image_processing\0button_pushed\0\0"
    "new_image\0on_last_clicked\0on_prev_clicked\0"
    "on_next_clicked\0on_first_clicked\0"
    "on_confirm_clicked\0on_trash_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_image_processing[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       3,    1,   57,    2, 0x08,
       4,    0,   60,    2, 0x08,
       5,    0,   61,    2, 0x08,
       6,    0,   62,    2, 0x08,
       7,    0,   63,    2, 0x08,
       8,    0,   64,    2, 0x08,
       9,    0,   65,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void image_processing::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        image_processing *_t = static_cast<image_processing *>(_o);
        switch (_id) {
        case 0: _t->button_pushed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->new_image((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_last_clicked(); break;
        case 3: _t->on_prev_clicked(); break;
        case 4: _t->on_next_clicked(); break;
        case 5: _t->on_first_clicked(); break;
        case 6: _t->on_confirm_clicked(); break;
        case 7: _t->on_trash_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (image_processing::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&image_processing::button_pushed)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject image_processing::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_image_processing.data,
      qt_meta_data_image_processing,  qt_static_metacall, 0, 0}
};


const QMetaObject *image_processing::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *image_processing::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_image_processing.stringdata))
        return static_cast<void*>(const_cast< image_processing*>(this));
    return QWidget::qt_metacast(_clname);
}

int image_processing::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void image_processing::button_pushed(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE

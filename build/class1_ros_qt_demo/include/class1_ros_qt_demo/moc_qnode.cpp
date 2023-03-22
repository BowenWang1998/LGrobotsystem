/****************************************************************************
** Meta object code from reading C++ file 'qnode.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/class1_ros_qt_demo/include/class1_ros_qt_demo/qnode.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qnode.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_class1_ros_qt_demo__QNode_t {
    QByteArrayData data[10];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_class1_ros_qt_demo__QNode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_class1_ros_qt_demo__QNode_t qt_meta_stringdata_class1_ros_qt_demo__QNode = {
    {
QT_MOC_LITERAL(0, 0, 25), // "class1_ros_qt_demo::QNode"
QT_MOC_LITERAL(1, 26, 14), // "loggingUpdated"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 11), // "rosShutdown"
QT_MOC_LITERAL(4, 54, 13), // "imageUpdated1"
QT_MOC_LITERAL(5, 68, 5), // "image"
QT_MOC_LITERAL(6, 74, 13), // "imageUpdated2"
QT_MOC_LITERAL(7, 88, 13), // "imageUpdated3"
QT_MOC_LITERAL(8, 102, 13), // "imageUpdated4"
QT_MOC_LITERAL(9, 116, 9) // "image_val"

    },
    "class1_ros_qt_demo::QNode\0loggingUpdated\0"
    "\0rosShutdown\0imageUpdated1\0image\0"
    "imageUpdated2\0imageUpdated3\0imageUpdated4\0"
    "image_val"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_class1_ros_qt_demo__QNode[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    1,   51,    2, 0x06 /* Public */,
       6,    1,   54,    2, 0x06 /* Public */,
       7,    1,   57,    2, 0x06 /* Public */,
       8,    1,   60,    2, 0x06 /* Public */,
       9,    1,   63,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QImage,    5,
    QMetaType::Void, QMetaType::QImage,    5,
    QMetaType::Void, QMetaType::QImage,    5,
    QMetaType::Void, QMetaType::QImage,    5,
    QMetaType::Void, QMetaType::QImage,    5,

       0        // eod
};

void class1_ros_qt_demo::QNode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QNode *_t = static_cast<QNode *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loggingUpdated(); break;
        case 1: _t->rosShutdown(); break;
        case 2: _t->imageUpdated1((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 3: _t->imageUpdated2((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 4: _t->imageUpdated3((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 5: _t->imageUpdated4((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 6: _t->image_val((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QNode::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::loggingUpdated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QNode::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::rosShutdown)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QNode::*_t)(const QImage & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::imageUpdated1)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QNode::*_t)(const QImage & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::imageUpdated2)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QNode::*_t)(const QImage & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::imageUpdated3)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QNode::*_t)(const QImage & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::imageUpdated4)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QNode::*_t)(const QImage & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::image_val)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject class1_ros_qt_demo::QNode::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_class1_ros_qt_demo__QNode.data,
      qt_meta_data_class1_ros_qt_demo__QNode,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *class1_ros_qt_demo::QNode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *class1_ros_qt_demo::QNode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_class1_ros_qt_demo__QNode.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int class1_ros_qt_demo::QNode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void class1_ros_qt_demo::QNode::loggingUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void class1_ros_qt_demo::QNode::rosShutdown()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void class1_ros_qt_demo::QNode::imageUpdated1(const QImage & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void class1_ros_qt_demo::QNode::imageUpdated2(const QImage & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void class1_ros_qt_demo::QNode::imageUpdated3(const QImage & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void class1_ros_qt_demo::QNode::imageUpdated4(const QImage & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void class1_ros_qt_demo::QNode::image_val(const QImage & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

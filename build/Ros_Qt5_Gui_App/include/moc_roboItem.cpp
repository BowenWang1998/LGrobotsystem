/****************************************************************************
** Meta object code from reading C++ file 'roboItem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Ros_Qt5_Gui_App/include/roboItem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'roboItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ros_qt5_gui_app__roboItem_t {
    QByteArrayData data[16];
    char stringdata0[201];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ros_qt5_gui_app__roboItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ros_qt5_gui_app__roboItem_t qt_meta_stringdata_ros_qt5_gui_app__roboItem = {
    {
QT_MOC_LITERAL(0, 0, 25), // "ros_qt5_gui_app::roboItem"
QT_MOC_LITERAL(1, 26, 9), // "cursorPos"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 15), // "signalPub2DPose"
QT_MOC_LITERAL(4, 53, 15), // "signalPub2DGoal"
QT_MOC_LITERAL(5, 69, 9), // "paintMaps"
QT_MOC_LITERAL(6, 79, 3), // "map"
QT_MOC_LITERAL(7, 83, 12), // "paintRoboPos"
QT_MOC_LITERAL(8, 96, 9), // "RobotPose"
QT_MOC_LITERAL(9, 106, 3), // "pos"
QT_MOC_LITERAL(10, 110, 10), // "paintImage"
QT_MOC_LITERAL(11, 121, 16), // "paintPlannerPath"
QT_MOC_LITERAL(12, 138, 14), // "paintLaserScan"
QT_MOC_LITERAL(13, 153, 13), // "slot_set2DPos"
QT_MOC_LITERAL(14, 167, 14), // "slot_set2DGoal"
QT_MOC_LITERAL(15, 182, 18) // "slot_setMoveCamera"

    },
    "ros_qt5_gui_app::roboItem\0cursorPos\0"
    "\0signalPub2DPose\0signalPub2DGoal\0"
    "paintMaps\0map\0paintRoboPos\0RobotPose\0"
    "pos\0paintImage\0paintPlannerPath\0"
    "paintLaserScan\0slot_set2DPos\0"
    "slot_set2DGoal\0slot_setMoveCamera"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ros_qt5_gui_app__roboItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       3,    2,   72,    2, 0x06 /* Public */,
       4,    2,   77,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   82,    2, 0x0a /* Public */,
       7,    1,   85,    2, 0x0a /* Public */,
      10,    2,   88,    2, 0x0a /* Public */,
      11,    1,   93,    2, 0x0a /* Public */,
      12,    1,   96,    2, 0x0a /* Public */,
      13,    0,   99,    2, 0x0a /* Public */,
      14,    0,  100,    2, 0x0a /* Public */,
      15,    0,  101,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPointF,    2,
    QMetaType::Void, QMetaType::QPointF, QMetaType::QPointF,    2,    2,
    QMetaType::Void, QMetaType::QPointF, QMetaType::QPointF,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QImage,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::QImage,    2,    2,
    QMetaType::Void, QMetaType::QPolygonF,    2,
    QMetaType::Void, QMetaType::QPolygonF,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ros_qt5_gui_app::roboItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        roboItem *_t = static_cast<roboItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cursorPos((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 1: _t->signalPub2DPose((*reinterpret_cast< QPointF(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2]))); break;
        case 2: _t->signalPub2DGoal((*reinterpret_cast< QPointF(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2]))); break;
        case 3: _t->paintMaps((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 4: _t->paintRoboPos((*reinterpret_cast< RobotPose(*)>(_a[1]))); break;
        case 5: _t->paintImage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QImage(*)>(_a[2]))); break;
        case 6: _t->paintPlannerPath((*reinterpret_cast< QPolygonF(*)>(_a[1]))); break;
        case 7: _t->paintLaserScan((*reinterpret_cast< QPolygonF(*)>(_a[1]))); break;
        case 8: _t->slot_set2DPos(); break;
        case 9: _t->slot_set2DGoal(); break;
        case 10: _t->slot_setMoveCamera(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (roboItem::*_t)(QPointF );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&roboItem::cursorPos)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (roboItem::*_t)(QPointF , QPointF );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&roboItem::signalPub2DPose)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (roboItem::*_t)(QPointF , QPointF );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&roboItem::signalPub2DGoal)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject ros_qt5_gui_app::roboItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ros_qt5_gui_app__roboItem.data,
      qt_meta_data_ros_qt5_gui_app__roboItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ros_qt5_gui_app::roboItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ros_qt5_gui_app::roboItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ros_qt5_gui_app__roboItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QGraphicsItem"))
        return static_cast< QGraphicsItem*>(this);
    return QObject::qt_metacast(_clname);
}

int ros_qt5_gui_app::roboItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void ros_qt5_gui_app::roboItem::cursorPos(QPointF _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ros_qt5_gui_app::roboItem::signalPub2DPose(QPointF _t1, QPointF _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ros_qt5_gui_app::roboItem::signalPub2DGoal(QPointF _t1, QPointF _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

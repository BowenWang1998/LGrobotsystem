/****************************************************************************
** Meta object code from reading C++ file 'qnode.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Ros_Qt5_Gui_App/include/qnode.hpp"
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
struct qt_meta_stringdata_ros_qt5_gui_app__QNode_t {
    QByteArrayData data[26];
    char stringdata0[277];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ros_qt5_gui_app__QNode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ros_qt5_gui_app__QNode_t qt_meta_stringdata_ros_qt5_gui_app__QNode = {
    {
QT_MOC_LITERAL(0, 0, 22), // "ros_qt5_gui_app::QNode"
QT_MOC_LITERAL(1, 23, 14), // "loggingUpdated"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 11), // "rosShutdown"
QT_MOC_LITERAL(4, 51, 7), // "speed_x"
QT_MOC_LITERAL(5, 59, 1), // "x"
QT_MOC_LITERAL(6, 61, 7), // "speed_y"
QT_MOC_LITERAL(7, 69, 1), // "y"
QT_MOC_LITERAL(8, 71, 12), // "batteryState"
QT_MOC_LITERAL(9, 84, 25), // "sensor_msgs::BatteryState"
QT_MOC_LITERAL(10, 110, 15), // "Master_shutdown"
QT_MOC_LITERAL(11, 126, 10), // "Show_image"
QT_MOC_LITERAL(12, 137, 14), // "updateRoboPose"
QT_MOC_LITERAL(13, 152, 9), // "RobotPose"
QT_MOC_LITERAL(14, 162, 3), // "pos"
QT_MOC_LITERAL(15, 166, 9), // "updateMap"
QT_MOC_LITERAL(16, 176, 3), // "map"
QT_MOC_LITERAL(17, 180, 11), // "plannerPath"
QT_MOC_LITERAL(18, 192, 4), // "path"
QT_MOC_LITERAL(19, 197, 15), // "updateLaserScan"
QT_MOC_LITERAL(20, 213, 6), // "points"
QT_MOC_LITERAL(21, 220, 17), // "updateRobotStatus"
QT_MOC_LITERAL(22, 238, 11), // "RobotStatus"
QT_MOC_LITERAL(23, 250, 6), // "status"
QT_MOC_LITERAL(24, 257, 9), // "pub2DPose"
QT_MOC_LITERAL(25, 267, 9) // "pub2DGoal"

    },
    "ros_qt5_gui_app::QNode\0loggingUpdated\0"
    "\0rosShutdown\0speed_x\0x\0speed_y\0y\0"
    "batteryState\0sensor_msgs::BatteryState\0"
    "Master_shutdown\0Show_image\0updateRoboPose\0"
    "RobotPose\0pos\0updateMap\0map\0plannerPath\0"
    "path\0updateLaserScan\0points\0"
    "updateRobotStatus\0RobotStatus\0status\0"
    "pub2DPose\0pub2DGoal"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ros_qt5_gui_app__QNode[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    0,   85,    2, 0x06 /* Public */,
       4,    1,   86,    2, 0x06 /* Public */,
       6,    1,   89,    2, 0x06 /* Public */,
       8,    1,   92,    2, 0x06 /* Public */,
      10,    0,   95,    2, 0x06 /* Public */,
      11,    2,   96,    2, 0x06 /* Public */,
      12,    1,  101,    2, 0x06 /* Public */,
      15,    1,  104,    2, 0x06 /* Public */,
      17,    1,  107,    2, 0x06 /* Public */,
      19,    1,  110,    2, 0x06 /* Public */,
      21,    1,  113,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      24,    2,  116,    2, 0x0a /* Public */,
      25,    2,  121,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QImage,    2,    2,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::QImage,   16,
    QMetaType::Void, QMetaType::QPolygonF,   18,
    QMetaType::Void, QMetaType::QPolygonF,   20,
    QMetaType::Void, 0x80000000 | 22,   23,

 // slots: parameters
    QMetaType::Void, QMetaType::QPointF, QMetaType::QPointF,    2,    2,
    QMetaType::Void, QMetaType::QPointF, QMetaType::QPointF,    2,    2,

       0        // eod
};

void ros_qt5_gui_app::QNode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QNode *_t = static_cast<QNode *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loggingUpdated(); break;
        case 1: _t->rosShutdown(); break;
        case 2: _t->speed_x((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->speed_y((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->batteryState((*reinterpret_cast< sensor_msgs::BatteryState(*)>(_a[1]))); break;
        case 5: _t->Master_shutdown(); break;
        case 6: _t->Show_image((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QImage(*)>(_a[2]))); break;
        case 7: _t->updateRoboPose((*reinterpret_cast< RobotPose(*)>(_a[1]))); break;
        case 8: _t->updateMap((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 9: _t->plannerPath((*reinterpret_cast< QPolygonF(*)>(_a[1]))); break;
        case 10: _t->updateLaserScan((*reinterpret_cast< QPolygonF(*)>(_a[1]))); break;
        case 11: _t->updateRobotStatus((*reinterpret_cast< RobotStatus(*)>(_a[1]))); break;
        case 12: _t->pub2DPose((*reinterpret_cast< QPointF(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2]))); break;
        case 13: _t->pub2DGoal((*reinterpret_cast< QPointF(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2]))); break;
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
            typedef void (QNode::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::speed_x)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QNode::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::speed_y)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QNode::*_t)(sensor_msgs::BatteryState );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::batteryState)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QNode::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::Master_shutdown)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QNode::*_t)(int , QImage );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::Show_image)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QNode::*_t)(RobotPose );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::updateRoboPose)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QNode::*_t)(QImage );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::updateMap)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QNode::*_t)(QPolygonF );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::plannerPath)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (QNode::*_t)(QPolygonF );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::updateLaserScan)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (QNode::*_t)(RobotStatus );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNode::updateRobotStatus)) {
                *result = 11;
                return;
            }
        }
    }
}

const QMetaObject ros_qt5_gui_app::QNode::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_ros_qt5_gui_app__QNode.data,
      qt_meta_data_ros_qt5_gui_app__QNode,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ros_qt5_gui_app::QNode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ros_qt5_gui_app::QNode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ros_qt5_gui_app__QNode.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int ros_qt5_gui_app::QNode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void ros_qt5_gui_app::QNode::loggingUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ros_qt5_gui_app::QNode::rosShutdown()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ros_qt5_gui_app::QNode::speed_x(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ros_qt5_gui_app::QNode::speed_y(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ros_qt5_gui_app::QNode::batteryState(sensor_msgs::BatteryState _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ros_qt5_gui_app::QNode::Master_shutdown()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ros_qt5_gui_app::QNode::Show_image(int _t1, QImage _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ros_qt5_gui_app::QNode::updateRoboPose(RobotPose _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void ros_qt5_gui_app::QNode::updateMap(QImage _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void ros_qt5_gui_app::QNode::plannerPath(QPolygonF _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void ros_qt5_gui_app::QNode::updateLaserScan(QPolygonF _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void ros_qt5_gui_app::QNode::updateRobotStatus(RobotStatus _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'main_window.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Ros_Qt5_Gui_App/include/main_window.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_window.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ros_qt5_gui_app__MainWindow_t {
    QByteArrayData data[48];
    char stringdata0[845];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ros_qt5_gui_app__MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ros_qt5_gui_app__MainWindow_t qt_meta_stringdata_ros_qt5_gui_app__MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 27), // "ros_qt5_gui_app::MainWindow"
QT_MOC_LITERAL(1, 28, 15), // "signalSet2DPose"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 15), // "signalSet2DGoal"
QT_MOC_LITERAL(4, 61, 19), // "signalSetMoveCamera"
QT_MOC_LITERAL(5, 81, 16), // "signalDisconnect"
QT_MOC_LITERAL(6, 98, 24), // "on_actionAbout_triggered"
QT_MOC_LITERAL(7, 123, 12), // "slot_speed_x"
QT_MOC_LITERAL(8, 136, 1), // "x"
QT_MOC_LITERAL(9, 138, 14), // "slot_speed_yaw"
QT_MOC_LITERAL(10, 153, 3), // "yaw"
QT_MOC_LITERAL(11, 157, 17), // "slot_batteryState"
QT_MOC_LITERAL(12, 175, 25), // "sensor_msgs::BatteryState"
QT_MOC_LITERAL(13, 201, 16), // "slot_rosShutdown"
QT_MOC_LITERAL(14, 218, 23), // "quick_cmds_check_change"
QT_MOC_LITERAL(15, 242, 10), // "cmd_output"
QT_MOC_LITERAL(16, 253, 16), // "cmd_error_output"
QT_MOC_LITERAL(17, 270, 17), // "refreashTopicList"
QT_MOC_LITERAL(18, 288, 17), // "updateLoggingView"
QT_MOC_LITERAL(19, 306, 23), // "Slider_raw_valueChanged"
QT_MOC_LITERAL(20, 330, 1), // "v"
QT_MOC_LITERAL(21, 332, 26), // "Slider_linear_valueChanged"
QT_MOC_LITERAL(22, 359, 5), // "value"
QT_MOC_LITERAL(23, 365, 16), // "slot_cmd_control"
QT_MOC_LITERAL(24, 382, 30), // "slot_tab_manage_currentChanged"
QT_MOC_LITERAL(25, 413, 30), // "slot_tab_Widget_currentChanged"
QT_MOC_LITERAL(26, 444, 15), // "slot_set_select"
QT_MOC_LITERAL(27, 460, 20), // "slot_move_camera_btn"
QT_MOC_LITERAL(28, 481, 18), // "slot_setting_frame"
QT_MOC_LITERAL(29, 500, 23), // "slot_set_mutil_goal_btn"
QT_MOC_LITERAL(30, 524, 17), // "slot_return_point"
QT_MOC_LITERAL(31, 542, 20), // "slot_position_change"
QT_MOC_LITERAL(32, 563, 13), // "quick_cmd_add"
QT_MOC_LITERAL(33, 577, 16), // "quick_cmd_remove"
QT_MOC_LITERAL(34, 594, 15), // "slot_show_image"
QT_MOC_LITERAL(35, 610, 16), // "slot_dis_connect"
QT_MOC_LITERAL(36, 627, 22), // "slot_hide_table_widget"
QT_MOC_LITERAL(37, 650, 18), // "slot_rockKeyChange"
QT_MOC_LITERAL(38, 669, 17), // "slot_closeWindows"
QT_MOC_LITERAL(39, 687, 15), // "slot_minWindows"
QT_MOC_LITERAL(40, 703, 15), // "slot_maxWindows"
QT_MOC_LITERAL(41, 719, 22), // "slot_chartTimerTimeout"
QT_MOC_LITERAL(42, 742, 23), // "slot_pubImageMapTimeOut"
QT_MOC_LITERAL(43, 766, 20), // "slot_updateCursorPos"
QT_MOC_LITERAL(44, 787, 3), // "pos"
QT_MOC_LITERAL(45, 791, 18), // "slot_changeMapType"
QT_MOC_LITERAL(46, 810, 22), // "slot_updateRobotStatus"
QT_MOC_LITERAL(47, 833, 11) // "RobotStatus"

    },
    "ros_qt5_gui_app::MainWindow\0signalSet2DPose\0"
    "\0signalSet2DGoal\0signalSetMoveCamera\0"
    "signalDisconnect\0on_actionAbout_triggered\0"
    "slot_speed_x\0x\0slot_speed_yaw\0yaw\0"
    "slot_batteryState\0sensor_msgs::BatteryState\0"
    "slot_rosShutdown\0quick_cmds_check_change\0"
    "cmd_output\0cmd_error_output\0"
    "refreashTopicList\0updateLoggingView\0"
    "Slider_raw_valueChanged\0v\0"
    "Slider_linear_valueChanged\0value\0"
    "slot_cmd_control\0slot_tab_manage_currentChanged\0"
    "slot_tab_Widget_currentChanged\0"
    "slot_set_select\0slot_move_camera_btn\0"
    "slot_setting_frame\0slot_set_mutil_goal_btn\0"
    "slot_return_point\0slot_position_change\0"
    "quick_cmd_add\0quick_cmd_remove\0"
    "slot_show_image\0slot_dis_connect\0"
    "slot_hide_table_widget\0slot_rockKeyChange\0"
    "slot_closeWindows\0slot_minWindows\0"
    "slot_maxWindows\0slot_chartTimerTimeout\0"
    "slot_pubImageMapTimeOut\0slot_updateCursorPos\0"
    "pos\0slot_changeMapType\0slot_updateRobotStatus\0"
    "RobotStatus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ros_qt5_gui_app__MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      39,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  209,    2, 0x06 /* Public */,
       3,    0,  210,    2, 0x06 /* Public */,
       4,    0,  211,    2, 0x06 /* Public */,
       5,    0,  212,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,  213,    2, 0x0a /* Public */,
       7,    1,  214,    2, 0x0a /* Public */,
       9,    1,  217,    2, 0x0a /* Public */,
      11,    1,  220,    2, 0x0a /* Public */,
      13,    0,  223,    2, 0x0a /* Public */,
      14,    1,  224,    2, 0x0a /* Public */,
      15,    0,  227,    2, 0x0a /* Public */,
      16,    0,  228,    2, 0x0a /* Public */,
      17,    0,  229,    2, 0x0a /* Public */,
      18,    0,  230,    2, 0x0a /* Public */,
      19,    1,  231,    2, 0x0a /* Public */,
      21,    1,  234,    2, 0x0a /* Public */,
      23,    0,  237,    2, 0x0a /* Public */,
      24,    1,  238,    2, 0x0a /* Public */,
      25,    1,  241,    2, 0x0a /* Public */,
      26,    0,  244,    2, 0x0a /* Public */,
      27,    0,  245,    2, 0x0a /* Public */,
      28,    0,  246,    2, 0x0a /* Public */,
      29,    0,  247,    2, 0x0a /* Public */,
      30,    0,  248,    2, 0x0a /* Public */,
      31,    5,  249,    2, 0x0a /* Public */,
      32,    0,  260,    2, 0x0a /* Public */,
      33,    0,  261,    2, 0x0a /* Public */,
      34,    2,  262,    2, 0x0a /* Public */,
      35,    0,  267,    2, 0x0a /* Public */,
      36,    0,  268,    2, 0x0a /* Public */,
      37,    1,  269,    2, 0x0a /* Public */,
      38,    0,  272,    2, 0x0a /* Public */,
      39,    0,  273,    2, 0x0a /* Public */,
      40,    0,  274,    2, 0x0a /* Public */,
      41,    0,  275,    2, 0x0a /* Public */,
      42,    0,  276,    2, 0x0a /* Public */,
      43,    1,  277,    2, 0x0a /* Public */,
      45,    1,  280,    2, 0x0a /* Public */,
      46,    1,  283,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void, QMetaType::Double,   10,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    2,    2,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QImage,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPointF,   44,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 47,    2,

       0        // eod
};

void ros_qt5_gui_app::MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalSet2DPose(); break;
        case 1: _t->signalSet2DGoal(); break;
        case 2: _t->signalSetMoveCamera(); break;
        case 3: _t->signalDisconnect(); break;
        case 4: _t->on_actionAbout_triggered(); break;
        case 5: _t->slot_speed_x((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->slot_speed_yaw((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->slot_batteryState((*reinterpret_cast< sensor_msgs::BatteryState(*)>(_a[1]))); break;
        case 8: _t->slot_rosShutdown(); break;
        case 9: _t->quick_cmds_check_change((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->cmd_output(); break;
        case 11: _t->cmd_error_output(); break;
        case 12: _t->refreashTopicList(); break;
        case 13: _t->updateLoggingView(); break;
        case 14: _t->Slider_raw_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->Slider_linear_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->slot_cmd_control(); break;
        case 17: _t->slot_tab_manage_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->slot_tab_Widget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->slot_set_select(); break;
        case 20: _t->slot_move_camera_btn(); break;
        case 21: _t->slot_setting_frame(); break;
        case 22: _t->slot_set_mutil_goal_btn(); break;
        case 23: _t->slot_return_point(); break;
        case 24: _t->slot_position_change((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5]))); break;
        case 25: _t->quick_cmd_add(); break;
        case 26: _t->quick_cmd_remove(); break;
        case 27: _t->slot_show_image((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QImage(*)>(_a[2]))); break;
        case 28: _t->slot_dis_connect(); break;
        case 29: _t->slot_hide_table_widget(); break;
        case 30: _t->slot_rockKeyChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: _t->slot_closeWindows(); break;
        case 32: _t->slot_minWindows(); break;
        case 33: _t->slot_maxWindows(); break;
        case 34: _t->slot_chartTimerTimeout(); break;
        case 35: _t->slot_pubImageMapTimeOut(); break;
        case 36: _t->slot_updateCursorPos((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 37: _t->slot_changeMapType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 38: _t->slot_updateRobotStatus((*reinterpret_cast< RobotStatus(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::signalSet2DPose)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::signalSet2DGoal)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::signalSetMoveCamera)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::signalDisconnect)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject ros_qt5_gui_app::MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ros_qt5_gui_app__MainWindow.data,
      qt_meta_data_ros_qt5_gui_app__MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ros_qt5_gui_app::MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ros_qt5_gui_app::MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ros_qt5_gui_app__MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int ros_qt5_gui_app::MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 39)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 39;
    }
    return _id;
}

// SIGNAL 0
void ros_qt5_gui_app::MainWindow::signalSet2DPose()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ros_qt5_gui_app::MainWindow::signalSet2DGoal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ros_qt5_gui_app::MainWindow::signalSetMoveCamera()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ros_qt5_gui_app::MainWindow::signalDisconnect()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

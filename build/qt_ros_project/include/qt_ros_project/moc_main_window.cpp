/****************************************************************************
** Meta object code from reading C++ file 'main_window.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/qt_ros_project/include/qt_ros_project/main_window.hpp"
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
struct qt_meta_stringdata_qt_ros_project__MainWindow_t {
    QByteArrayData data[14];
    char stringdata0[270];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qt_ros_project__MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qt_ros_project__MainWindow_t qt_meta_stringdata_qt_ros_project__MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 26), // "qt_ros_project::MainWindow"
QT_MOC_LITERAL(1, 27, 24), // "on_actionAbout_triggered"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 25), // "on_button_connect_clicked"
QT_MOC_LITERAL(4, 79, 5), // "check"
QT_MOC_LITERAL(5, 85, 40), // "on_checkbox_use_environment_s..."
QT_MOC_LITERAL(6, 126, 5), // "state"
QT_MOC_LITERAL(7, 132, 20), // "onLabelDoubleClicked"
QT_MOC_LITERAL(8, 153, 22), // "on_qrviz_doubleClicked"
QT_MOC_LITERAL(9, 176, 17), // "updateLoggingView"
QT_MOC_LITERAL(10, 194, 18), // "slot_update_image1"
QT_MOC_LITERAL(11, 213, 18), // "slot_update_image2"
QT_MOC_LITERAL(12, 232, 18), // "slot_update_image3"
QT_MOC_LITERAL(13, 251, 18) // "slot_update_image4"

    },
    "qt_ros_project::MainWindow\0"
    "on_actionAbout_triggered\0\0"
    "on_button_connect_clicked\0check\0"
    "on_checkbox_use_environment_stateChanged\0"
    "state\0onLabelDoubleClicked\0"
    "on_qrviz_doubleClicked\0updateLoggingView\0"
    "slot_update_image1\0slot_update_image2\0"
    "slot_update_image3\0slot_update_image4"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qt_ros_project__MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x0a /* Public */,
       3,    1,   65,    2, 0x0a /* Public */,
       5,    1,   68,    2, 0x0a /* Public */,
       7,    0,   71,    2, 0x0a /* Public */,
       8,    0,   72,    2, 0x0a /* Public */,
       9,    0,   73,    2, 0x0a /* Public */,
      10,    1,   74,    2, 0x0a /* Public */,
      11,    1,   77,    2, 0x0a /* Public */,
      12,    1,   80,    2, 0x0a /* Public */,
      13,    1,   83,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QImage,    2,
    QMetaType::Void, QMetaType::QImage,    2,
    QMetaType::Void, QMetaType::QImage,    2,
    QMetaType::Void, QMetaType::QImage,    2,

       0        // eod
};

void qt_ros_project::MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionAbout_triggered(); break;
        case 1: _t->on_button_connect_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_checkbox_use_environment_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onLabelDoubleClicked(); break;
        case 4: _t->on_qrviz_doubleClicked(); break;
        case 5: _t->updateLoggingView(); break;
        case 6: _t->slot_update_image1((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 7: _t->slot_update_image2((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 8: _t->slot_update_image3((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 9: _t->slot_update_image4((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject qt_ros_project::MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_qt_ros_project__MainWindow.data,
      qt_meta_data_qt_ros_project__MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qt_ros_project::MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qt_ros_project::MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qt_ros_project__MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int qt_ros_project::MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

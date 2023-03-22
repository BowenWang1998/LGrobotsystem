/****************************************************************************
** Meta object code from reading C++ file 'main_window.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/class1_ros_qt_demo/include/class1_ros_qt_demo/main_window.hpp"
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
struct qt_meta_stringdata_class1_ros_qt_demo__MainWindow_t {
    QByteArrayData data[15];
    char stringdata0[275];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_class1_ros_qt_demo__MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_class1_ros_qt_demo__MainWindow_t qt_meta_stringdata_class1_ros_qt_demo__MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 30), // "class1_ros_qt_demo::MainWindow"
QT_MOC_LITERAL(1, 31, 24), // "on_actionAbout_triggered"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 25), // "on_button_connect_clicked"
QT_MOC_LITERAL(4, 83, 5), // "check"
QT_MOC_LITERAL(5, 89, 40), // "on_checkbox_use_environment_s..."
QT_MOC_LITERAL(6, 130, 5), // "state"
QT_MOC_LITERAL(7, 136, 15), // "onImageUpdated1"
QT_MOC_LITERAL(8, 152, 5), // "image"
QT_MOC_LITERAL(9, 158, 15), // "onImageUpdated2"
QT_MOC_LITERAL(10, 174, 15), // "onImageUpdated3"
QT_MOC_LITERAL(11, 190, 15), // "onImageUpdated4"
QT_MOC_LITERAL(12, 206, 17), // "updateLoggingView"
QT_MOC_LITERAL(13, 224, 26), // "on_button_connect1_clicked"
QT_MOC_LITERAL(14, 251, 23) // "on_quit_button1_clicked"

    },
    "class1_ros_qt_demo::MainWindow\0"
    "on_actionAbout_triggered\0\0"
    "on_button_connect_clicked\0check\0"
    "on_checkbox_use_environment_stateChanged\0"
    "state\0onImageUpdated1\0image\0onImageUpdated2\0"
    "onImageUpdated3\0onImageUpdated4\0"
    "updateLoggingView\0on_button_connect1_clicked\0"
    "on_quit_button1_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_class1_ros_qt_demo__MainWindow[] = {

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
       7,    1,   71,    2, 0x0a /* Public */,
       9,    1,   74,    2, 0x0a /* Public */,
      10,    1,   77,    2, 0x0a /* Public */,
      11,    1,   80,    2, 0x0a /* Public */,
      12,    0,   83,    2, 0x0a /* Public */,
      13,    0,   84,    2, 0x08 /* Private */,
      14,    0,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::QImage,    8,
    QMetaType::Void, QMetaType::QImage,    8,
    QMetaType::Void, QMetaType::QImage,    8,
    QMetaType::Void, QMetaType::QImage,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void class1_ros_qt_demo::MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionAbout_triggered(); break;
//        case 1: _t->on_button_connect_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_checkbox_use_environment_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onImageUpdated1((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 4: _t->onImageUpdated2((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 5: _t->onImageUpdated3((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 6: _t->onImageUpdated4((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 7: _t->updateLoggingView(); break;
//        case 8: _t->on_button_connect1_clicked(); break;
        case 9: _t->on_quit_button1_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject class1_ros_qt_demo::MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_class1_ros_qt_demo__MainWindow.data,
      qt_meta_data_class1_ros_qt_demo__MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *class1_ros_qt_demo::MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *class1_ros_qt_demo::MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_class1_ros_qt_demo__MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int class1_ros_qt_demo::MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

#include "../include/qt_ros_project/cameralabel.hpp"
#include<iostream>
#include<string>
CameraLabel::CameraLabel(QWidget *parent) : QLabel(parent), is_maximized(false)
{
          setMouseTracking(true);  //ENABLING MOUSE EVENT
}

void CameraLabel::mouseDoubleClickEvent(QMouseEvent *event)
{

    if (event->button() == Qt::LeftButton) {
        emit doubleClicked();
    }
}



/**
 * @file /include/qt_ros_project/main_window.hpp
 *
 * @brief Qt based gui for qt_ros_project.
 *
 * @date November 2010
 **/
#ifndef qt_ros_project_MAIN_WINDOW_H
#define qt_ros_project_MAIN_WINDOW_H

/*****************************************************************************
** Includes
*****************************************************************************/

#include <QtWidgets/QMainWindow>
#include "ui_main_window.h"
#include "qnode.hpp"
#include "qrviz.hpp"

/*****************************************************************************
** Namespace
*****************************************************************************/

namespace qt_ros_project {

/*****************************************************************************
** Interface [MainWindow]
*****************************************************************************/
/**
 * @brief Qt central, all operations relating to the view part here.
 */
class MainWindow : public QMainWindow {
Q_OBJECT

public:
	MainWindow(int argc, char** argv, QWidget *parent = 0);
	~MainWindow();

	void ReadSettings(); // Load up qt program settings at startup
	void WriteSettings(); // Save qt program settings when closing

	void closeEvent(QCloseEvent *event); // Overloaded function
	void showNoMasterMessage();

public Q_SLOTS:
	/******************************************
	** Auto-connections (connectSlotsByName())
	*******************************************/
	void on_actionAbout_triggered();
	void on_button_connect_clicked(bool check );
	void on_checkbox_use_environment_stateChanged(int state);

    /******************************************
    ** Manual connections
    *******************************************/
    void updateLoggingView(); // no idea why this can't connect automatically
    void slot_update_image1(QImage);
    void slot_update_image2(QImage);
    void slot_update_image3(QImage);
    void slot_update_image4(QImage);

private:
	Ui::MainWindowDesign ui;
	QNode qnode;
  qrviz* myrviz;
};

}  // namespace qt_ros_project

#endif // qt_ros_project_MAIN_WINDOW_H

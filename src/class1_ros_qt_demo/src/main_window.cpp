/**
 * @file /src/main_window.cpp
 *
 * @brief Implementation for the qt gui.
 *
 * @date February 2011
 **/
/*****************************************************************************
** Includes
*****************************************************************************/

#include <QtGui>
#include <QMessageBox>
#include <iostream>
#include "../include/class1_ros_qt_demo/main_window.hpp"

/*****************************************************************************
** Namespaces
*****************************************************************************/

namespace class1_ros_qt_demo {

using namespace Qt;

/*****************************************************************************
** Implementation [MainWindow]
*****************************************************************************/

MainWindow::MainWindow(int argc, char** argv, QWidget *parent)
	: QMainWindow(parent)
	, qnode(argc,argv)
{
    ui->setupUi(this); // Calling this incidentally connects all ui's triggers to on_...() callbacks in this class.
    QObject::connect(ui->actionAbout_Qt, SIGNAL(triggered(bool)), qApp, SLOT(aboutQt())); // qApp is a global variable for the application

    ReadSettings();
	setWindowIcon(QIcon(":/images/icon.png"));
    ui->tab_manager->setCurrentIndex(0); // ensure the first tab is showing - qt-designer should have this already hardwired, but often loses it (settings?).
    QObject::connect(&qnode, SIGNAL(rosShutdown()), this, SLOT(close()));

    connect(&qnode,SIGNAL(imageUpdated1(QImage)),this,SLOT(onImageUpdated1(QImage)));     //更新camera的ui
    connect(&qnode,SIGNAL(imageUpdated2(QImage)),this,SLOT(onImageUpdated2(QImage)));     //更新camera的ui
    connect(&qnode,SIGNAL(imageUpdated3(QImage)),this,SLOT(onImageUpdated3(QImage)));     //更新camera的ui
    connect(&qnode,SIGNAL(imageUpdated4(QImage)),this,SLOT(onImageUpdated4(QImage)));     //更新camera的ui

//    connect()
	/*********************
	** Logging
	**********************/
    ui->view_logging->setModel(qnode.loggingModel());
    QObject::connect(&qnode, SIGNAL(loggingUpdated()), this, SLOT(updateLoggingView()));

    /*********************
    ** Auto Start
    **********************/
    if ( ui->checkbox_remember_settings1->isChecked() ) {
      qnode.init();
//        on_button_connect_clicked(true);
    }

}

MainWindow::~MainWindow() {}

/*****************************************************************************
** Implementation [Slots]
*****************************************************************************/

void MainWindow::showNoMasterMessage() {
	QMessageBox msgBox;
	msgBox.setText("Couldn't find the ros master.");
	msgBox.exec();
    close();
}

/*
 * These triggers whenever the button is clicked, regardless of whether it
 * is already checked or not.
 */

//void MainWindow::on_button_connect_clicked(bool check ) {
//    if ( ui->checkbox_use_environment1->isChecked() ) {
//    if ( !qnode.init() ) {
//      showNoMasterMessage();
//    } else {
//            ui->button_connect1->setEnabled(false);
//    }
//  } else {
//        if ( ! qnode.init(ui->line_edit_master1->text().toStdString(),
//                   ui->line_edit_host1->text().toStdString()) ) {
//      showNoMasterMessage();
//    } else {
//            ui->button_connect1->setEnabled(false);
//            ui->line_edit_master1->setReadOnly(true);
//            ui->line_edit_host1->setReadOnly(true);
//            ui->line_edit_topic1->setReadOnly(true);
//    }
//  }
//}


void MainWindow::on_checkbox_use_environment_stateChanged(int state) {
	bool enabled;
	if ( state == 0 ) {
		enabled = true;
	} else {
		enabled = false;
	}
    ui->line_edit_master1->setEnabled(enabled);
    ui->line_edit_host1->setEnabled(enabled);
	//ui.line_edit_topic->setEnabled(enabled);
}

/*****************************************************************************
** Implemenation [Slots][manually connected]
*****************************************************************************/

/**
 * This function is signalled by the underlying model. When the model changes,
 * this will drop the cursor down to the last line in the QListview to ensure
 * the user can always see the latest log message.
 */
void MainWindow::updateLoggingView() {
    ui->view_logging->scrollToBottom();
}

void MainWindow::on_quit_button1_clicked()
{
    qApp->quit();
}

/*****************************************************************************
** Implementation [Menu]
*****************************************************************************/

void MainWindow::on_actionAbout_triggered() {
    QMessageBox::about(this, tr("About ..."),tr("<h2>PACKAGE_NAME Test Program 0.10</h2><p>Copyright Yujin Robot</p><p>This package needs an about description.</p>"));
}

/*****************************************************************************
** Implementation [Configuration]
*****************************************************************************/

void MainWindow::ReadSettings() {
    QSettings settings("Qt-Ros Package", "class1_ros_qt_demo");
    restoreGeometry(settings.value("geometry").toByteArray());
    restoreState(settings.value("windowState").toByteArray());
    QString master_url = settings.value("master_url",QString("http://192.168.1.2:11311/")).toString();
    QString host_url = settings.value("host_url", QString("192.168.1.3")).toString();
    //QString topic_name = settings.value("topic_name", QString("/chatter")).toString();
    ui->line_edit_master1->setText(master_url);
    ui->line_edit_host1->setText(host_url);
    //ui.line_edit_topic->setText(topic_name);
    bool remember = settings.value("remember_settings", false).toBool();
    ui->checkbox_remember_settings1->setChecked(remember);
    bool checked = settings.value("use_environment_variables", false).toBool();
    ui->checkbox_use_environment1->setChecked(checked);
    if ( checked ) {
        ui->line_edit_master1->setEnabled(false);
        ui->line_edit_host1->setEnabled(false);
    	//ui.line_edit_topic->setEnabled(false);
    }
}

void MainWindow::WriteSettings() {
    QSettings settings("Qt-Ros Package", "class1_ros_qt_demo");
    settings.setValue("master_url",ui->line_edit_master1->text());
    settings.setValue("host_url",ui->line_edit_host1->text());
    //settings.setValue("topic_name",ui.line_edit_topic->text());
    settings.setValue("use_environment_variables",QVariant(ui->checkbox_use_environment1->isChecked()));
    settings.setValue("geometry", saveGeometry());
    settings.setValue("windowState", saveState());
    settings.setValue("remember_settings",QVariant(ui->checkbox_remember_settings1->isChecked()));

}

void MainWindow::closeEvent(QCloseEvent *event)
{
	WriteSettings();
	QMainWindow::closeEvent(event);
}
void MainWindow::onImageUpdated1(const QImage& image){
    // Switch to the first image widget
//    ui->stackedWidget->setCurrentIndex(4);
//    ui->stackedWidget->currentWidget()->setPi
//        ui->stackedWidget->currentWidget()->setPixmap(pixmap);

    ui->cam_label1->setPixmap(QPixmap::fromImage(image));
}
void MainWindow::onImageUpdated2(const QImage& image){
    ui->cam_label2->setPixmap(QPixmap::fromImage(image));
}
void MainWindow::onImageUpdated3(const QImage& image){
    ui->cam_label3->setPixmap(QPixmap::fromImage(image));
}
void MainWindow::onImageUpdated4(const QImage& image){
    ui->cam_label4->setPixmap(QPixmap::fromImage(image));
}
}  // namespace class1_ros_qt_demo




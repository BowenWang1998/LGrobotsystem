/**
 * @file /include/qt_ros_project/qnode.hpp
 *
 * @brief Communications central!
 *
 * @date February 2011
 **/
/*****************************************************************************
** Ifdefs
*****************************************************************************/

#ifndef qt_ros_project_QNODE_HPP_
#define qt_ros_project_QNODE_HPP_

/*****************************************************************************
** Includes
*****************************************************************************/

// To workaround boost/qt4 problems that won't be bugfixed. Refer to
//    https://bugreports.qt.io/browse/QTBUG-22829
#ifndef Q_MOC_RUN
#include <ros/ros.h>
#endif
#include <string>
#include <QThread>
#include <QStringListModel>
#include<QImage>
#include<image_transport/image_transport.h>
#include<cv_bridge/cv_bridge.h>
#include<sensor_msgs/image_encodings.h>
/*****************************************************************************
** Namespaces
*****************************************************************************/

namespace qt_ros_project {

/*****************************************************************************
** Class
*****************************************************************************/

class QNode : public QThread {
    Q_OBJECT
public:
	QNode(int argc, char** argv );
	virtual ~QNode();
	bool init();
	bool init(const std::string &master_url, const std::string &host_url);
	void run();

	/*********************
	** Logging
	**********************/
	enum LogLevel {
	         Debug,
	         Info,
	         Warn,
	         Error,
	         Fatal
	 };

	QStringListModel* loggingModel() { return &logging_model; }
	void log( const LogLevel &level, const std::string &msg);

Q_SIGNALS:
	void loggingUpdated();
    void rosShutdown();
   void image1_vel(QImage);
   void image2_vel(QImage);
   void image3_vel(QImage);
   void image4_vel(QImage);

private:
	int init_argc;
	char** init_argv;
	ros::Publisher chatter_publisher;
  image_transport::Subscriber image_sub1;
  image_transport::Subscriber image_sub2;
  image_transport::Subscriber image_sub3;
  image_transport::Subscriber image_sub4;
  void image1_callback(const sensor_msgs::ImageConstPtr& msg);
  void image2_callback(const sensor_msgs::ImageConstPtr& msg);
  void image3_callback(const sensor_msgs::ImageConstPtr& msg);
  void image4_callback(const sensor_msgs::ImageConstPtr& msg);

    QStringListModel logging_model;
    QImage Mat2QImage(cv::Mat const& src);
};

}  // namespace qt_ros_project

#endif /* qt_ros_project_QNODE_HPP_ */

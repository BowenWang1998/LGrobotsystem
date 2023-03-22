/**
 * @file /include/class1_ros_qt_demo/qnode.hpp
 *
 * @brief Communications central!
 *
 * @date February 2011
 **/
/*****************************************************************************
** Ifdefs
*****************************************************************************/

#ifndef class1_ros_qt_demo_QNODE_HPP_
#define class1_ros_qt_demo_QNODE_HPP_

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
#include<QImage>
#include <QStringListModel>
#include<cv_bridge/cv_bridge.h>
#include<opencv2/highgui/highgui.hpp>
//#include<sensor_msgs/Image.h>
#include<sensor_msgs/image_encodings.h>
//#include<image_transport/image_transport.h>

/*****************************************************************************
** Namespaces
*****************************************************************************/

namespace class1_ros_qt_demo {

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
//public slots:
     void updateImages1(const sensor_msgs::ImageConstPtr& msg);
     void updateImages2(const sensor_msgs::ImageConstPtr& msg);
     void updateImages3(const sensor_msgs::ImageConstPtr& msg);
     void updateImages4(const sensor_msgs::ImageConstPtr& msg);

//     void slot_update_image(QImage)
Q_SIGNALS:
	void loggingUpdated();
    void rosShutdown();
    void imageUpdated1(const QImage& image);
    void imageUpdated2(const QImage& image);
    void imageUpdated3(const QImage& image);
    void imageUpdated4(const QImage& image);

    void  image_val(const QImage& image);

private:
	int init_argc;
	char** init_argv;
	ros::Publisher chatter_publisher;
    ros::Subscriber image_sub1;
    ros::Subscriber image_sub2;
    ros::Subscriber image_sub3;
    ros::Subscriber image_sub4;

    QStringListModel logging_model;
//    image_transport::Subscriber image_sub1;
//    void image_callback(const sensor_msgs::ImageConstPtr &msg);

//    QImage Mat2QImage(cv::Mat const& src);
};

}  // namespace class1_ros_qt_demo

#endif /* class1_ros_qt_demo_QNODE_HPP_ */

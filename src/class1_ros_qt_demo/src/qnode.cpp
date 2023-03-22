/**
 * @file /src/qnode.cpp
 *
 * @brief Ros communication central!
 *
 * @date February 2011
 **/

/*****************************************************************************
** Includes
*****************************************************************************/

#include <ros/ros.h>
#include <ros/network.h>
#include <string>
#include <std_msgs/String.h>
#include <sstream>
#include "../include/class1_ros_qt_demo/qnode.hpp"
//#include<image_transport/image_transport.h>
//#include<sensor_msgs/image_encodings.h>
/*****************************************************************************
** Namespaces
*****************************************************************************/

namespace class1_ros_qt_demo {

/*****************************************************************************
** Implementation
*****************************************************************************/

QNode::QNode(int argc, char** argv ) :
	init_argc(argc),
	init_argv(argv)
	{}

QNode::~QNode() {
    if(ros::isStarted()) {
      ros::shutdown(); // explicitly needed since we use ros::start();
      ros::waitForShutdown();
    }
    wait();
}

bool QNode::init() {
    ros::init(init_argc,init_argv,"class1_ros_qt_demo");                //初始化一个节点
	if ( ! ros::master::check() ) {
		return false;
	}
    ros::start(); // explicitly needed since our nodehandle is going out of scope.      //运行节点
	ros::NodeHandle n;
	// Add your ros communications here.
//    chatter_publisher = n.advertise<std_msgs::String>("chatter", 1000);   //创建一个发布者
//    start();
    image_sub1 = n.subscribe("/camera1/image_raw",10,&QNode::updateImages1,this);
    image_sub2 = n.subscribe("/camera2/image_raw",10,&QNode::updateImages2,this);
    image_sub3 = n.subscribe("/camera3/image_raw",10,&QNode::updateImages3,this);
    image_sub4 = n.subscribe("/camera4/image_raw",10,&QNode::updateImages4,this);

//    image_transport::ImageTransport it_(n);
//    image_sub1 = it_.subscribe("/camera1/image_raw",1000,&QNode::image_callback,this);
    start();                                                             //多线程启动
	return true;
}

bool QNode::init(const std::string &master_url, const std::string &host_url) {
	std::map<std::string,std::string> remappings;
	remappings["__master"] = master_url;
	remappings["__hostname"] = host_url;
	ros::init(remappings,"class1_ros_qt_demo");
	if ( ! ros::master::check() ) {
		return false;
	}
	ros::start(); // explicitly needed since our nodehandle is going out of scope.
	ros::NodeHandle n;
	// Add your ros communications here.
//    chatter_publisher = n.advertise<std_msgs::String>("chatter", 1000);
//	start();
    image_sub1 = n.subscribe("/camera1/image_raw",10,&QNode::updateImages1,this);
    image_sub2 = n.subscribe("/camera2/image_raw",10,&QNode::updateImages2,this);
    image_sub3 = n.subscribe("/camera3/image_raw",10,&QNode::updateImages3,this);
    image_sub4 = n.subscribe("/camera4/image_raw",10,&QNode::updateImages4,this);//    image_transport::ImageTransport it_(n);/*//*
//    image_sub1 = it_.subscribe("/camera1/image_raw",1000,&QNode::image_callback,this);
    start();
	return true;
}

void QNode::run() {
    ros::Rate loop_rate(30);
	int count = 0;
    while ( ros::ok() ) {
        /*
		std_msgs::String msg;
		std::stringstream ss;
		ss << "hello world " << count;
        msg.data = ss.str();*/
//		chatter_publisher.publish(msg);
//		log(Info,std::string("I sent: ")+msg.data);
		ros::spinOnce();
		loop_rate.sleep();
//		++count;
	}
	std::cout << "Ros shutdown, proceeding to close the gui." << std::endl;
	Q_EMIT rosShutdown(); // used to signal the gui for a shutdown (useful to roslaunch)
}


void QNode::log( const LogLevel &level, const std::string &msg) {
	logging_model.insertRows(logging_model.rowCount(),1);
	std::stringstream logging_model_msg;
	switch ( level ) {
		case(Debug) : {
				ROS_DEBUG_STREAM(msg);
				logging_model_msg << "[DEBUG] [" << ros::Time::now() << "]: " << msg;
				break;
		}
		case(Info) : {
				ROS_INFO_STREAM(msg);
				logging_model_msg << "[INFO] [" << ros::Time::now() << "]: " << msg;
				break;
		}
		case(Warn) : {
				ROS_WARN_STREAM(msg);
				logging_model_msg << "[INFO] [" << ros::Time::now() << "]: " << msg;
				break;
		}
		case(Error) : {
				ROS_ERROR_STREAM(msg);
				logging_model_msg << "[ERROR] [" << ros::Time::now() << "]: " << msg;
				break;
		}
		case(Fatal) : {
				ROS_FATAL_STREAM(msg);
				logging_model_msg << "[FATAL] [" << ros::Time::now() << "]: " << msg;
				break;
		}
	}
    QVariant new_row(QString(logging_model_msg.str().c_str()));     //生成新的一行文本
    logging_model.setData(logging_model.index(logging_model.rowCount()-1),new_row); //把该行加到list中
	Q_EMIT loggingUpdated(); // used to readjust the scrollbar
}


void QNode::updateImages1(const sensor_msgs::ImageConstPtr &msg)
{
    cv_bridge::CvImageConstPtr cv_ptr;
    try
    {
        cv_ptr = cv_bridge::toCvShare(msg, "bgr8");
    }
    catch (cv_bridge::Exception& e)
    {
        ROS_ERROR("cv_bridge exception: %s", e.what());
        return;
    }
//    QImage image1(cv_ptr->image.data,cv_ptr->image.cols,cv_ptr->image.rows,cv_ptr->image.step, QImage::For);
    QImage image(cv_ptr->image.data, cv_ptr->image.cols, cv_ptr->image.rows, QImage::Format_RGB888);
//    image.rgbSwapped();//交换红色和蓝色的通道
    image.rgbSwapped();
    emit imageUpdated1(image);
}
void QNode::updateImages2(const sensor_msgs::ImageConstPtr &msg)
{
    cv_bridge::CvImageConstPtr cv_ptr;
    try
    {
        cv_ptr = cv_bridge::toCvShare(msg, "bgr8");
    }
    catch (cv_bridge::Exception& e)
    {
        ROS_ERROR("cv_bridge exception: %s", e.what());
        return;
    }
//    QImage image1(cv_ptr->image.data,cv_ptr->image.cols,cv_ptr->image.rows,cv_ptr->image.step, QImage::For);
    QImage image(cv_ptr->image.data, cv_ptr->image.cols, cv_ptr->image.rows, QImage::Format_RGB888);
//    image.rgbSwapped();//交换红色和蓝色的通道

    emit imageUpdated2(image);
}
void QNode::updateImages3(const sensor_msgs::ImageConstPtr &msg)
{
    cv_bridge::CvImageConstPtr cv_ptr;
    try
    {
        cv_ptr = cv_bridge::toCvShare(msg, "bgr8");
    }
    catch (cv_bridge::Exception& e)
    {
        ROS_ERROR("cv_bridge exception: %s", e.what());
        return;
    }
//    QImage image1(cv_ptr->image.data,cv_ptr->image.cols,cv_ptr->image.rows,cv_ptr->image.step, QImage::For);
    QImage image(cv_ptr->image.data, cv_ptr->image.cols, cv_ptr->image.rows, QImage::Format_RGB888);
//    image.rgbSwapped();//交换红色和蓝色的通道

    emit imageUpdated3(image);
}
void QNode::updateImages4(const sensor_msgs::ImageConstPtr &msg)
{
    cv_bridge::CvImageConstPtr cv_ptr;
    try
    {
        cv_ptr = cv_bridge::toCvShare(msg, "bgr8");
    }
    catch (cv_bridge::Exception& e)
    {
        ROS_ERROR("cv_bridge exception: %s", e.what());
        return;
    }
//    QImage image1(cv_ptr->image.data,cv_ptr->image.cols,cv_ptr->image.rows,cv_ptr->image.step, QImage::For);
    QImage image(cv_ptr->image.data, cv_ptr->image.cols, cv_ptr->image.rows, QImage::Format_RGB888);
//    image.rgbSwapped();//交换红色和蓝色的通道

    emit imageUpdated4(image);
}
//void QNode::image_callback(const sensor_msgs::ImageConstPtr &msg)
//{
//    cv_bridge::CvImagePtr cv_ptr;
//    cv_ptr=cv_bridge::toCvCopy(msg,msg->encoding);
//    QImage im = Mat2QImage(cv_ptr->image);
//    emit image_val(im);

//}
//QImage QNode::Mat2QImage(cv::Mat const& src){
//      QImage dest(src.cols, src.rows, QImage::Format_ARGB32);

//      const float scale = 255.0;

//      if (src.depth() == CV_8U) {
//        if (src.channels() == 1) {
//          for (int i = 0; i < src.rows; ++i) {
//            for (int j = 0; j < src.cols; ++j) {
//              int level = src.at<quint8>(i, j);
//              dest.setPixel(j, i, qRgb(level, level, level));
//            }
//          }
//        } else if (src.channels() == 3) {
//          for (int i = 0; i < src.rows; ++i) {
//            for (int j = 0; j < src.cols; ++j) {
//              cv::Vec3b bgr = src.at<cv::Vec3b>(i, j);
//              dest.setPixel(j, i, qRgb(bgr[2], bgr[1], bgr[0]));
//            }
//          }
//        }
//      } else if (src.depth() == CV_32F) {
//        if (src.channels() == 1) {
//          for (int i = 0; i < src.rows; ++i) {
//            for (int j = 0; j < src.cols; ++j) {
//              int level = scale * src.at<float>(i, j);
//              dest.setPixel(j, i, qRgb(level, level, level));
//            }
//          }
//        } else if (src.channels() == 3) {
//          for (int i = 0; i < src.rows; ++i) {
//            for (int j = 0; j < src.cols; ++j) {
//              cv::Vec3f bgr = scale * src.at<cv::Vec3f>(i, j);
//              dest.setPixel(j, i, qRgb(bgr[2], bgr[1], bgr[0]));
//            }
//          }
//        }
//      }

//      return dest;

//}

}  // namespace class1_ros_qt_demo

#include <ros/ros.h>
#include<iostream>
#include <sensor_msgs/Imu.h>
#include <tf/transform_broadcaster.h>
#include <tf/transform_datatypes.h>

int main(int argc, char** argv){
  ros::init(argc, argv, "imu_tf_broad");
  ros::NodeHandle nh;

  // 订阅IMU数据
  ros::Subscriber imu_sub = nh.subscribe<sensor_msgs::Imu>("/imu", 10, 
    [](const sensor_msgs::Imu::ConstPtr& msg) {

      // 将四元数转换为欧拉角
      tf::Quaternion quat(msg->orientation.x, msg->orientation.y, msg->orientation.z, msg->orientation.w);
      double roll, pitch, yaw;
      tf::Matrix3x3(quat).getRPY(roll, pitch, yaw);

      // 发布TF变换
      static tf::TransformBroadcaster br;
      tf::Transform transform;
      transform.setOrigin(tf::Vector3(0, 0, 0)); // IMU链接与IMU原点重合
      transform.setRotation(tf::createQuaternionFromRPY(roll, pitch, yaw));
std::cout<< pitch << roll << yaw <<std::endl;
      br.sendTransform(tf::StampedTransform(transform, ros::Time::now(), "imu_link", "imu"));

    });

  // 加载URDF模型并启用TF插件
  std::string urdf_file = "my_robot.urdf";
  ros::NodeHandle pnh("~");
  pnh.setParam("robot_description", urdf_file);
  ros::Duration(1.0).sleep(); // 等待URDF加载完成
  system("rosparam get /robot_description > /tmp/my_robot.urdf"); // 保存URDF文件以便RViz加载

  // 运行RViz
  system("rosrun rviz rviz -d `rospack find my_robot_description`/rviz/my_robot.rviz");

  ros::spin();
  return 0;
}


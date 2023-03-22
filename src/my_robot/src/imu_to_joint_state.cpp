#include <ros/ros.h>
#include <sensor_msgs/Imu.h>
#include <sensor_msgs/JointState.h>
#include <tf2/LinearMath/Quaternion.h>
#include <tf2/LinearMath/Matrix3x3.h>

class IMUToJointState
{
public:
  IMUToJointState() : nh_()
  {
    joint_state_pub_ = nh_.advertise<sensor_msgs::JointState>("/joint_states", 10);
    imu_sub_ = nh_.subscribe("/imu", 10, &IMUToJointState::imuCallback, this);

    joint_state_.name.push_back("joint_x");
    joint_state_.name.push_back("joint_y");
    joint_state_.name.push_back("joint_z");
    joint_state_.position.resize(3);
  }

  void imuCallback(const sensor_msgs::Imu::ConstPtr &msg)
  {
    tf2::Quaternion quat(msg->orientation.x, msg->orientation.y, msg->orientation.z, msg->orientation.w);
    tf2::Matrix3x3 mat(quat);

    double roll, pitch, yaw;
    mat.getRPY(roll, pitch, yaw);

    joint_state_.header.stamp = ros::Time::now();
    joint_state_.position[0] = roll;
    joint_state_.position[1] = pitch;
    joint_state_.position[2] = yaw;

    joint_state_pub_.publish(joint_state_);
  }

private:
  ros::NodeHandle nh_;
  ros::Publisher joint_state_pub_;
  ros::Subscriber imu_sub_;
  sensor_msgs::JointState joint_state_;
};

int main(int argc, char **argv)
{
  ros::init(argc, argv, "imu_to_joint_state");

  IMUToJointState imu_to_joint_state;

  ros::spin();

  return 0;
}


#include <ros/ros.h>
#include <sensor_msgs/Imu.h>
#include <sensor_msgs/JointState.h>
#include <tf2/LinearMath/Quaternion.h>
#include <tf2/LinearMath/Matrix3x3.h>
#include <deque>
#include <numeric>
#include <algorithm>

class MovingAverageFilter {
public:
    MovingAverageFilter(size_t window_size) : window_size_(window_size) {}

    double update(double value) {
        window_.push_back(value);

        if (window_.size() > window_size_) {
            window_.pop_front();
        }

        double sum = std::accumulate(window_.begin(), window_.end(), 0.0);
        return sum / window_.size();
    }

private:
    std::deque<double> window_;
    size_t window_size_;
};

class IMUToJointState
{
public:
  IMUToJointState() : nh_(), filter_roll(200), filter_pitch(200), filter_yaw(200)
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

    double filtered_roll = filter_roll.update(roll);
    double filtered_pitch = filter_pitch.update(pitch);
    double filtered_yaw = filter_yaw.update(yaw);

    joint_state_.header.stamp = ros::Time::now();
    joint_state_.position[0] = filtered_roll;
    joint_state_.position[1] = filtered_pitch;
    joint_state_.position[2] = filtered_yaw;

    joint_state_pub_.publish(joint_state_);
  }

private:
  ros::NodeHandle nh_;
  ros::Publisher joint_state_pub_;
  ros::Subscriber imu_sub_;
  sensor_msgs::JointState joint_state_;
  MovingAverageFilter filter_roll;
  MovingAverageFilter filter_pitch;
  MovingAverageFilter filter_yaw;
};

int main(int argc, char **argv)
{
  ros::init(argc, argv, "imu_to_joint_state");

  IMUToJointState imu_to_joint_state;

  ros::spin();

  return 0;
}


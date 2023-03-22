#include <ros/ros.h>
#include <sensor_msgs/Imu.h>
#include <std_msgs/String.h>
#include <std_msgs/Float32.h>
#include <string>
#include <boost/asio.hpp>                 
#include <boost/bind.hpp>
#include <tf/transform_broadcaster.h>
#include <cmath>
#include<ky_imu/serial_port.h>
#include<tf2_ros/static_transform_broadcaster.h>
#include<geometry_msgs/TransformStamped.h>

using namespace std;
using namespace boost::asio;           //定义一个命名空间，用于后面的读写操作
                     //定义字符串长度，IMU返回的数据是53个字节一组，可用串口调试助手获得


typedef float float32_t;
struct _sensorData
{

  float32_t gX;
  float32_t gY;
  float32_t gZ;

  float32_t accX;
  float32_t accY;
  float32_t accZ;

  float32_t mX;
  float32_t mY;
  float32_t mZ;

  float32_t roll;
  float32_t pitch;
  float32_t yaw;

  float32_t q1;
  float32_t q2;
  float32_t q3;
  float32_t q4;
} sensorData;

bool parse_data(std::vector<u_char>& dataBuffer)
{
// Check header byte
  if(dataBuffer.size() == 0){
    // Error
    ROS_ERROR("data is None!!!");
    return false;
  }
  if (dataBuffer.at(0) != 0x50)
  {
// Error
    ROS_ERROR("Head is not 0x50");
    return false;
  }

  if ((dataBuffer.at(49) *256 *256 + dataBuffer.at(50) *256 +dataBuffer.at(51) -1000000) *0.001 != 128)
  {
// Error
    ROS_ERROR("jy is not 128");
    return false;
  }

//Scale and store data
  sensorData.gX = (dataBuffer.at(1) *256 *256 + dataBuffer.at(2) *256 +dataBuffer.at(3) -1000000) *0.001;
  sensorData.gY = (dataBuffer.at(4) *256 *256 + dataBuffer.at(5) *256 +dataBuffer.at(6) -1000000) *0.001;
  sensorData.gZ = (dataBuffer.at(7) *256 *256 + dataBuffer.at(8) *256 +dataBuffer.at(9) -1000000) *0.001;

  sensorData.accX = (dataBuffer.at(10) *256 *256 + dataBuffer.at(11) *256 +dataBuffer.at(12) -1000000) *0.001 * 9.8;
  sensorData.accY = (dataBuffer.at(13) *256 *256 + dataBuffer.at(14) *256 +dataBuffer.at(15) -1000000) *0.001 * 9.8;
  sensorData.accZ = (dataBuffer.at(16) *256 *256 + dataBuffer.at(17) *256 +dataBuffer.at(18) -1000000) *0.001 * 9.8;

  sensorData.mX = (dataBuffer.at(19) *256 *256 + dataBuffer.at(20) *256 +dataBuffer.at(21) -1000000) *0.001;
  sensorData.mY = (dataBuffer.at(22) *256 *256 + dataBuffer.at(23) *256 +dataBuffer.at(24) -1000000) *0.001;
  sensorData.mZ = (dataBuffer.at(25) *256 *256 + dataBuffer.at(26) *256 +dataBuffer.at(27) -1000000) *0.001;

  sensorData.roll = -(dataBuffer.at(28) *256 *256 + dataBuffer.at(29) *256 +dataBuffer.at(30) -1000000) *0.001;
  sensorData.pitch = -(dataBuffer.at(31) *256 *256 + dataBuffer.at(32) *256 +dataBuffer.at(33) -1000000) *0.001;
  sensorData.yaw = -(dataBuffer.at(34) *256 *256 + dataBuffer.at(35) *256 +dataBuffer.at(36) -1000000) *0.001;

  sensorData.q1 = (dataBuffer.at(37) *256 *256 + dataBuffer.at(38) *256 +dataBuffer.at(39) -1000000) *0.001;
  sensorData.q2 = (dataBuffer.at(40) *256 *256 + dataBuffer.at(41) *256 +dataBuffer.at(42) -1000000) *0.001;
  sensorData.q3 = (dataBuffer.at(43) *256 *256 + dataBuffer.at(44) *256 +dataBuffer.at(45) -1000000) *0.001;
  sensorData.q4 = (dataBuffer.at(46) *256 *256 + dataBuffer.at(47) *256 +dataBuffer.at(48) -1000000) *0.001;
  // printf("555\n");

  return true;
}

//deg to rad
 double deg2rad(double deg)
{
    return deg * M_PI / 180.;
}

int main(int argc, char** argv)
{
  ros::init(argc, argv, "ky_imu");
  ros::NodeHandle nh;
  ros::NodeHandle private_nh("~");
  std::string imu_port="";
  int imu_port_baud=0;
  std::string imu_frame_id="";
  int imu_rate=0;

  private_nh.param<std::string>("imu_port",imu_port,"/dev/imu");
  private_nh.param<int>("imu_rate",imu_rate,100.);
  private_nh.param<int>("imu_port_baud",imu_port_baud,115200.);
  private_nh.param<std::string>("imu_frame_id",imu_frame_id,"imu");


//  double pre_yaw;
//  ros::Time pre_time;

  std::vector<double> imu_transform;
  try
  {
//    XmlRpc::XmlRpcValue v;
    std::vector<double> pos;
    if(private_nh.param("imu_transform", pos, pos))
    {
      for(uint8_t i=0;i<pos.size();++i)
      {
        imu_transform.push_back(pos.at(i));
      }
    }
  }
  catch (const std::out_of_range& e) {
      ROS_ERROR("%s",e.what());
    }
  ROS_INFO("open :%s succeed,imu rate:%d,imu_frame_id:%s",imu_port.c_str(),imu_rate,imu_frame_id.c_str());
  ros::Publisher imu_pub = nh.advertise<sensor_msgs::Imu>("imu", 50);
  tf2_ros::StaticTransformBroadcaster static_transform_broadcaster;
  ros::Rate r(imu_rate); // 100 hz

  SerialPort sp;
  sp.start(imu_port.c_str(),imu_port_baud);

  while(ros::ok())
  {

      std::vector<u_char> data;
      std::vector<u_char> buf;
      if(sp.get_data(&data))
      {
          
          if(data.at(0)==0x50&&data.at(52)==0x0d)//如果头是50 尾是0d，直接取53个数据
          {
            buf.assign(data.end()-53,data.end());//取第2帧数据

          }
          else {
              for(uint8_t i=1;i<106-53;++i)//第一个确定不是0x50
              {
                if(data.at(i)==0x50&&data.at(i+52)==0x0d)//:
                {
                    buf.assign(data.begin()+i,data.begin()+i+52);
                    break;//找到数据头，跳出循环
                }
              }
          }

          // 
          if(parse_data(buf))
          {

            geometry_msgs::TransformStamped trf;

            ros::Time stamp=ros::Time::now();
            trf.header.stamp=stamp;
            trf.header.frame_id="base_link";
            trf.child_frame_id=imu_frame_id;

            trf.transform.translation.x=imu_transform[0];
            trf.transform.translation.y=imu_transform[1];
            trf.transform.translation.z=imu_transform[2];

            tf2::Quaternion tf_q;
            tf_q.setRPY(imu_transform[3],imu_transform[4],imu_transform[5]);

            
	     //tf_q.setRPY(deg2rad(sensorData.roll), deg2rad(sensorData.pitch), deg2rad(sensorData.yaw));
             //tf::Quaternion q= tf::createQuaternionFromRPY(0.0,0.0,yaw);//roll pitch yaw 转四元素
             //std::cout<<"roll: "<<sensorData.roll <<std::endl;
             //std::cout<<"pitch: "<<sensorData.pitch <<std::endl;
             //::cout<<"yaw: "<<sensorData.yaw <<std::endl<<std::endl;

            trf.transform.rotation.x=tf_q.x();
            trf.transform.rotation.y=tf_q.y();
            trf.transform.rotation.z=tf_q.z();
            trf.transform.rotation.w=tf_q.w();
            static_transform_broadcaster.sendTransform(trf);


            sensor_msgs::Imu imu;
            tf2::Quaternion imu_q;
            imu_q.setRPY(deg2rad(sensorData.roll), deg2rad(sensorData.pitch), deg2rad(sensorData.yaw));
            imu.orientation.x=imu_q.x();
            imu.orientation.y=imu_q.y();
            imu.orientation.z=imu_q.z();
            imu.orientation.w=imu_q.w();
            imu.header.stamp=stamp;
            imu.header.frame_id=imu_frame_id;
            imu.linear_acceleration.x=sensorData.accX;
            imu.linear_acceleration.y=sensorData.accY;
            imu.linear_acceleration.z=sensorData.accZ;
            imu.angular_velocity.x=sensorData.gX;
            imu.angular_velocity.y=sensorData.gY;
            imu.angular_velocity.z=sensorData.gZ;

		//发布TF变化
		

//              imu.angular_velocity_covariance[0] = 0.02;
//              imu.angular_velocity_covariance[1] = 0;
//              imu.angular_velocity_covariance[2] = 0;
//              imu.angular_velocity_covariance[3] = 0;
//              imu.angular_velocity_covariance[4] = 0.02;
//              imu.angular_velocity_covariance[5] = 0;
//              imu.angular_velocity_covariance[6] = 0;
//              imu.angular_velocity_covariance[7] = 0;
//              imu.angular_velocity_covariance[8] = 0.02;


//              imu.linear_acceleration_covariance[0] = 0.04;
//              imu.linear_acceleration_covariance[1] = 0;
//              imu.linear_acceleration_covariance[2] = 0;
//              imu.linear_acceleration_covariance[3] = 0;
//              imu.linear_acceleration_covariance[4] = 0.04;
//              imu.linear_acceleration_covariance[5] = 0;
//              imu.linear_acceleration_covariance[6] = 0;
//              imu.linear_acceleration_covariance[7] = 0;
//              imu.linear_acceleration_covariance[8] = 0.04;


//              imu.orientation_covariance[0] = 0.025;
//              imu.orientation_covariance[1] = 0;
//              imu.orientation_covariance[2] = 0;
//              imu.orientation_covariance[3] = 0;
//              imu.orientation_covariance[4] = 0.025;
//              imu.orientation_covariance[5] = 0;
//              imu.orientation_covariance[6] = 0;
//              imu.orientation_covariance[7] = 0;
//              imu.orientation_covariance[8] = 0.025;

              imu_pub.publish(imu);
          }
          else
          {
//              sp.stop();
//              ROS_WARN("restart open serial port !!!");
//              ros::Duration(0.5).sleep();
//              sp.start(imu_port.c_str(),imu_port_baud);
          }

      }
    r.sleep();
    }
  sp.stop();
  return 0;
 
}


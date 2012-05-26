/* Auto-generated by genmsg_cpp for file /home/test_user/usc-arm-calibration/arm_controller_msgs/msg/CalibrateForceTorqueSensor.msg */
#ifndef ARM_CONTROLLER_MSGS_MESSAGE_CALIBRATEFORCETORQUESENSOR_H
#define ARM_CONTROLLER_MSGS_MESSAGE_CALIBRATEFORCETORQUESENSOR_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"


namespace arm_controller_msgs
{
template <class ContainerAllocator>
struct CalibrateForceTorqueSensor_ {
  typedef CalibrateForceTorqueSensor_<ContainerAllocator> Type;

  CalibrateForceTorqueSensor_()
  {
  }

  CalibrateForceTorqueSensor_(const ContainerAllocator& _alloc)
  {
  }


  typedef boost::shared_ptr< ::arm_controller_msgs::CalibrateForceTorqueSensor_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::arm_controller_msgs::CalibrateForceTorqueSensor_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct CalibrateForceTorqueSensor
typedef  ::arm_controller_msgs::CalibrateForceTorqueSensor_<std::allocator<void> > CalibrateForceTorqueSensor;

typedef boost::shared_ptr< ::arm_controller_msgs::CalibrateForceTorqueSensor> CalibrateForceTorqueSensorPtr;
typedef boost::shared_ptr< ::arm_controller_msgs::CalibrateForceTorqueSensor const> CalibrateForceTorqueSensorConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::arm_controller_msgs::CalibrateForceTorqueSensor_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::arm_controller_msgs::CalibrateForceTorqueSensor_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace arm_controller_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::arm_controller_msgs::CalibrateForceTorqueSensor_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::arm_controller_msgs::CalibrateForceTorqueSensor_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::arm_controller_msgs::CalibrateForceTorqueSensor_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::arm_controller_msgs::CalibrateForceTorqueSensor_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::arm_controller_msgs::CalibrateForceTorqueSensor_<ContainerAllocator> > {
  static const char* value() 
  {
    return "arm_controller_msgs/CalibrateForceTorqueSensor";
  }

  static const char* value(const  ::arm_controller_msgs::CalibrateForceTorqueSensor_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::arm_controller_msgs::CalibrateForceTorqueSensor_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# empty message for now\n\
\n\
";
  }

  static const char* value(const  ::arm_controller_msgs::CalibrateForceTorqueSensor_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::arm_controller_msgs::CalibrateForceTorqueSensor_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::arm_controller_msgs::CalibrateForceTorqueSensor_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct CalibrateForceTorqueSensor_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::arm_controller_msgs::CalibrateForceTorqueSensor_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::arm_controller_msgs::CalibrateForceTorqueSensor_<ContainerAllocator> & v) 
  {
  }
};


} // namespace message_operations
} // namespace ros

#endif // ARM_CONTROLLER_MSGS_MESSAGE_CALIBRATEFORCETORQUESENSOR_H


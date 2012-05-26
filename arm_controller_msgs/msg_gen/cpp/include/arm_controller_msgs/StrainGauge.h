/* Auto-generated by genmsg_cpp for file /home/test_user/usc-arm-calibration/arm_controller_msgs/msg/StrainGauge.msg */
#ifndef ARM_CONTROLLER_MSGS_MESSAGE_STRAINGAUGE_H
#define ARM_CONTROLLER_MSGS_MESSAGE_STRAINGAUGE_H
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

#include "std_msgs/Header.h"

namespace arm_controller_msgs
{
template <class ContainerAllocator>
struct StrainGauge_ {
  typedef StrainGauge_<ContainerAllocator> Type;

  StrainGauge_()
  : header()
  , torque()
  {
  }

  StrainGauge_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , torque(_alloc)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _torque_type;
  std::vector<double, typename ContainerAllocator::template rebind<double>::other >  torque;

  enum { R_RF = 0 };
  enum { R_MF = 1 };
  enum { R_LF = 2 };
  enum { L_RF = 0 };
  enum { L_MF = 1 };
  enum { L_LF = 2 };
  enum { RF = 0 };
  enum { MF = 1 };
  enum { LF = 2 };

  typedef boost::shared_ptr< ::arm_controller_msgs::StrainGauge_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::arm_controller_msgs::StrainGauge_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct StrainGauge
typedef  ::arm_controller_msgs::StrainGauge_<std::allocator<void> > StrainGauge;

typedef boost::shared_ptr< ::arm_controller_msgs::StrainGauge> StrainGaugePtr;
typedef boost::shared_ptr< ::arm_controller_msgs::StrainGauge const> StrainGaugeConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::arm_controller_msgs::StrainGauge_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::arm_controller_msgs::StrainGauge_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace arm_controller_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::arm_controller_msgs::StrainGauge_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::arm_controller_msgs::StrainGauge_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::arm_controller_msgs::StrainGauge_<ContainerAllocator> > {
  static const char* value() 
  {
    return "459ae124b5743ba86496f42e542c416e";
  }

  static const char* value(const  ::arm_controller_msgs::StrainGauge_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x459ae124b5743ba8ULL;
  static const uint64_t static_value2 = 0x6496f42e542c416eULL;
};

template<class ContainerAllocator>
struct DataType< ::arm_controller_msgs::StrainGauge_<ContainerAllocator> > {
  static const char* value() 
  {
    return "arm_controller_msgs/StrainGauge";
  }

  static const char* value(const  ::arm_controller_msgs::StrainGauge_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::arm_controller_msgs::StrainGauge_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# Standard ROS header\n\
Header header\n\
\n\
# Three torque values, one per finger, in Nm\n\
float64[] torque\n\
\n\
# constants for indexing into the above array\n\
int32 R_RF=0\n\
int32 R_MF=1\n\
int32 R_LF=2\n\
int32 L_RF=0\n\
int32 L_MF=1\n\
int32 L_LF=2\n\
int32 RF=0\n\
int32 MF=1\n\
int32 LF=2\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
";
  }

  static const char* value(const  ::arm_controller_msgs::StrainGauge_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::arm_controller_msgs::StrainGauge_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::arm_controller_msgs::StrainGauge_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::arm_controller_msgs::StrainGauge_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.torque);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct StrainGauge_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::arm_controller_msgs::StrainGauge_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::arm_controller_msgs::StrainGauge_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "torque[]" << std::endl;
    for (size_t i = 0; i < v.torque.size(); ++i)
    {
      s << indent << "  torque[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.torque[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // ARM_CONTROLLER_MSGS_MESSAGE_STRAINGAUGE_H


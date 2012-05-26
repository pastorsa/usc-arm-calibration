/* Auto-generated by genmsg_cpp for file /home/test_user/usc-arm-calibration/arm_controller_msgs/msg/ControllerStatus.msg */
#ifndef ARM_CONTROLLER_MSGS_MESSAGE_CONTROLLERSTATUS_H
#define ARM_CONTROLLER_MSGS_MESSAGE_CONTROLLERSTATUS_H
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
struct ControllerStatus_ {
  typedef ControllerStatus_<ContainerAllocator> Type;

  ControllerStatus_()
  : return_code(0)
  , status()
  , current_controller_stack()
  {
  }

  ControllerStatus_(const ContainerAllocator& _alloc)
  : return_code(0)
  , status(_alloc)
  , current_controller_stack(_alloc)
  {
  }

  typedef int32_t _return_code_type;
  int32_t return_code;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _status_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  status;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _current_controller_stack_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  current_controller_stack;

  enum { SUCCESS = 0 };
  enum { FAILURE = 1 };

  typedef boost::shared_ptr< ::arm_controller_msgs::ControllerStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::arm_controller_msgs::ControllerStatus_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct ControllerStatus
typedef  ::arm_controller_msgs::ControllerStatus_<std::allocator<void> > ControllerStatus;

typedef boost::shared_ptr< ::arm_controller_msgs::ControllerStatus> ControllerStatusPtr;
typedef boost::shared_ptr< ::arm_controller_msgs::ControllerStatus const> ControllerStatusConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::arm_controller_msgs::ControllerStatus_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::arm_controller_msgs::ControllerStatus_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace arm_controller_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::arm_controller_msgs::ControllerStatus_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::arm_controller_msgs::ControllerStatus_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::arm_controller_msgs::ControllerStatus_<ContainerAllocator> > {
  static const char* value() 
  {
    return "fa63be2919acc865649cdb9449a63657";
  }

  static const char* value(const  ::arm_controller_msgs::ControllerStatus_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xfa63be2919acc865ULL;
  static const uint64_t static_value2 = 0x649cdb9449a63657ULL;
};

template<class ContainerAllocator>
struct DataType< ::arm_controller_msgs::ControllerStatus_<ContainerAllocator> > {
  static const char* value() 
  {
    return "arm_controller_msgs/ControllerStatus";
  }

  static const char* value(const  ::arm_controller_msgs::ControllerStatus_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::arm_controller_msgs::ControllerStatus_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int32 return_code\n\
int32 SUCCESS=0\n\
int32 FAILURE=1\n\
string status\n\
string current_controller_stack\n\
\n\
";
  }

  static const char* value(const  ::arm_controller_msgs::ControllerStatus_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::arm_controller_msgs::ControllerStatus_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.return_code);
    stream.next(m.status);
    stream.next(m.current_controller_stack);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct ControllerStatus_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::arm_controller_msgs::ControllerStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::arm_controller_msgs::ControllerStatus_<ContainerAllocator> & v) 
  {
    s << indent << "return_code: ";
    Printer<int32_t>::stream(s, indent + "  ", v.return_code);
    s << indent << "status: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.status);
    s << indent << "current_controller_stack: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.current_controller_stack);
  }
};


} // namespace message_operations
} // namespace ros

#endif // ARM_CONTROLLER_MSGS_MESSAGE_CONTROLLERSTATUS_H


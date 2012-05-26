/* Auto-generated by genmsg_cpp for file /home/test_user/usc-arm-calibration/arm_behavior_actions/msg/LookAtHandResult.msg */
#ifndef ARM_BEHAVIOR_ACTIONS_MESSAGE_LOOKATHANDRESULT_H
#define ARM_BEHAVIOR_ACTIONS_MESSAGE_LOOKATHANDRESULT_H
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


namespace arm_behavior_actions
{
template <class ContainerAllocator>
struct LookAtHandResult_ {
  typedef LookAtHandResult_<ContainerAllocator> Type;

  LookAtHandResult_()
  : result(0)
  , info()
  {
  }

  LookAtHandResult_(const ContainerAllocator& _alloc)
  : result(0)
  , info(_alloc)
  {
  }

  typedef int32_t _result_type;
  int32_t result;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _info_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  info;

  enum { FAILED = 0 };
  enum { SUCCEEDED = 1 };

  typedef boost::shared_ptr< ::arm_behavior_actions::LookAtHandResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::arm_behavior_actions::LookAtHandResult_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct LookAtHandResult
typedef  ::arm_behavior_actions::LookAtHandResult_<std::allocator<void> > LookAtHandResult;

typedef boost::shared_ptr< ::arm_behavior_actions::LookAtHandResult> LookAtHandResultPtr;
typedef boost::shared_ptr< ::arm_behavior_actions::LookAtHandResult const> LookAtHandResultConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::arm_behavior_actions::LookAtHandResult_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::arm_behavior_actions::LookAtHandResult_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace arm_behavior_actions

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::arm_behavior_actions::LookAtHandResult_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::arm_behavior_actions::LookAtHandResult_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::arm_behavior_actions::LookAtHandResult_<ContainerAllocator> > {
  static const char* value() 
  {
    return "1cc7049e40e4cf19381819f5e2c8ff95";
  }

  static const char* value(const  ::arm_behavior_actions::LookAtHandResult_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x1cc7049e40e4cf19ULL;
  static const uint64_t static_value2 = 0x381819f5e2c8ff95ULL;
};

template<class ContainerAllocator>
struct DataType< ::arm_behavior_actions::LookAtHandResult_<ContainerAllocator> > {
  static const char* value() 
  {
    return "arm_behavior_actions/LookAtHandResult";
  }

  static const char* value(const  ::arm_behavior_actions::LookAtHandResult_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::arm_behavior_actions::LookAtHandResult_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# Define the result\n\
int32 result\n\
int32 FAILED=0\n\
int32 SUCCEEDED=1\n\
string info\n\
\n\
";
  }

  static const char* value(const  ::arm_behavior_actions::LookAtHandResult_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::arm_behavior_actions::LookAtHandResult_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.result);
    stream.next(m.info);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct LookAtHandResult_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::arm_behavior_actions::LookAtHandResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::arm_behavior_actions::LookAtHandResult_<ContainerAllocator> & v) 
  {
    s << indent << "result: ";
    Printer<int32_t>::stream(s, indent + "  ", v.result);
    s << indent << "info: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.info);
  }
};


} // namespace message_operations
} // namespace ros

#endif // ARM_BEHAVIOR_ACTIONS_MESSAGE_LOOKATHANDRESULT_H


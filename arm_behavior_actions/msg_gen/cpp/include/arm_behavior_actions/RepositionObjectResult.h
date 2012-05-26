/* Auto-generated by genmsg_cpp for file /home/test_user/usc-arm-calibration/arm_behavior_actions/msg/RepositionObjectResult.msg */
#ifndef ARM_BEHAVIOR_ACTIONS_MESSAGE_REPOSITIONOBJECTRESULT_H
#define ARM_BEHAVIOR_ACTIONS_MESSAGE_REPOSITIONOBJECTRESULT_H
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
struct RepositionObjectResult_ {
  typedef RepositionObjectResult_<ContainerAllocator> Type;

  RepositionObjectResult_()
  : result(0)
  {
  }

  RepositionObjectResult_(const ContainerAllocator& _alloc)
  : result(0)
  {
  }

  typedef int32_t _result_type;
  int32_t result;

  enum { FAILED = 0 };
  enum { SUCCEEDED = 1 };

  typedef boost::shared_ptr< ::arm_behavior_actions::RepositionObjectResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::arm_behavior_actions::RepositionObjectResult_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct RepositionObjectResult
typedef  ::arm_behavior_actions::RepositionObjectResult_<std::allocator<void> > RepositionObjectResult;

typedef boost::shared_ptr< ::arm_behavior_actions::RepositionObjectResult> RepositionObjectResultPtr;
typedef boost::shared_ptr< ::arm_behavior_actions::RepositionObjectResult const> RepositionObjectResultConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::arm_behavior_actions::RepositionObjectResult_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::arm_behavior_actions::RepositionObjectResult_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace arm_behavior_actions

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::arm_behavior_actions::RepositionObjectResult_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::arm_behavior_actions::RepositionObjectResult_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::arm_behavior_actions::RepositionObjectResult_<ContainerAllocator> > {
  static const char* value() 
  {
    return "b07fa3ecc4713f4025214b4258afb809";
  }

  static const char* value(const  ::arm_behavior_actions::RepositionObjectResult_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xb07fa3ecc4713f40ULL;
  static const uint64_t static_value2 = 0x25214b4258afb809ULL;
};

template<class ContainerAllocator>
struct DataType< ::arm_behavior_actions::RepositionObjectResult_<ContainerAllocator> > {
  static const char* value() 
  {
    return "arm_behavior_actions/RepositionObjectResult";
  }

  static const char* value(const  ::arm_behavior_actions::RepositionObjectResult_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::arm_behavior_actions::RepositionObjectResult_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
int32 result\n\
int32 FAILED=0\n\
int32 SUCCEEDED=1\n\
\n\
";
  }

  static const char* value(const  ::arm_behavior_actions::RepositionObjectResult_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::arm_behavior_actions::RepositionObjectResult_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::arm_behavior_actions::RepositionObjectResult_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.result);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct RepositionObjectResult_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::arm_behavior_actions::RepositionObjectResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::arm_behavior_actions::RepositionObjectResult_<ContainerAllocator> & v) 
  {
    s << indent << "result: ";
    Printer<int32_t>::stream(s, indent + "  ", v.result);
  }
};


} // namespace message_operations
} // namespace ros

#endif // ARM_BEHAVIOR_ACTIONS_MESSAGE_REPOSITIONOBJECTRESULT_H


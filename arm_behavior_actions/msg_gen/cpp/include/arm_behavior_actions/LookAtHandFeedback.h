/* Auto-generated by genmsg_cpp for file /home/test_user/usc-arm-calibration/arm_behavior_actions/msg/LookAtHandFeedback.msg */
#ifndef ARM_BEHAVIOR_ACTIONS_MESSAGE_LOOKATHANDFEEDBACK_H
#define ARM_BEHAVIOR_ACTIONS_MESSAGE_LOOKATHANDFEEDBACK_H
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
struct LookAtHandFeedback_ {
  typedef LookAtHandFeedback_<ContainerAllocator> Type;

  LookAtHandFeedback_()
  {
  }

  LookAtHandFeedback_(const ContainerAllocator& _alloc)
  {
  }


  typedef boost::shared_ptr< ::arm_behavior_actions::LookAtHandFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::arm_behavior_actions::LookAtHandFeedback_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct LookAtHandFeedback
typedef  ::arm_behavior_actions::LookAtHandFeedback_<std::allocator<void> > LookAtHandFeedback;

typedef boost::shared_ptr< ::arm_behavior_actions::LookAtHandFeedback> LookAtHandFeedbackPtr;
typedef boost::shared_ptr< ::arm_behavior_actions::LookAtHandFeedback const> LookAtHandFeedbackConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::arm_behavior_actions::LookAtHandFeedback_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::arm_behavior_actions::LookAtHandFeedback_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace arm_behavior_actions

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::arm_behavior_actions::LookAtHandFeedback_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::arm_behavior_actions::LookAtHandFeedback_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::arm_behavior_actions::LookAtHandFeedback_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::arm_behavior_actions::LookAtHandFeedback_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::arm_behavior_actions::LookAtHandFeedback_<ContainerAllocator> > {
  static const char* value() 
  {
    return "arm_behavior_actions/LookAtHandFeedback";
  }

  static const char* value(const  ::arm_behavior_actions::LookAtHandFeedback_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::arm_behavior_actions::LookAtHandFeedback_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# Define a feedback message\n\
\n\
\n\
";
  }

  static const char* value(const  ::arm_behavior_actions::LookAtHandFeedback_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::arm_behavior_actions::LookAtHandFeedback_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::arm_behavior_actions::LookAtHandFeedback_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct LookAtHandFeedback_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::arm_behavior_actions::LookAtHandFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::arm_behavior_actions::LookAtHandFeedback_<ContainerAllocator> & v) 
  {
  }
};


} // namespace message_operations
} // namespace ros

#endif // ARM_BEHAVIOR_ACTIONS_MESSAGE_LOOKATHANDFEEDBACK_H


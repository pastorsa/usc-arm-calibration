/* Auto-generated by genmsg_cpp for file /home/test_user/usc-arm-calibration/arm_behavior_actions/msg/LocateObjectsGoal.msg */
#ifndef ARM_BEHAVIOR_ACTIONS_MESSAGE_LOCATEOBJECTSGOAL_H
#define ARM_BEHAVIOR_ACTIONS_MESSAGE_LOCATEOBJECTSGOAL_H
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
struct LocateObjectsGoal_ {
  typedef LocateObjectsGoal_<ContainerAllocator> Type;

  LocateObjectsGoal_()
  : object_names()
  , method(0)
  {
  }

  LocateObjectsGoal_(const ContainerAllocator& _alloc)
  : object_names(_alloc)
  , method(0)
  {
  }

  typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _object_names_type;
  std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  object_names;

  typedef int32_t _method_type;
  int32_t method;

  enum { METHOD_DEFAULT = 0 };
  enum { METHOD_2D = 1 };
  enum { METHOD_3D = 2 };

  typedef boost::shared_ptr< ::arm_behavior_actions::LocateObjectsGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::arm_behavior_actions::LocateObjectsGoal_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct LocateObjectsGoal
typedef  ::arm_behavior_actions::LocateObjectsGoal_<std::allocator<void> > LocateObjectsGoal;

typedef boost::shared_ptr< ::arm_behavior_actions::LocateObjectsGoal> LocateObjectsGoalPtr;
typedef boost::shared_ptr< ::arm_behavior_actions::LocateObjectsGoal const> LocateObjectsGoalConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::arm_behavior_actions::LocateObjectsGoal_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::arm_behavior_actions::LocateObjectsGoal_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace arm_behavior_actions

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::arm_behavior_actions::LocateObjectsGoal_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::arm_behavior_actions::LocateObjectsGoal_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::arm_behavior_actions::LocateObjectsGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "00e4758d6770db753ecf85903fff7535";
  }

  static const char* value(const  ::arm_behavior_actions::LocateObjectsGoal_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x00e4758d6770db75ULL;
  static const uint64_t static_value2 = 0x3ecf85903fff7535ULL;
};

template<class ContainerAllocator>
struct DataType< ::arm_behavior_actions::LocateObjectsGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "arm_behavior_actions/LocateObjectsGoal";
  }

  static const char* value(const  ::arm_behavior_actions::LocateObjectsGoal_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::arm_behavior_actions::LocateObjectsGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# Define the goal\n\
string[] object_names\n\
int32 method\n\
int32 METHOD_DEFAULT=0\n\
int32 METHOD_2D=1\n\
int32 METHOD_3D=2\n\
\n\
";
  }

  static const char* value(const  ::arm_behavior_actions::LocateObjectsGoal_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::arm_behavior_actions::LocateObjectsGoal_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.object_names);
    stream.next(m.method);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct LocateObjectsGoal_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::arm_behavior_actions::LocateObjectsGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::arm_behavior_actions::LocateObjectsGoal_<ContainerAllocator> & v) 
  {
    s << indent << "object_names[]" << std::endl;
    for (size_t i = 0; i < v.object_names.size(); ++i)
    {
      s << indent << "  object_names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.object_names[i]);
    }
    s << indent << "method: ";
    Printer<int32_t>::stream(s, indent + "  ", v.method);
  }
};


} // namespace message_operations
} // namespace ros

#endif // ARM_BEHAVIOR_ACTIONS_MESSAGE_LOCATEOBJECTSGOAL_H


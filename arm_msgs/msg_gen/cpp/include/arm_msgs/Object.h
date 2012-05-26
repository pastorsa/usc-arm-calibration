/* Auto-generated by genmsg_cpp for file /home/test_user/usc-arm-calibration/arm_msgs/msg/Object.msg */
#ifndef ARM_MSGS_MESSAGE_OBJECT_H
#define ARM_MSGS_MESSAGE_OBJECT_H
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

#include "geometry_msgs/PoseWithCovarianceStamped.h"

namespace arm_msgs
{
template <class ContainerAllocator>
struct Object_ {
  typedef Object_<ContainerAllocator> Type;

  Object_()
  : name()
  , pose()
  {
  }

  Object_(const ContainerAllocator& _alloc)
  : name(_alloc)
  , pose(_alloc)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  name;

  typedef  ::geometry_msgs::PoseWithCovarianceStamped_<ContainerAllocator>  _pose_type;
   ::geometry_msgs::PoseWithCovarianceStamped_<ContainerAllocator>  pose;

  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  ORANGE_PAPER;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  BALL;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  ROCK;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  CANTEEN;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  CANTEEN_STANDING;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  CANTEEN_LYING;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  PVC_PIPE_BIG;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  PVC_PIPE_BIG_STANDING;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  PVC_PIPE_BIG_LYING;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  STAPLER;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  FLASHLIGHT;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  FLASHLIGHT_UP;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  DOOR;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  DOOR_UNLOCK;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  BOTTLE;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MAGLITE;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MAGLITE_UP;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MAGLITE_DOWN;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  MAGLITE_LYING;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  RADIO;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  HANDSET;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  HANDSET_DOWN;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  CRADLE;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  CRADLE_FLAT;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  CRADLE_VERTICAL;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  SCREWDRIVER;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  DRILL;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  DRILL_UPRIGHT;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  DRILL_BLOCK;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  DRILL_BLOCK_LYING;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  DRILL_BLOCK_STANDING;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  RED_DOT;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  SHOVEL;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  SHOVEL_FLAT;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  SHOVEL_ONEDGE;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  HAMMER;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  HAMMER_DOWN;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  HAMMER_LYING;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  HAMMER_UP;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  HAMMER_ONEDGE;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  FLOODLIGHT;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  FLOODLIGHT_SIDE;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  FLOODLIGHT_DOWN;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  PELICAN;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  PELICAN_HANDLE_UP;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  PELICAN_LABEL_UP;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  PELICAN_LABEL_DOWN;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  PELICAN_LEFT_EDGE_DOWN;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  PELICAN_RIGHT_EDGE_DOWN;

  typedef boost::shared_ptr< ::arm_msgs::Object_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::arm_msgs::Object_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct Object
typedef  ::arm_msgs::Object_<std::allocator<void> > Object;

typedef boost::shared_ptr< ::arm_msgs::Object> ObjectPtr;
typedef boost::shared_ptr< ::arm_msgs::Object const> ObjectConstPtr;

template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  Object_<ContainerAllocator>::ORANGE_PAPER = "orange_paper";
template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  Object_<ContainerAllocator>::BALL = "ball";
template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  Object_<ContainerAllocator>::ROCK = "rock";
template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  Object_<ContainerAllocator>::CANTEEN = "canteen";
template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  Object_<ContainerAllocator>::CANTEEN_STANDING = "canteen_standing";
template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  Object_<ContainerAllocator>::CANTEEN_LYING = "canteen_lying";
template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  Object_<ContainerAllocator>::PVC_PIPE_BIG = "pipe";
template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  Object_<ContainerAllocator>::PVC_PIPE_BIG_STANDING = "pipe_standing";
template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  Object_<ContainerAllocator>::PVC_PIPE_BIG_LYING = "pipe_lying";
template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  Object_<ContainerAllocator>::STAPLER = "stapler";
template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  Object_<ContainerAllocator>::FLASHLIGHT = "flashlight";
template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  Object_<ContainerAllocator>::FLASHLIGHT_UP = "flashlight_up";
template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  Object_<ContainerAllocator>::DOOR = "door";
template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  Object_<ContainerAllocator>::DOOR_UNLOCK = "door_unlock";
template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  Object_<ContainerAllocator>::BOTTLE = "bottle";
template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  Object_<ContainerAllocator>::MAGLITE = "maglite";
template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  Object_<ContainerAllocator>::MAGLITE_UP = "maglite_up";
template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  Object_<ContainerAllocator>::MAGLITE_DOWN = "maglite_down";
template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  Object_<ContainerAllocator>::MAGLITE_LYING = "maglite_lying";
template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  Object_<ContainerAllocator>::RADIO = "radio";
template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  Object_<ContainerAllocator>::HANDSET = "handset";
template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  Object_<ContainerAllocator>::HANDSET_DOWN = "handset_down";
template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  Object_<ContainerAllocator>::CRADLE = "cradle";
template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  Object_<ContainerAllocator>::CRADLE_FLAT = "cradle_flat";
template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  Object_<ContainerAllocator>::CRADLE_VERTICAL = "cradle_vertical";
template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  Object_<ContainerAllocator>::SCREWDRIVER = "screwdriver";
template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  Object_<ContainerAllocator>::DRILL = "drill";
template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  Object_<ContainerAllocator>::DRILL_UPRIGHT = "drill_upright";
template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  Object_<ContainerAllocator>::DRILL_BLOCK = "drill_block";
template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  Object_<ContainerAllocator>::DRILL_BLOCK_LYING = "drill_block_lying";
template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  Object_<ContainerAllocator>::DRILL_BLOCK_STANDING = "drill_block_standing";
template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  Object_<ContainerAllocator>::RED_DOT = "red_dot";
template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  Object_<ContainerAllocator>::SHOVEL = "shovel";
template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  Object_<ContainerAllocator>::SHOVEL_FLAT = "shovel_flat";
template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  Object_<ContainerAllocator>::SHOVEL_ONEDGE = "shovel_onedge";
template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  Object_<ContainerAllocator>::HAMMER = "hammer";
template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  Object_<ContainerAllocator>::HAMMER_DOWN = "hammer_down";
template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  Object_<ContainerAllocator>::HAMMER_LYING = "hammer_lying";
template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  Object_<ContainerAllocator>::HAMMER_UP = "hammer_up";
template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  Object_<ContainerAllocator>::HAMMER_ONEDGE = "hammer_onedge";
template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  Object_<ContainerAllocator>::FLOODLIGHT = "floodlight";
template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  Object_<ContainerAllocator>::FLOODLIGHT_SIDE = "floodlight_side";
template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  Object_<ContainerAllocator>::FLOODLIGHT_DOWN = "floodlight_down";
template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  Object_<ContainerAllocator>::PELICAN = "pelican";
template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  Object_<ContainerAllocator>::PELICAN_HANDLE_UP = "pelican_handle_up";
template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  Object_<ContainerAllocator>::PELICAN_LABEL_UP = "pelican_label_up";
template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  Object_<ContainerAllocator>::PELICAN_LABEL_DOWN = "pelican_label_down";
template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  Object_<ContainerAllocator>::PELICAN_LEFT_EDGE_DOWN = "pelican_left_edge_down";
template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  Object_<ContainerAllocator>::PELICAN_RIGHT_EDGE_DOWN = "pelican_right_edge_down";

template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::arm_msgs::Object_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::arm_msgs::Object_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace arm_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::arm_msgs::Object_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::arm_msgs::Object_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::arm_msgs::Object_<ContainerAllocator> > {
  static const char* value() 
  {
    return "b34685266e6694b5843dd0b6e51185ca";
  }

  static const char* value(const  ::arm_msgs::Object_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xb34685266e6694b5ULL;
  static const uint64_t static_value2 = 0x843dd0b6e51185caULL;
};

template<class ContainerAllocator>
struct DataType< ::arm_msgs::Object_<ContainerAllocator> > {
  static const char* value() 
  {
    return "arm_msgs/Object";
  }

  static const char* value(const  ::arm_msgs::Object_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::arm_msgs::Object_<ContainerAllocator> > {
  static const char* value() 
  {
    return "string name\n\
string ORANGE_PAPER=orange_paper\n\
string BALL=ball\n\
string ROCK=rock\n\
string CANTEEN=canteen\n\
string CANTEEN_STANDING=canteen_standing\n\
string CANTEEN_LYING=canteen_lying\n\
string PVC_PIPE_BIG=pipe\n\
string PVC_PIPE_BIG_STANDING=pipe_standing\n\
string PVC_PIPE_BIG_LYING=pipe_lying\n\
string STAPLER=stapler\n\
string FLASHLIGHT=flashlight\n\
string FLASHLIGHT_UP=flashlight_up\n\
string DOOR=door\n\
string DOOR_UNLOCK=door_unlock\n\
string BOTTLE=bottle\n\
string MAGLITE=maglite\n\
string MAGLITE_UP=maglite_up\n\
string MAGLITE_DOWN=maglite_down\n\
string MAGLITE_LYING=maglite_lying\n\
string RADIO=radio\n\
string HANDSET=handset\n\
string HANDSET_DOWN=handset_down\n\
string CRADLE=cradle\n\
string CRADLE_FLAT=cradle_flat\n\
string CRADLE_VERTICAL=cradle_vertical\n\
string SCREWDRIVER=screwdriver\n\
string DRILL=drill\n\
string DRILL_UPRIGHT=drill_upright\n\
string DRILL_BLOCK=drill_block\n\
string DRILL_BLOCK_LYING=drill_block_lying\n\
string DRILL_BLOCK_STANDING=drill_block_standing\n\
string RED_DOT=red_dot\n\
string SHOVEL=shovel\n\
string SHOVEL_FLAT=shovel_flat\n\
string SHOVEL_ONEDGE=shovel_onedge\n\
string HAMMER=hammer\n\
string HAMMER_DOWN=hammer_down\n\
string HAMMER_LYING=hammer_lying\n\
string HAMMER_UP=hammer_up\n\
string HAMMER_ONEDGE=hammer_onedge\n\
string FLOODLIGHT=floodlight\n\
string FLOODLIGHT_SIDE=floodlight_side\n\
string FLOODLIGHT_DOWN=floodlight_down\n\
string PELICAN=pelican\n\
string PELICAN_HANDLE_UP=pelican_handle_up\n\
string PELICAN_LABEL_UP=pelican_label_up\n\
string PELICAN_LABEL_DOWN=pelican_label_down\n\
string PELICAN_LEFT_EDGE_DOWN=pelican_left_edge_down\n\
string PELICAN_RIGHT_EDGE_DOWN=pelican_right_edge_down\n\
geometry_msgs/PoseWithCovarianceStamped pose\n\
\n\
================================================================================\n\
MSG: geometry_msgs/PoseWithCovarianceStamped\n\
# This expresses an estimated pose with a reference coordinate frame and timestamp\n\
\n\
Header header\n\
PoseWithCovariance pose\n\
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
================================================================================\n\
MSG: geometry_msgs/PoseWithCovariance\n\
# This represents a pose in free space with uncertainty.\n\
\n\
Pose pose\n\
\n\
# Row-major representation of the 6x6 covariance matrix\n\
# The orientation parameters use a fixed-axis representation.\n\
# In order, the parameters are:\n\
# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)\n\
float64[36] covariance\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of postion and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
";
  }

  static const char* value(const  ::arm_msgs::Object_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::arm_msgs::Object_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.name);
    stream.next(m.pose);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct Object_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::arm_msgs::Object_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::arm_msgs::Object_<ContainerAllocator> & v) 
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "pose: ";
s << std::endl;
    Printer< ::geometry_msgs::PoseWithCovarianceStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
  }
};


} // namespace message_operations
} // namespace ros

#endif // ARM_MSGS_MESSAGE_OBJECT_H


/* Auto-generated by genmsg_cpp for file /home/test_user/usc-arm-calibration/arm_behavior_actions/msg/PreshapeHandAction.msg */
#ifndef ARM_BEHAVIOR_ACTIONS_MESSAGE_PRESHAPEHANDACTION_H
#define ARM_BEHAVIOR_ACTIONS_MESSAGE_PRESHAPEHANDACTION_H
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

#include "arm_behavior_actions/PreshapeHandActionGoal.h"
#include "arm_behavior_actions/PreshapeHandActionResult.h"
#include "arm_behavior_actions/PreshapeHandActionFeedback.h"

namespace arm_behavior_actions
{
template <class ContainerAllocator>
struct PreshapeHandAction_ {
  typedef PreshapeHandAction_<ContainerAllocator> Type;

  PreshapeHandAction_()
  : action_goal()
  , action_result()
  , action_feedback()
  {
  }

  PreshapeHandAction_(const ContainerAllocator& _alloc)
  : action_goal(_alloc)
  , action_result(_alloc)
  , action_feedback(_alloc)
  {
  }

  typedef  ::arm_behavior_actions::PreshapeHandActionGoal_<ContainerAllocator>  _action_goal_type;
   ::arm_behavior_actions::PreshapeHandActionGoal_<ContainerAllocator>  action_goal;

  typedef  ::arm_behavior_actions::PreshapeHandActionResult_<ContainerAllocator>  _action_result_type;
   ::arm_behavior_actions::PreshapeHandActionResult_<ContainerAllocator>  action_result;

  typedef  ::arm_behavior_actions::PreshapeHandActionFeedback_<ContainerAllocator>  _action_feedback_type;
   ::arm_behavior_actions::PreshapeHandActionFeedback_<ContainerAllocator>  action_feedback;


  typedef boost::shared_ptr< ::arm_behavior_actions::PreshapeHandAction_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::arm_behavior_actions::PreshapeHandAction_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct PreshapeHandAction
typedef  ::arm_behavior_actions::PreshapeHandAction_<std::allocator<void> > PreshapeHandAction;

typedef boost::shared_ptr< ::arm_behavior_actions::PreshapeHandAction> PreshapeHandActionPtr;
typedef boost::shared_ptr< ::arm_behavior_actions::PreshapeHandAction const> PreshapeHandActionConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::arm_behavior_actions::PreshapeHandAction_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::arm_behavior_actions::PreshapeHandAction_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace arm_behavior_actions

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::arm_behavior_actions::PreshapeHandAction_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::arm_behavior_actions::PreshapeHandAction_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::arm_behavior_actions::PreshapeHandAction_<ContainerAllocator> > {
  static const char* value() 
  {
    return "2d3f793be3c16e412ab09a287a9b5391";
  }

  static const char* value(const  ::arm_behavior_actions::PreshapeHandAction_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x2d3f793be3c16e41ULL;
  static const uint64_t static_value2 = 0x2ab09a287a9b5391ULL;
};

template<class ContainerAllocator>
struct DataType< ::arm_behavior_actions::PreshapeHandAction_<ContainerAllocator> > {
  static const char* value() 
  {
    return "arm_behavior_actions/PreshapeHandAction";
  }

  static const char* value(const  ::arm_behavior_actions::PreshapeHandAction_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::arm_behavior_actions::PreshapeHandAction_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
PreshapeHandActionGoal action_goal\n\
PreshapeHandActionResult action_result\n\
PreshapeHandActionFeedback action_feedback\n\
\n\
================================================================================\n\
MSG: arm_behavior_actions/PreshapeHandActionGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalID goal_id\n\
PreshapeHandGoal goal\n\
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
MSG: actionlib_msgs/GoalID\n\
# The stamp should store the time at which this goal was requested.\n\
# It is used by an action server when it tries to preempt all\n\
# goals that were requested before a certain time\n\
time stamp\n\
\n\
# The id provides a way to associate feedback and\n\
# result message with specific goal requests. The id\n\
# specified must be unique.\n\
string id\n\
\n\
\n\
================================================================================\n\
MSG: arm_behavior_actions/PreshapeHandGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
int32 command\n\
int32 OPEN=0\n\
int32 PRESHAPE=1\n\
\n\
================================================================================\n\
MSG: arm_behavior_actions/PreshapeHandActionResult\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
PreshapeHandResult result\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalStatus\n\
GoalID goal_id\n\
uint8 status\n\
uint8 PENDING         = 0   # The goal has yet to be processed by the action server\n\
uint8 ACTIVE          = 1   # The goal is currently being processed by the action server\n\
uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\n\
                            #   and has since completed its execution (Terminal State)\n\
uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\n\
uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\n\
                            #    to some failure (Terminal State)\n\
uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\n\
                            #    because the goal was unattainable or invalid (Terminal State)\n\
uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\n\
                            #    and has not yet completed execution\n\
uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\n\
                            #    but the action server has not yet confirmed that the goal is canceled\n\
uint8 RECALLED        = 8   # The goal received a cancel request before it started executing\n\
                            #    and was successfully cancelled (Terminal State)\n\
uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\n\
                            #    sent over the wire by an action server\n\
\n\
#Allow for the user to associate a string with GoalStatus for debugging\n\
string text\n\
\n\
\n\
================================================================================\n\
MSG: arm_behavior_actions/PreshapeHandResult\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
int32 result\n\
int32 FAILED=0\n\
int32 SUCCEEDED=1\n\
\n\
================================================================================\n\
MSG: arm_behavior_actions/PreshapeHandActionFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
PreshapeHandFeedback feedback\n\
\n\
================================================================================\n\
MSG: arm_behavior_actions/PreshapeHandFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
float64 percent_complete\n\
\n\
\n\
";
  }

  static const char* value(const  ::arm_behavior_actions::PreshapeHandAction_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::arm_behavior_actions::PreshapeHandAction_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.action_goal);
    stream.next(m.action_result);
    stream.next(m.action_feedback);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct PreshapeHandAction_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::arm_behavior_actions::PreshapeHandAction_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::arm_behavior_actions::PreshapeHandAction_<ContainerAllocator> & v) 
  {
    s << indent << "action_goal: ";
s << std::endl;
    Printer< ::arm_behavior_actions::PreshapeHandActionGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.action_goal);
    s << indent << "action_result: ";
s << std::endl;
    Printer< ::arm_behavior_actions::PreshapeHandActionResult_<ContainerAllocator> >::stream(s, indent + "  ", v.action_result);
    s << indent << "action_feedback: ";
s << std::endl;
    Printer< ::arm_behavior_actions::PreshapeHandActionFeedback_<ContainerAllocator> >::stream(s, indent + "  ", v.action_feedback);
  }
};


} // namespace message_operations
} // namespace ros

#endif // ARM_BEHAVIOR_ACTIONS_MESSAGE_PRESHAPEHANDACTION_H


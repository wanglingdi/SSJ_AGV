// Generated by gencpp from file pal_interaction_msgs/TtsAction.msg
// DO NOT EDIT!


#ifndef PAL_INTERACTION_MSGS_MESSAGE_TTSACTION_H
#define PAL_INTERACTION_MSGS_MESSAGE_TTSACTION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <pal_interaction_msgs/TtsActionGoal.h>
#include <pal_interaction_msgs/TtsActionResult.h>
#include <pal_interaction_msgs/TtsActionFeedback.h>

namespace pal_interaction_msgs
{
template <class ContainerAllocator>
struct TtsAction_
{
  typedef TtsAction_<ContainerAllocator> Type;

  TtsAction_()
    : action_goal()
    , action_result()
    , action_feedback()  {
    }
  TtsAction_(const ContainerAllocator& _alloc)
    : action_goal(_alloc)
    , action_result(_alloc)
    , action_feedback(_alloc)  {
  (void)_alloc;
    }



   typedef  ::pal_interaction_msgs::TtsActionGoal_<ContainerAllocator>  _action_goal_type;
  _action_goal_type action_goal;

   typedef  ::pal_interaction_msgs::TtsActionResult_<ContainerAllocator>  _action_result_type;
  _action_result_type action_result;

   typedef  ::pal_interaction_msgs::TtsActionFeedback_<ContainerAllocator>  _action_feedback_type;
  _action_feedback_type action_feedback;




  typedef boost::shared_ptr< ::pal_interaction_msgs::TtsAction_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_interaction_msgs::TtsAction_<ContainerAllocator> const> ConstPtr;

}; // struct TtsAction_

typedef ::pal_interaction_msgs::TtsAction_<std::allocator<void> > TtsAction;

typedef boost::shared_ptr< ::pal_interaction_msgs::TtsAction > TtsActionPtr;
typedef boost::shared_ptr< ::pal_interaction_msgs::TtsAction const> TtsActionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_interaction_msgs::TtsAction_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_interaction_msgs::TtsAction_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pal_interaction_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'pal_interaction_msgs': ['/home/ssj/ros_ws/src/pal_msgs/pal_interaction_msgs/msg', '/home/ssj/ros_ws/devel/share/pal_interaction_msgs/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pal_interaction_msgs::TtsAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_interaction_msgs::TtsAction_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_interaction_msgs::TtsAction_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_interaction_msgs::TtsAction_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_interaction_msgs::TtsAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_interaction_msgs::TtsAction_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_interaction_msgs::TtsAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e600bc3d0229546f8166162383b48288";
  }

  static const char* value(const ::pal_interaction_msgs::TtsAction_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe600bc3d0229546fULL;
  static const uint64_t static_value2 = 0x8166162383b48288ULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_interaction_msgs::TtsAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_interaction_msgs/TtsAction";
  }

  static const char* value(const ::pal_interaction_msgs::TtsAction_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_interaction_msgs::TtsAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
TtsActionGoal action_goal\n\
TtsActionResult action_result\n\
TtsActionFeedback action_feedback\n\
\n\
================================================================================\n\
MSG: pal_interaction_msgs/TtsActionGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalID goal_id\n\
TtsGoal goal\n\
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
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
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
MSG: pal_interaction_msgs/TtsGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
## goal definition\n\
\n\
# utterance will contain indications to construct\n\
# the text to be spoken.\n\
# It must be specified in a section/key format \n\
# for internationalisation. The actual text will\n\
# be obtained from configuration files as in pal_tts_cfg pkg.\n\
 \n\
I18nText text\n\
TtsText rawtext\n\
\n\
# This is to suggest a voice name to the \n\
# tts engine. For the same language we might have\n\
# a variety of voices available, and this variable \n\
# is to choose one among them. \n\
# (not implemented yet)\n\
string speakerName\n\
\n\
# Time to wait before synthesising the text itself.\n\
# It can be used to produced delayed speech.\n\
float64 wait_before_speaking\n\
\n\
\n\
================================================================================\n\
MSG: pal_interaction_msgs/I18nText\n\
# section/key is used as in examples in the pal_tts_cfg pkg.\n\
string section\n\
string key\n\
\n\
# language id, must be speficied using RFC 3066\n\
string lang_id\n\
\n\
# arguments contain the values by which \n\
# occurrences of '%s' will be replaced in the \n\
# main text.\n\
# This only supports up to 2 arguments and no recursion.\n\
# However, recursion and more argumnents are\n\
# planned to be supported in the future.\n\
I18nArgument[] arguments\n\
\n\
================================================================================\n\
MSG: pal_interaction_msgs/I18nArgument\n\
# section key, override the value in expanded.\n\
# Use expanded for text that do not need expansion.\n\
# Please note that expanded here will not be translated \n\
# to any language.\n\
\n\
string section\n\
string key\n\
string expanded\n\
\n\
\n\
================================================================================\n\
MSG: pal_interaction_msgs/TtsText\n\
# this message is to specify \n\
# raw text to the TTS server. \n\
\n\
string text\n\
\n\
# Language id in RFC 3066 format\n\
# This field is mandatory\n\
string lang_id\n\
================================================================================\n\
MSG: pal_interaction_msgs/TtsActionResult\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
TtsResult result\n\
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
MSG: pal_interaction_msgs/TtsResult\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
## result definition\n\
\n\
# Variable text will contain\n\
# the actual text to be spoken\n\
string text\n\
\n\
# Msg will contain a warning/error message\n\
# in case something happens during synthesis.\n\
\n\
string msg\n\
\n\
================================================================================\n\
MSG: pal_interaction_msgs/TtsActionFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
TtsFeedback feedback\n\
\n\
================================================================================\n\
MSG: pal_interaction_msgs/TtsFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
## feedback\n\
\n\
# Everytime one of the following events occuring\n\
# during the synthesis process a feedback message\n\
# will be published.\n\
# Only TTS_EVENT_STARTED_PLAYING_WORD and \n\
# TTS_EVENT_MARK are implemented now.\n\
\n\
uint16 TTS_EVENT_INITIALIZATION = 1\n\
uint16 TTS_EVENT_SHUTDOWN = 2\n\
uint16 TTS_EVENT_SYNCHRONIZATION = 4\n\
uint16 TTS_EVENT_FINISHED_PLAYING_UTTERANCE = 8\n\
uint16 TTS_EVENT_MARK = 16\n\
uint16 TTS_EVENT_STARTED_PLAYING_WORD = 32\n\
uint16 TTS_EVENT_FINISHED_PLAYING_PHRASE = 64\n\
uint16 TTS_EVENT_FINISHED_PLAYING_SENTENCE = 128\n\
\n\
# Store the event type and can be used\n\
# to filter messages depending on the type of \n\
# events we are interested in\n\
\n\
uint16 event_type\n\
\n\
# Time since the begining of the synthesis\n\
# at which the event occured.\n\
\n\
time timestamp\n\
\n\
# Text said until now, \n\
# it will contain the current word in case of WORD events\n\
\n\
string text_said\n\
\n\
# Next word to be pronounced\n\
# (not implemented)\n\
string next_word\n\
\n\
# Everytime a mark like this one\n\
# <mark name=\"markname\"/> is present in the text\n\
# a MARK event will be generated with the 'name' \n\
# argument value as mark id. Other fields\n\
# different from the mark_id are not implemented.\n\
\n\
TtsMark marks\n\
\n\
\n\
================================================================================\n\
MSG: pal_interaction_msgs/TtsMark\n\
# id will contain the value of name argument in the <mark/>\n\
# tags when they are placed in synthesised text.\n\
# Filling keys and value is not implemented yet.\n\
string id\n\
string[] keys\n\
string[] value\n\
";
  }

  static const char* value(const ::pal_interaction_msgs::TtsAction_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_interaction_msgs::TtsAction_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.action_goal);
      stream.next(m.action_result);
      stream.next(m.action_feedback);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TtsAction_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_interaction_msgs::TtsAction_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_interaction_msgs::TtsAction_<ContainerAllocator>& v)
  {
    s << indent << "action_goal: ";
    s << std::endl;
    Printer< ::pal_interaction_msgs::TtsActionGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.action_goal);
    s << indent << "action_result: ";
    s << std::endl;
    Printer< ::pal_interaction_msgs::TtsActionResult_<ContainerAllocator> >::stream(s, indent + "  ", v.action_result);
    s << indent << "action_feedback: ";
    s << std::endl;
    Printer< ::pal_interaction_msgs::TtsActionFeedback_<ContainerAllocator> >::stream(s, indent + "  ", v.action_feedback);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_INTERACTION_MSGS_MESSAGE_TTSACTION_H

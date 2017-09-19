// Generated by gencpp from file pal_video_recording_msgs/StartRecordingRequest.msg
// DO NOT EDIT!


#ifndef PAL_VIDEO_RECORDING_MSGS_MESSAGE_STARTRECORDINGREQUEST_H
#define PAL_VIDEO_RECORDING_MSGS_MESSAGE_STARTRECORDINGREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pal_video_recording_msgs
{
template <class ContainerAllocator>
struct StartRecordingRequest_
{
  typedef StartRecordingRequest_<ContainerAllocator> Type;

  StartRecordingRequest_()
    {
    }
  StartRecordingRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }






  typedef boost::shared_ptr< ::pal_video_recording_msgs::StartRecordingRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_video_recording_msgs::StartRecordingRequest_<ContainerAllocator> const> ConstPtr;

}; // struct StartRecordingRequest_

typedef ::pal_video_recording_msgs::StartRecordingRequest_<std::allocator<void> > StartRecordingRequest;

typedef boost::shared_ptr< ::pal_video_recording_msgs::StartRecordingRequest > StartRecordingRequestPtr;
typedef boost::shared_ptr< ::pal_video_recording_msgs::StartRecordingRequest const> StartRecordingRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_video_recording_msgs::StartRecordingRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_video_recording_msgs::StartRecordingRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pal_video_recording_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pal_video_recording_msgs::StartRecordingRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_video_recording_msgs::StartRecordingRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_video_recording_msgs::StartRecordingRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_video_recording_msgs::StartRecordingRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_video_recording_msgs::StartRecordingRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_video_recording_msgs::StartRecordingRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_video_recording_msgs::StartRecordingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::pal_video_recording_msgs::StartRecordingRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_video_recording_msgs::StartRecordingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_video_recording_msgs/StartRecordingRequest";
  }

  static const char* value(const ::pal_video_recording_msgs::StartRecordingRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_video_recording_msgs::StartRecordingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
";
  }

  static const char* value(const ::pal_video_recording_msgs::StartRecordingRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_video_recording_msgs::StartRecordingRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct StartRecordingRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_video_recording_msgs::StartRecordingRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::pal_video_recording_msgs::StartRecordingRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // PAL_VIDEO_RECORDING_MSGS_MESSAGE_STARTRECORDINGREQUEST_H

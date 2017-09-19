// Generated by gencpp from file pal_vision_msgs/FaceTrackingStopRequest.msg
// DO NOT EDIT!


#ifndef PAL_VISION_MSGS_MESSAGE_FACETRACKINGSTOPREQUEST_H
#define PAL_VISION_MSGS_MESSAGE_FACETRACKINGSTOPREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pal_vision_msgs
{
template <class ContainerAllocator>
struct FaceTrackingStopRequest_
{
  typedef FaceTrackingStopRequest_<ContainerAllocator> Type;

  FaceTrackingStopRequest_()
    {
    }
  FaceTrackingStopRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }






  typedef boost::shared_ptr< ::pal_vision_msgs::FaceTrackingStopRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_vision_msgs::FaceTrackingStopRequest_<ContainerAllocator> const> ConstPtr;

}; // struct FaceTrackingStopRequest_

typedef ::pal_vision_msgs::FaceTrackingStopRequest_<std::allocator<void> > FaceTrackingStopRequest;

typedef boost::shared_ptr< ::pal_vision_msgs::FaceTrackingStopRequest > FaceTrackingStopRequestPtr;
typedef boost::shared_ptr< ::pal_vision_msgs::FaceTrackingStopRequest const> FaceTrackingStopRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_vision_msgs::FaceTrackingStopRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_vision_msgs::FaceTrackingStopRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pal_vision_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'pal_vision_msgs': ['/home/ssj/ros_ws/src/pal_msgs/pal_vision_msgs/msg', '/home/ssj/ros_ws/devel/share/pal_vision_msgs/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pal_vision_msgs::FaceTrackingStopRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_vision_msgs::FaceTrackingStopRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_vision_msgs::FaceTrackingStopRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_vision_msgs::FaceTrackingStopRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_vision_msgs::FaceTrackingStopRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_vision_msgs::FaceTrackingStopRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_vision_msgs::FaceTrackingStopRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::pal_vision_msgs::FaceTrackingStopRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_vision_msgs::FaceTrackingStopRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_vision_msgs/FaceTrackingStopRequest";
  }

  static const char* value(const ::pal_vision_msgs::FaceTrackingStopRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_vision_msgs::FaceTrackingStopRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
";
  }

  static const char* value(const ::pal_vision_msgs::FaceTrackingStopRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_vision_msgs::FaceTrackingStopRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FaceTrackingStopRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_vision_msgs::FaceTrackingStopRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::pal_vision_msgs::FaceTrackingStopRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // PAL_VISION_MSGS_MESSAGE_FACETRACKINGSTOPREQUEST_H

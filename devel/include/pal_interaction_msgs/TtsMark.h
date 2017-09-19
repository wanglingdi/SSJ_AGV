// Generated by gencpp from file pal_interaction_msgs/TtsMark.msg
// DO NOT EDIT!


#ifndef PAL_INTERACTION_MSGS_MESSAGE_TTSMARK_H
#define PAL_INTERACTION_MSGS_MESSAGE_TTSMARK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pal_interaction_msgs
{
template <class ContainerAllocator>
struct TtsMark_
{
  typedef TtsMark_<ContainerAllocator> Type;

  TtsMark_()
    : id()
    , keys()
    , value()  {
    }
  TtsMark_(const ContainerAllocator& _alloc)
    : id(_alloc)
    , keys(_alloc)
    , value(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _id_type;
  _id_type id;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _keys_type;
  _keys_type keys;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _value_type;
  _value_type value;




  typedef boost::shared_ptr< ::pal_interaction_msgs::TtsMark_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pal_interaction_msgs::TtsMark_<ContainerAllocator> const> ConstPtr;

}; // struct TtsMark_

typedef ::pal_interaction_msgs::TtsMark_<std::allocator<void> > TtsMark;

typedef boost::shared_ptr< ::pal_interaction_msgs::TtsMark > TtsMarkPtr;
typedef boost::shared_ptr< ::pal_interaction_msgs::TtsMark const> TtsMarkConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pal_interaction_msgs::TtsMark_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pal_interaction_msgs::TtsMark_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::pal_interaction_msgs::TtsMark_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pal_interaction_msgs::TtsMark_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_interaction_msgs::TtsMark_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pal_interaction_msgs::TtsMark_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_interaction_msgs::TtsMark_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pal_interaction_msgs::TtsMark_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pal_interaction_msgs::TtsMark_<ContainerAllocator> >
{
  static const char* value()
  {
    return "10ae9a83cac56ac1660df7e26eabeac9";
  }

  static const char* value(const ::pal_interaction_msgs::TtsMark_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x10ae9a83cac56ac1ULL;
  static const uint64_t static_value2 = 0x660df7e26eabeac9ULL;
};

template<class ContainerAllocator>
struct DataType< ::pal_interaction_msgs::TtsMark_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pal_interaction_msgs/TtsMark";
  }

  static const char* value(const ::pal_interaction_msgs::TtsMark_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pal_interaction_msgs::TtsMark_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# id will contain the value of name argument in the <mark/>\n\
# tags when they are placed in synthesised text.\n\
# Filling keys and value is not implemented yet.\n\
string id\n\
string[] keys\n\
string[] value\n\
";
  }

  static const char* value(const ::pal_interaction_msgs::TtsMark_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pal_interaction_msgs::TtsMark_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.keys);
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TtsMark_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pal_interaction_msgs::TtsMark_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pal_interaction_msgs::TtsMark_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.id);
    s << indent << "keys[]" << std::endl;
    for (size_t i = 0; i < v.keys.size(); ++i)
    {
      s << indent << "  keys[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.keys[i]);
    }
    s << indent << "value[]" << std::endl;
    for (size_t i = 0; i < v.value.size(); ++i)
    {
      s << indent << "  value[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.value[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // PAL_INTERACTION_MSGS_MESSAGE_TTSMARK_H

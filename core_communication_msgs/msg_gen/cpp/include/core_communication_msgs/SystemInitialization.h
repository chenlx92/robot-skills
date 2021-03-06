/* Auto-generated by genmsg_cpp for file /home/biorob/rosstacks/core_dev/core_communication_msgs/msg/SystemInitialization.msg */
#ifndef CORE_COMMUNICATION_MSGS_MESSAGE_SYSTEMINITIALIZATION_H
#define CORE_COMMUNICATION_MSGS_MESSAGE_SYSTEMINITIALIZATION_H
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


namespace core_communication_msgs
{
template <class ContainerAllocator>
struct SystemInitialization_ {
  typedef SystemInitialization_<ContainerAllocator> Type;

  SystemInitialization_()
  : connect_disconnect_robot(false)
  , shutdown_system(false)
  , connect_over_ethercat(false)
  , value(false)
  , comment()
  {
  }

  SystemInitialization_(const ContainerAllocator& _alloc)
  : connect_disconnect_robot(false)
  , shutdown_system(false)
  , connect_over_ethercat(false)
  , value(false)
  , comment(_alloc)
  {
  }

  typedef uint8_t _connect_disconnect_robot_type;
  uint8_t connect_disconnect_robot;

  typedef uint8_t _shutdown_system_type;
  uint8_t shutdown_system;

  typedef uint8_t _connect_over_ethercat_type;
  uint8_t connect_over_ethercat;

  typedef uint8_t _value_type;
  uint8_t value;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _comment_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  comment;


  typedef boost::shared_ptr< ::core_communication_msgs::SystemInitialization_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::core_communication_msgs::SystemInitialization_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct SystemInitialization
typedef  ::core_communication_msgs::SystemInitialization_<std::allocator<void> > SystemInitialization;

typedef boost::shared_ptr< ::core_communication_msgs::SystemInitialization> SystemInitializationPtr;
typedef boost::shared_ptr< ::core_communication_msgs::SystemInitialization const> SystemInitializationConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::core_communication_msgs::SystemInitialization_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::core_communication_msgs::SystemInitialization_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace core_communication_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::core_communication_msgs::SystemInitialization_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::core_communication_msgs::SystemInitialization_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::core_communication_msgs::SystemInitialization_<ContainerAllocator> > {
  static const char* value() 
  {
    return "a3c6a470858a3bb79e22a56d01662182";
  }

  static const char* value(const  ::core_communication_msgs::SystemInitialization_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xa3c6a470858a3bb7ULL;
  static const uint64_t static_value2 = 0x9e22a56d01662182ULL;
};

template<class ContainerAllocator>
struct DataType< ::core_communication_msgs::SystemInitialization_<ContainerAllocator> > {
  static const char* value() 
  {
    return "core_communication_msgs/SystemInitialization";
  }

  static const char* value(const  ::core_communication_msgs::SystemInitialization_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::core_communication_msgs::SystemInitialization_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bool connect_disconnect_robot\n\
bool shutdown_system\n\
bool connect_over_ethercat\n\
bool value\n\
string comment\n\
";
  }

  static const char* value(const  ::core_communication_msgs::SystemInitialization_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::core_communication_msgs::SystemInitialization_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.connect_disconnect_robot);
    stream.next(m.shutdown_system);
    stream.next(m.connect_over_ethercat);
    stream.next(m.value);
    stream.next(m.comment);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct SystemInitialization_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::core_communication_msgs::SystemInitialization_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::core_communication_msgs::SystemInitialization_<ContainerAllocator> & v) 
  {
    s << indent << "connect_disconnect_robot: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.connect_disconnect_robot);
    s << indent << "shutdown_system: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.shutdown_system);
    s << indent << "connect_over_ethercat: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.connect_over_ethercat);
    s << indent << "value: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.value);
    s << indent << "comment: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.comment);
  }
};


} // namespace message_operations
} // namespace ros

#endif // CORE_COMMUNICATION_MSGS_MESSAGE_SYSTEMINITIALIZATION_H


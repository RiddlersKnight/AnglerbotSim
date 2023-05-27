// Generated by gencpp from file niryo_one_msgs/LogStatus.msg
// DO NOT EDIT!


#ifndef NIRYO_ONE_MSGS_MESSAGE_LOGSTATUS_H
#define NIRYO_ONE_MSGS_MESSAGE_LOGSTATUS_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace niryo_one_msgs
{
template <class ContainerAllocator>
struct LogStatus_
{
  typedef LogStatus_<ContainerAllocator> Type;

  LogStatus_()
    : header()
    , log_size(0)
    , available_disk_size(0)
    , purge_log_on_startup(false)  {
    }
  LogStatus_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , log_size(0)
    , available_disk_size(0)
    , purge_log_on_startup(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int32_t _log_size_type;
  _log_size_type log_size;

   typedef int32_t _available_disk_size_type;
  _available_disk_size_type available_disk_size;

   typedef uint8_t _purge_log_on_startup_type;
  _purge_log_on_startup_type purge_log_on_startup;





  typedef boost::shared_ptr< ::niryo_one_msgs::LogStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::niryo_one_msgs::LogStatus_<ContainerAllocator> const> ConstPtr;

}; // struct LogStatus_

typedef ::niryo_one_msgs::LogStatus_<std::allocator<void> > LogStatus;

typedef boost::shared_ptr< ::niryo_one_msgs::LogStatus > LogStatusPtr;
typedef boost::shared_ptr< ::niryo_one_msgs::LogStatus const> LogStatusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::niryo_one_msgs::LogStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::niryo_one_msgs::LogStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::niryo_one_msgs::LogStatus_<ContainerAllocator1> & lhs, const ::niryo_one_msgs::LogStatus_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.log_size == rhs.log_size &&
    lhs.available_disk_size == rhs.available_disk_size &&
    lhs.purge_log_on_startup == rhs.purge_log_on_startup;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::niryo_one_msgs::LogStatus_<ContainerAllocator1> & lhs, const ::niryo_one_msgs::LogStatus_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace niryo_one_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::niryo_one_msgs::LogStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::niryo_one_msgs::LogStatus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::niryo_one_msgs::LogStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::niryo_one_msgs::LogStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::niryo_one_msgs::LogStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::niryo_one_msgs::LogStatus_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::niryo_one_msgs::LogStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "37de8006fbbed6f8e3b23a8291bb9bf7";
  }

  static const char* value(const ::niryo_one_msgs::LogStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x37de8006fbbed6f8ULL;
  static const uint64_t static_value2 = 0xe3b23a8291bb9bf7ULL;
};

template<class ContainerAllocator>
struct DataType< ::niryo_one_msgs::LogStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "niryo_one_msgs/LogStatus";
  }

  static const char* value(const ::niryo_one_msgs::LogStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::niryo_one_msgs::LogStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"std_msgs/Header header\n"
"\n"
"# in MB\n"
"int32 log_size \n"
"int32 available_disk_size\n"
"bool purge_log_on_startup\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::niryo_one_msgs::LogStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::niryo_one_msgs::LogStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.log_size);
      stream.next(m.available_disk_size);
      stream.next(m.purge_log_on_startup);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LogStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::niryo_one_msgs::LogStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::niryo_one_msgs::LogStatus_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "log_size: ";
    Printer<int32_t>::stream(s, indent + "  ", v.log_size);
    s << indent << "available_disk_size: ";
    Printer<int32_t>::stream(s, indent + "  ", v.available_disk_size);
    s << indent << "purge_log_on_startup: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.purge_log_on_startup);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NIRYO_ONE_MSGS_MESSAGE_LOGSTATUS_H

// Generated by gencpp from file moveit_msgs/ChangeDriftDimensionsResponse.msg
// DO NOT EDIT!


#ifndef MOVEIT_MSGS_MESSAGE_CHANGEDRIFTDIMENSIONSRESPONSE_H
#define MOVEIT_MSGS_MESSAGE_CHANGEDRIFTDIMENSIONSRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace moveit_msgs
{
template <class ContainerAllocator>
struct ChangeDriftDimensionsResponse_
{
  typedef ChangeDriftDimensionsResponse_<ContainerAllocator> Type;

  ChangeDriftDimensionsResponse_()
    : success(false)  {
    }
  ChangeDriftDimensionsResponse_(const ContainerAllocator& _alloc)
    : success(false)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::moveit_msgs::ChangeDriftDimensionsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::moveit_msgs::ChangeDriftDimensionsResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ChangeDriftDimensionsResponse_

typedef ::moveit_msgs::ChangeDriftDimensionsResponse_<std::allocator<void> > ChangeDriftDimensionsResponse;

typedef boost::shared_ptr< ::moveit_msgs::ChangeDriftDimensionsResponse > ChangeDriftDimensionsResponsePtr;
typedef boost::shared_ptr< ::moveit_msgs::ChangeDriftDimensionsResponse const> ChangeDriftDimensionsResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::moveit_msgs::ChangeDriftDimensionsResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::moveit_msgs::ChangeDriftDimensionsResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::moveit_msgs::ChangeDriftDimensionsResponse_<ContainerAllocator1> & lhs, const ::moveit_msgs::ChangeDriftDimensionsResponse_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::moveit_msgs::ChangeDriftDimensionsResponse_<ContainerAllocator1> & lhs, const ::moveit_msgs::ChangeDriftDimensionsResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace moveit_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::moveit_msgs::ChangeDriftDimensionsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::moveit_msgs::ChangeDriftDimensionsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::ChangeDriftDimensionsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::ChangeDriftDimensionsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::ChangeDriftDimensionsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::ChangeDriftDimensionsResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::moveit_msgs::ChangeDriftDimensionsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const ::moveit_msgs::ChangeDriftDimensionsResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x358e233cde0c8a8bULL;
  static const uint64_t static_value2 = 0xcfea4ce193f8fc15ULL;
};

template<class ContainerAllocator>
struct DataType< ::moveit_msgs::ChangeDriftDimensionsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "moveit_msgs/ChangeDriftDimensionsResponse";
  }

  static const char* value(const ::moveit_msgs::ChangeDriftDimensionsResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::moveit_msgs::ChangeDriftDimensionsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n"
"\n"
;
  }

  static const char* value(const ::moveit_msgs::ChangeDriftDimensionsResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::moveit_msgs::ChangeDriftDimensionsResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ChangeDriftDimensionsResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::moveit_msgs::ChangeDriftDimensionsResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::moveit_msgs::ChangeDriftDimensionsResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOVEIT_MSGS_MESSAGE_CHANGEDRIFTDIMENSIONSRESPONSE_H

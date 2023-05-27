// Generated by gencpp from file moveit_msgs/DeleteRobotStateFromWarehouseResponse.msg
// DO NOT EDIT!


#ifndef MOVEIT_MSGS_MESSAGE_DELETEROBOTSTATEFROMWAREHOUSERESPONSE_H
#define MOVEIT_MSGS_MESSAGE_DELETEROBOTSTATEFROMWAREHOUSERESPONSE_H


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
struct DeleteRobotStateFromWarehouseResponse_
{
  typedef DeleteRobotStateFromWarehouseResponse_<ContainerAllocator> Type;

  DeleteRobotStateFromWarehouseResponse_()
    {
    }
  DeleteRobotStateFromWarehouseResponse_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::moveit_msgs::DeleteRobotStateFromWarehouseResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::moveit_msgs::DeleteRobotStateFromWarehouseResponse_<ContainerAllocator> const> ConstPtr;

}; // struct DeleteRobotStateFromWarehouseResponse_

typedef ::moveit_msgs::DeleteRobotStateFromWarehouseResponse_<std::allocator<void> > DeleteRobotStateFromWarehouseResponse;

typedef boost::shared_ptr< ::moveit_msgs::DeleteRobotStateFromWarehouseResponse > DeleteRobotStateFromWarehouseResponsePtr;
typedef boost::shared_ptr< ::moveit_msgs::DeleteRobotStateFromWarehouseResponse const> DeleteRobotStateFromWarehouseResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::moveit_msgs::DeleteRobotStateFromWarehouseResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::moveit_msgs::DeleteRobotStateFromWarehouseResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace moveit_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::moveit_msgs::DeleteRobotStateFromWarehouseResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::moveit_msgs::DeleteRobotStateFromWarehouseResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::DeleteRobotStateFromWarehouseResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::DeleteRobotStateFromWarehouseResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::DeleteRobotStateFromWarehouseResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::DeleteRobotStateFromWarehouseResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::moveit_msgs::DeleteRobotStateFromWarehouseResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::moveit_msgs::DeleteRobotStateFromWarehouseResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::moveit_msgs::DeleteRobotStateFromWarehouseResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "moveit_msgs/DeleteRobotStateFromWarehouseResponse";
  }

  static const char* value(const ::moveit_msgs::DeleteRobotStateFromWarehouseResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::moveit_msgs::DeleteRobotStateFromWarehouseResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::moveit_msgs::DeleteRobotStateFromWarehouseResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::moveit_msgs::DeleteRobotStateFromWarehouseResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DeleteRobotStateFromWarehouseResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::moveit_msgs::DeleteRobotStateFromWarehouseResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::moveit_msgs::DeleteRobotStateFromWarehouseResponse_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // MOVEIT_MSGS_MESSAGE_DELETEROBOTSTATEFROMWAREHOUSERESPONSE_H

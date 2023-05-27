// Generated by gencpp from file niryo_one_msgs/GetWorkspaceRobotPosesRequest.msg
// DO NOT EDIT!


#ifndef NIRYO_ONE_MSGS_MESSAGE_GETWORKSPACEROBOTPOSESREQUEST_H
#define NIRYO_ONE_MSGS_MESSAGE_GETWORKSPACEROBOTPOSESREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace niryo_one_msgs
{
template <class ContainerAllocator>
struct GetWorkspaceRobotPosesRequest_
{
  typedef GetWorkspaceRobotPosesRequest_<ContainerAllocator> Type;

  GetWorkspaceRobotPosesRequest_()
    : workspace()  {
    }
  GetWorkspaceRobotPosesRequest_(const ContainerAllocator& _alloc)
    : workspace(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _workspace_type;
  _workspace_type workspace;





  typedef boost::shared_ptr< ::niryo_one_msgs::GetWorkspaceRobotPosesRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::niryo_one_msgs::GetWorkspaceRobotPosesRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetWorkspaceRobotPosesRequest_

typedef ::niryo_one_msgs::GetWorkspaceRobotPosesRequest_<std::allocator<void> > GetWorkspaceRobotPosesRequest;

typedef boost::shared_ptr< ::niryo_one_msgs::GetWorkspaceRobotPosesRequest > GetWorkspaceRobotPosesRequestPtr;
typedef boost::shared_ptr< ::niryo_one_msgs::GetWorkspaceRobotPosesRequest const> GetWorkspaceRobotPosesRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::niryo_one_msgs::GetWorkspaceRobotPosesRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::niryo_one_msgs::GetWorkspaceRobotPosesRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::niryo_one_msgs::GetWorkspaceRobotPosesRequest_<ContainerAllocator1> & lhs, const ::niryo_one_msgs::GetWorkspaceRobotPosesRequest_<ContainerAllocator2> & rhs)
{
  return lhs.workspace == rhs.workspace;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::niryo_one_msgs::GetWorkspaceRobotPosesRequest_<ContainerAllocator1> & lhs, const ::niryo_one_msgs::GetWorkspaceRobotPosesRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace niryo_one_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::niryo_one_msgs::GetWorkspaceRobotPosesRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::niryo_one_msgs::GetWorkspaceRobotPosesRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::niryo_one_msgs::GetWorkspaceRobotPosesRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::niryo_one_msgs::GetWorkspaceRobotPosesRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::niryo_one_msgs::GetWorkspaceRobotPosesRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::niryo_one_msgs::GetWorkspaceRobotPosesRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::niryo_one_msgs::GetWorkspaceRobotPosesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a4c8afcaa65fb464384c5579b2744fb0";
  }

  static const char* value(const ::niryo_one_msgs::GetWorkspaceRobotPosesRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa4c8afcaa65fb464ULL;
  static const uint64_t static_value2 = 0x384c5579b2744fb0ULL;
};

template<class ContainerAllocator>
struct DataType< ::niryo_one_msgs::GetWorkspaceRobotPosesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "niryo_one_msgs/GetWorkspaceRobotPosesRequest";
  }

  static const char* value(const ::niryo_one_msgs::GetWorkspaceRobotPosesRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::niryo_one_msgs::GetWorkspaceRobotPosesRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string workspace\n"
;
  }

  static const char* value(const ::niryo_one_msgs::GetWorkspaceRobotPosesRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::niryo_one_msgs::GetWorkspaceRobotPosesRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.workspace);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetWorkspaceRobotPosesRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::niryo_one_msgs::GetWorkspaceRobotPosesRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::niryo_one_msgs::GetWorkspaceRobotPosesRequest_<ContainerAllocator>& v)
  {
    s << indent << "workspace: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.workspace);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NIRYO_ONE_MSGS_MESSAGE_GETWORKSPACEROBOTPOSESREQUEST_H

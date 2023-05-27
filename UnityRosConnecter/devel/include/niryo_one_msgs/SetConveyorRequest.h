// Generated by gencpp from file niryo_one_msgs/SetConveyorRequest.msg
// DO NOT EDIT!


#ifndef NIRYO_ONE_MSGS_MESSAGE_SETCONVEYORREQUEST_H
#define NIRYO_ONE_MSGS_MESSAGE_SETCONVEYORREQUEST_H


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
struct SetConveyorRequest_
{
  typedef SetConveyorRequest_<ContainerAllocator> Type;

  SetConveyorRequest_()
    : id(0)
    , activate(false)  {
    }
  SetConveyorRequest_(const ContainerAllocator& _alloc)
    : id(0)
    , activate(false)  {
  (void)_alloc;
    }



   typedef uint8_t _id_type;
  _id_type id;

   typedef uint8_t _activate_type;
  _activate_type activate;





  typedef boost::shared_ptr< ::niryo_one_msgs::SetConveyorRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::niryo_one_msgs::SetConveyorRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetConveyorRequest_

typedef ::niryo_one_msgs::SetConveyorRequest_<std::allocator<void> > SetConveyorRequest;

typedef boost::shared_ptr< ::niryo_one_msgs::SetConveyorRequest > SetConveyorRequestPtr;
typedef boost::shared_ptr< ::niryo_one_msgs::SetConveyorRequest const> SetConveyorRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::niryo_one_msgs::SetConveyorRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::niryo_one_msgs::SetConveyorRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::niryo_one_msgs::SetConveyorRequest_<ContainerAllocator1> & lhs, const ::niryo_one_msgs::SetConveyorRequest_<ContainerAllocator2> & rhs)
{
  return lhs.id == rhs.id &&
    lhs.activate == rhs.activate;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::niryo_one_msgs::SetConveyorRequest_<ContainerAllocator1> & lhs, const ::niryo_one_msgs::SetConveyorRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace niryo_one_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::niryo_one_msgs::SetConveyorRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::niryo_one_msgs::SetConveyorRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::niryo_one_msgs::SetConveyorRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::niryo_one_msgs::SetConveyorRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::niryo_one_msgs::SetConveyorRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::niryo_one_msgs::SetConveyorRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::niryo_one_msgs::SetConveyorRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3bf1bdb46e69fad3aca5c380a574b8a7";
  }

  static const char* value(const ::niryo_one_msgs::SetConveyorRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3bf1bdb46e69fad3ULL;
  static const uint64_t static_value2 = 0xaca5c380a574b8a7ULL;
};

template<class ContainerAllocator>
struct DataType< ::niryo_one_msgs::SetConveyorRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "niryo_one_msgs/SetConveyorRequest";
  }

  static const char* value(const ::niryo_one_msgs::SetConveyorRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::niryo_one_msgs::SetConveyorRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 id\n"
"bool activate\n"
;
  }

  static const char* value(const ::niryo_one_msgs::SetConveyorRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::niryo_one_msgs::SetConveyorRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.activate);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetConveyorRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::niryo_one_msgs::SetConveyorRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::niryo_one_msgs::SetConveyorRequest_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.id);
    s << indent << "activate: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.activate);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NIRYO_ONE_MSGS_MESSAGE_SETCONVEYORREQUEST_H

// Generated by gencpp from file niryo_one_msgs/ControlConveyorResponse.msg
// DO NOT EDIT!


#ifndef NIRYO_ONE_MSGS_MESSAGE_CONTROLCONVEYORRESPONSE_H
#define NIRYO_ONE_MSGS_MESSAGE_CONTROLCONVEYORRESPONSE_H


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
struct ControlConveyorResponse_
{
  typedef ControlConveyorResponse_<ContainerAllocator> Type;

  ControlConveyorResponse_()
    : status(0)
    , message()  {
    }
  ControlConveyorResponse_(const ContainerAllocator& _alloc)
    : status(0)
    , message(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _status_type;
  _status_type status;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _message_type;
  _message_type message;





  typedef boost::shared_ptr< ::niryo_one_msgs::ControlConveyorResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::niryo_one_msgs::ControlConveyorResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ControlConveyorResponse_

typedef ::niryo_one_msgs::ControlConveyorResponse_<std::allocator<void> > ControlConveyorResponse;

typedef boost::shared_ptr< ::niryo_one_msgs::ControlConveyorResponse > ControlConveyorResponsePtr;
typedef boost::shared_ptr< ::niryo_one_msgs::ControlConveyorResponse const> ControlConveyorResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::niryo_one_msgs::ControlConveyorResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::niryo_one_msgs::ControlConveyorResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::niryo_one_msgs::ControlConveyorResponse_<ContainerAllocator1> & lhs, const ::niryo_one_msgs::ControlConveyorResponse_<ContainerAllocator2> & rhs)
{
  return lhs.status == rhs.status &&
    lhs.message == rhs.message;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::niryo_one_msgs::ControlConveyorResponse_<ContainerAllocator1> & lhs, const ::niryo_one_msgs::ControlConveyorResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace niryo_one_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::niryo_one_msgs::ControlConveyorResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::niryo_one_msgs::ControlConveyorResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::niryo_one_msgs::ControlConveyorResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::niryo_one_msgs::ControlConveyorResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::niryo_one_msgs::ControlConveyorResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::niryo_one_msgs::ControlConveyorResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::niryo_one_msgs::ControlConveyorResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "684cd572f268bd9685a29b0430c41747";
  }

  static const char* value(const ::niryo_one_msgs::ControlConveyorResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x684cd572f268bd96ULL;
  static const uint64_t static_value2 = 0x85a29b0430c41747ULL;
};

template<class ContainerAllocator>
struct DataType< ::niryo_one_msgs::ControlConveyorResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "niryo_one_msgs/ControlConveyorResponse";
  }

  static const char* value(const ::niryo_one_msgs::ControlConveyorResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::niryo_one_msgs::ControlConveyorResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 status\n"
"string message\n"
;
  }

  static const char* value(const ::niryo_one_msgs::ControlConveyorResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::niryo_one_msgs::ControlConveyorResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.status);
      stream.next(m.message);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ControlConveyorResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::niryo_one_msgs::ControlConveyorResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::niryo_one_msgs::ControlConveyorResponse_<ContainerAllocator>& v)
  {
    s << indent << "status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.status);
    s << indent << "message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.message);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NIRYO_ONE_MSGS_MESSAGE_CONTROLCONVEYORRESPONSE_H
// Generated by gencpp from file niryo_one_msgs/SetCalibrationCamResponse.msg
// DO NOT EDIT!


#ifndef NIRYO_ONE_MSGS_MESSAGE_SETCALIBRATIONCAMRESPONSE_H
#define NIRYO_ONE_MSGS_MESSAGE_SETCALIBRATIONCAMRESPONSE_H


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
struct SetCalibrationCamResponse_
{
  typedef SetCalibrationCamResponse_<ContainerAllocator> Type;

  SetCalibrationCamResponse_()
    : status(0)  {
    }
  SetCalibrationCamResponse_(const ContainerAllocator& _alloc)
    : status(0)  {
  (void)_alloc;
    }



   typedef int32_t _status_type;
  _status_type status;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(SUCCESSFULLY_SET)
  #undef SUCCESSFULLY_SET
#endif
#if defined(_WIN32) && defined(OVERWRITTEN)
  #undef OVERWRITTEN
#endif
#if defined(_WIN32) && defined(NOT_SET)
  #undef NOT_SET
#endif

  enum {
    SUCCESSFULLY_SET = 0,
    OVERWRITTEN = 1,
    NOT_SET = -1,
  };


  typedef boost::shared_ptr< ::niryo_one_msgs::SetCalibrationCamResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::niryo_one_msgs::SetCalibrationCamResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetCalibrationCamResponse_

typedef ::niryo_one_msgs::SetCalibrationCamResponse_<std::allocator<void> > SetCalibrationCamResponse;

typedef boost::shared_ptr< ::niryo_one_msgs::SetCalibrationCamResponse > SetCalibrationCamResponsePtr;
typedef boost::shared_ptr< ::niryo_one_msgs::SetCalibrationCamResponse const> SetCalibrationCamResponseConstPtr;

// constants requiring out of line definition

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::niryo_one_msgs::SetCalibrationCamResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::niryo_one_msgs::SetCalibrationCamResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::niryo_one_msgs::SetCalibrationCamResponse_<ContainerAllocator1> & lhs, const ::niryo_one_msgs::SetCalibrationCamResponse_<ContainerAllocator2> & rhs)
{
  return lhs.status == rhs.status;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::niryo_one_msgs::SetCalibrationCamResponse_<ContainerAllocator1> & lhs, const ::niryo_one_msgs::SetCalibrationCamResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace niryo_one_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::niryo_one_msgs::SetCalibrationCamResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::niryo_one_msgs::SetCalibrationCamResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::niryo_one_msgs::SetCalibrationCamResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::niryo_one_msgs::SetCalibrationCamResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::niryo_one_msgs::SetCalibrationCamResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::niryo_one_msgs::SetCalibrationCamResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::niryo_one_msgs::SetCalibrationCamResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b8d517967bcdc1a37247f33181b13bc0";
  }

  static const char* value(const ::niryo_one_msgs::SetCalibrationCamResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb8d517967bcdc1a3ULL;
  static const uint64_t static_value2 = 0x7247f33181b13bc0ULL;
};

template<class ContainerAllocator>
struct DataType< ::niryo_one_msgs::SetCalibrationCamResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "niryo_one_msgs/SetCalibrationCamResponse";
  }

  static const char* value(const ::niryo_one_msgs::SetCalibrationCamResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::niryo_one_msgs::SetCalibrationCamResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 status\n"
"int32 SUCCESSFULLY_SET = 0\n"
"int32 OVERWRITTEN = 1\n"
"int32 NOT_SET = -1\n"
;
  }

  static const char* value(const ::niryo_one_msgs::SetCalibrationCamResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::niryo_one_msgs::SetCalibrationCamResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.status);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetCalibrationCamResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::niryo_one_msgs::SetCalibrationCamResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::niryo_one_msgs::SetCalibrationCamResponse_<ContainerAllocator>& v)
  {
    s << indent << "status: ";
    Printer<int32_t>::stream(s, indent + "  ", v.status);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NIRYO_ONE_MSGS_MESSAGE_SETCALIBRATIONCAMRESPONSE_H
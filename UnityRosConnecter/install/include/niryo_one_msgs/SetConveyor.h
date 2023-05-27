// Generated by gencpp from file niryo_one_msgs/SetConveyor.msg
// DO NOT EDIT!


#ifndef NIRYO_ONE_MSGS_MESSAGE_SETCONVEYOR_H
#define NIRYO_ONE_MSGS_MESSAGE_SETCONVEYOR_H

#include <ros/service_traits.h>


#include <niryo_one_msgs/SetConveyorRequest.h>
#include <niryo_one_msgs/SetConveyorResponse.h>


namespace niryo_one_msgs
{

struct SetConveyor
{

typedef SetConveyorRequest Request;
typedef SetConveyorResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetConveyor
} // namespace niryo_one_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::niryo_one_msgs::SetConveyor > {
  static const char* value()
  {
    return "afb7227a45bc4a5cddeb751521d20304";
  }

  static const char* value(const ::niryo_one_msgs::SetConveyor&) { return value(); }
};

template<>
struct DataType< ::niryo_one_msgs::SetConveyor > {
  static const char* value()
  {
    return "niryo_one_msgs/SetConveyor";
  }

  static const char* value(const ::niryo_one_msgs::SetConveyor&) { return value(); }
};


// service_traits::MD5Sum< ::niryo_one_msgs::SetConveyorRequest> should match
// service_traits::MD5Sum< ::niryo_one_msgs::SetConveyor >
template<>
struct MD5Sum< ::niryo_one_msgs::SetConveyorRequest>
{
  static const char* value()
  {
    return MD5Sum< ::niryo_one_msgs::SetConveyor >::value();
  }
  static const char* value(const ::niryo_one_msgs::SetConveyorRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::niryo_one_msgs::SetConveyorRequest> should match
// service_traits::DataType< ::niryo_one_msgs::SetConveyor >
template<>
struct DataType< ::niryo_one_msgs::SetConveyorRequest>
{
  static const char* value()
  {
    return DataType< ::niryo_one_msgs::SetConveyor >::value();
  }
  static const char* value(const ::niryo_one_msgs::SetConveyorRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::niryo_one_msgs::SetConveyorResponse> should match
// service_traits::MD5Sum< ::niryo_one_msgs::SetConveyor >
template<>
struct MD5Sum< ::niryo_one_msgs::SetConveyorResponse>
{
  static const char* value()
  {
    return MD5Sum< ::niryo_one_msgs::SetConveyor >::value();
  }
  static const char* value(const ::niryo_one_msgs::SetConveyorResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::niryo_one_msgs::SetConveyorResponse> should match
// service_traits::DataType< ::niryo_one_msgs::SetConveyor >
template<>
struct DataType< ::niryo_one_msgs::SetConveyorResponse>
{
  static const char* value()
  {
    return DataType< ::niryo_one_msgs::SetConveyor >::value();
  }
  static const char* value(const ::niryo_one_msgs::SetConveyorResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // NIRYO_ONE_MSGS_MESSAGE_SETCONVEYOR_H

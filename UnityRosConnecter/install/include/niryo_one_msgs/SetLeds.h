// Generated by gencpp from file niryo_one_msgs/SetLeds.msg
// DO NOT EDIT!


#ifndef NIRYO_ONE_MSGS_MESSAGE_SETLEDS_H
#define NIRYO_ONE_MSGS_MESSAGE_SETLEDS_H

#include <ros/service_traits.h>


#include <niryo_one_msgs/SetLedsRequest.h>
#include <niryo_one_msgs/SetLedsResponse.h>


namespace niryo_one_msgs
{

struct SetLeds
{

typedef SetLedsRequest Request;
typedef SetLedsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetLeds
} // namespace niryo_one_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::niryo_one_msgs::SetLeds > {
  static const char* value()
  {
    return "861c024139442a9008e88f543a7fb00e";
  }

  static const char* value(const ::niryo_one_msgs::SetLeds&) { return value(); }
};

template<>
struct DataType< ::niryo_one_msgs::SetLeds > {
  static const char* value()
  {
    return "niryo_one_msgs/SetLeds";
  }

  static const char* value(const ::niryo_one_msgs::SetLeds&) { return value(); }
};


// service_traits::MD5Sum< ::niryo_one_msgs::SetLedsRequest> should match
// service_traits::MD5Sum< ::niryo_one_msgs::SetLeds >
template<>
struct MD5Sum< ::niryo_one_msgs::SetLedsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::niryo_one_msgs::SetLeds >::value();
  }
  static const char* value(const ::niryo_one_msgs::SetLedsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::niryo_one_msgs::SetLedsRequest> should match
// service_traits::DataType< ::niryo_one_msgs::SetLeds >
template<>
struct DataType< ::niryo_one_msgs::SetLedsRequest>
{
  static const char* value()
  {
    return DataType< ::niryo_one_msgs::SetLeds >::value();
  }
  static const char* value(const ::niryo_one_msgs::SetLedsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::niryo_one_msgs::SetLedsResponse> should match
// service_traits::MD5Sum< ::niryo_one_msgs::SetLeds >
template<>
struct MD5Sum< ::niryo_one_msgs::SetLedsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::niryo_one_msgs::SetLeds >::value();
  }
  static const char* value(const ::niryo_one_msgs::SetLedsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::niryo_one_msgs::SetLedsResponse> should match
// service_traits::DataType< ::niryo_one_msgs::SetLeds >
template<>
struct DataType< ::niryo_one_msgs::SetLedsResponse>
{
  static const char* value()
  {
    return DataType< ::niryo_one_msgs::SetLeds >::value();
  }
  static const char* value(const ::niryo_one_msgs::SetLedsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // NIRYO_ONE_MSGS_MESSAGE_SETLEDS_H

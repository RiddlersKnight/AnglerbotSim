// Generated by gencpp from file niryo_one_msgs/PingDxlTool.msg
// DO NOT EDIT!


#ifndef NIRYO_ONE_MSGS_MESSAGE_PINGDXLTOOL_H
#define NIRYO_ONE_MSGS_MESSAGE_PINGDXLTOOL_H

#include <ros/service_traits.h>


#include <niryo_one_msgs/PingDxlToolRequest.h>
#include <niryo_one_msgs/PingDxlToolResponse.h>


namespace niryo_one_msgs
{

struct PingDxlTool
{

typedef PingDxlToolRequest Request;
typedef PingDxlToolResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct PingDxlTool
} // namespace niryo_one_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::niryo_one_msgs::PingDxlTool > {
  static const char* value()
  {
    return "7c200c402935dab5cf534afa12896068";
  }

  static const char* value(const ::niryo_one_msgs::PingDxlTool&) { return value(); }
};

template<>
struct DataType< ::niryo_one_msgs::PingDxlTool > {
  static const char* value()
  {
    return "niryo_one_msgs/PingDxlTool";
  }

  static const char* value(const ::niryo_one_msgs::PingDxlTool&) { return value(); }
};


// service_traits::MD5Sum< ::niryo_one_msgs::PingDxlToolRequest> should match
// service_traits::MD5Sum< ::niryo_one_msgs::PingDxlTool >
template<>
struct MD5Sum< ::niryo_one_msgs::PingDxlToolRequest>
{
  static const char* value()
  {
    return MD5Sum< ::niryo_one_msgs::PingDxlTool >::value();
  }
  static const char* value(const ::niryo_one_msgs::PingDxlToolRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::niryo_one_msgs::PingDxlToolRequest> should match
// service_traits::DataType< ::niryo_one_msgs::PingDxlTool >
template<>
struct DataType< ::niryo_one_msgs::PingDxlToolRequest>
{
  static const char* value()
  {
    return DataType< ::niryo_one_msgs::PingDxlTool >::value();
  }
  static const char* value(const ::niryo_one_msgs::PingDxlToolRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::niryo_one_msgs::PingDxlToolResponse> should match
// service_traits::MD5Sum< ::niryo_one_msgs::PingDxlTool >
template<>
struct MD5Sum< ::niryo_one_msgs::PingDxlToolResponse>
{
  static const char* value()
  {
    return MD5Sum< ::niryo_one_msgs::PingDxlTool >::value();
  }
  static const char* value(const ::niryo_one_msgs::PingDxlToolResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::niryo_one_msgs::PingDxlToolResponse> should match
// service_traits::DataType< ::niryo_one_msgs::PingDxlTool >
template<>
struct DataType< ::niryo_one_msgs::PingDxlToolResponse>
{
  static const char* value()
  {
    return DataType< ::niryo_one_msgs::PingDxlTool >::value();
  }
  static const char* value(const ::niryo_one_msgs::PingDxlToolResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // NIRYO_ONE_MSGS_MESSAGE_PINGDXLTOOL_H

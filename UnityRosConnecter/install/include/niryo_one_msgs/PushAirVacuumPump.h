// Generated by gencpp from file niryo_one_msgs/PushAirVacuumPump.msg
// DO NOT EDIT!


#ifndef NIRYO_ONE_MSGS_MESSAGE_PUSHAIRVACUUMPUMP_H
#define NIRYO_ONE_MSGS_MESSAGE_PUSHAIRVACUUMPUMP_H

#include <ros/service_traits.h>


#include <niryo_one_msgs/PushAirVacuumPumpRequest.h>
#include <niryo_one_msgs/PushAirVacuumPumpResponse.h>


namespace niryo_one_msgs
{

struct PushAirVacuumPump
{

typedef PushAirVacuumPumpRequest Request;
typedef PushAirVacuumPumpResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct PushAirVacuumPump
} // namespace niryo_one_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::niryo_one_msgs::PushAirVacuumPump > {
  static const char* value()
  {
    return "41cc870230024f471ead928a5e8205a0";
  }

  static const char* value(const ::niryo_one_msgs::PushAirVacuumPump&) { return value(); }
};

template<>
struct DataType< ::niryo_one_msgs::PushAirVacuumPump > {
  static const char* value()
  {
    return "niryo_one_msgs/PushAirVacuumPump";
  }

  static const char* value(const ::niryo_one_msgs::PushAirVacuumPump&) { return value(); }
};


// service_traits::MD5Sum< ::niryo_one_msgs::PushAirVacuumPumpRequest> should match
// service_traits::MD5Sum< ::niryo_one_msgs::PushAirVacuumPump >
template<>
struct MD5Sum< ::niryo_one_msgs::PushAirVacuumPumpRequest>
{
  static const char* value()
  {
    return MD5Sum< ::niryo_one_msgs::PushAirVacuumPump >::value();
  }
  static const char* value(const ::niryo_one_msgs::PushAirVacuumPumpRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::niryo_one_msgs::PushAirVacuumPumpRequest> should match
// service_traits::DataType< ::niryo_one_msgs::PushAirVacuumPump >
template<>
struct DataType< ::niryo_one_msgs::PushAirVacuumPumpRequest>
{
  static const char* value()
  {
    return DataType< ::niryo_one_msgs::PushAirVacuumPump >::value();
  }
  static const char* value(const ::niryo_one_msgs::PushAirVacuumPumpRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::niryo_one_msgs::PushAirVacuumPumpResponse> should match
// service_traits::MD5Sum< ::niryo_one_msgs::PushAirVacuumPump >
template<>
struct MD5Sum< ::niryo_one_msgs::PushAirVacuumPumpResponse>
{
  static const char* value()
  {
    return MD5Sum< ::niryo_one_msgs::PushAirVacuumPump >::value();
  }
  static const char* value(const ::niryo_one_msgs::PushAirVacuumPumpResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::niryo_one_msgs::PushAirVacuumPumpResponse> should match
// service_traits::DataType< ::niryo_one_msgs::PushAirVacuumPump >
template<>
struct DataType< ::niryo_one_msgs::PushAirVacuumPumpResponse>
{
  static const char* value()
  {
    return DataType< ::niryo_one_msgs::PushAirVacuumPump >::value();
  }
  static const char* value(const ::niryo_one_msgs::PushAirVacuumPumpResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // NIRYO_ONE_MSGS_MESSAGE_PUSHAIRVACUUMPUMP_H

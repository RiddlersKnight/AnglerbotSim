// Generated by gencpp from file niryo_one_msgs/EditWorkspace.msg
// DO NOT EDIT!


#ifndef NIRYO_ONE_MSGS_MESSAGE_EDITWORKSPACE_H
#define NIRYO_ONE_MSGS_MESSAGE_EDITWORKSPACE_H

#include <ros/service_traits.h>


#include <niryo_one_msgs/EditWorkspaceRequest.h>
#include <niryo_one_msgs/EditWorkspaceResponse.h>


namespace niryo_one_msgs
{

struct EditWorkspace
{

typedef EditWorkspaceRequest Request;
typedef EditWorkspaceResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct EditWorkspace
} // namespace niryo_one_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::niryo_one_msgs::EditWorkspace > {
  static const char* value()
  {
    return "d54856ae48391661101e9b86f647a340";
  }

  static const char* value(const ::niryo_one_msgs::EditWorkspace&) { return value(); }
};

template<>
struct DataType< ::niryo_one_msgs::EditWorkspace > {
  static const char* value()
  {
    return "niryo_one_msgs/EditWorkspace";
  }

  static const char* value(const ::niryo_one_msgs::EditWorkspace&) { return value(); }
};


// service_traits::MD5Sum< ::niryo_one_msgs::EditWorkspaceRequest> should match
// service_traits::MD5Sum< ::niryo_one_msgs::EditWorkspace >
template<>
struct MD5Sum< ::niryo_one_msgs::EditWorkspaceRequest>
{
  static const char* value()
  {
    return MD5Sum< ::niryo_one_msgs::EditWorkspace >::value();
  }
  static const char* value(const ::niryo_one_msgs::EditWorkspaceRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::niryo_one_msgs::EditWorkspaceRequest> should match
// service_traits::DataType< ::niryo_one_msgs::EditWorkspace >
template<>
struct DataType< ::niryo_one_msgs::EditWorkspaceRequest>
{
  static const char* value()
  {
    return DataType< ::niryo_one_msgs::EditWorkspace >::value();
  }
  static const char* value(const ::niryo_one_msgs::EditWorkspaceRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::niryo_one_msgs::EditWorkspaceResponse> should match
// service_traits::MD5Sum< ::niryo_one_msgs::EditWorkspace >
template<>
struct MD5Sum< ::niryo_one_msgs::EditWorkspaceResponse>
{
  static const char* value()
  {
    return MD5Sum< ::niryo_one_msgs::EditWorkspace >::value();
  }
  static const char* value(const ::niryo_one_msgs::EditWorkspaceResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::niryo_one_msgs::EditWorkspaceResponse> should match
// service_traits::DataType< ::niryo_one_msgs::EditWorkspace >
template<>
struct DataType< ::niryo_one_msgs::EditWorkspaceResponse>
{
  static const char* value()
  {
    return DataType< ::niryo_one_msgs::EditWorkspace >::value();
  }
  static const char* value(const ::niryo_one_msgs::EditWorkspaceResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // NIRYO_ONE_MSGS_MESSAGE_EDITWORKSPACE_H

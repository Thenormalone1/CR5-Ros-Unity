// Generated by gencpp from file dobot_v4_bringup/DOGroup.msg
// DO NOT EDIT!


#ifndef DOBOT_V4_BRINGUP_MESSAGE_DOGROUP_H
#define DOBOT_V4_BRINGUP_MESSAGE_DOGROUP_H

#include <ros/service_traits.h>


#include <dobot_v4_bringup/DOGroupRequest.h>
#include <dobot_v4_bringup/DOGroupResponse.h>


namespace dobot_v4_bringup
{

struct DOGroup
{

typedef DOGroupRequest Request;
typedef DOGroupResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct DOGroup
} // namespace dobot_v4_bringup


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dobot_v4_bringup::DOGroup > {
  static const char* value()
  {
    return "808684a591f350916730d57d20e91134";
  }

  static const char* value(const ::dobot_v4_bringup::DOGroup&) { return value(); }
};

template<>
struct DataType< ::dobot_v4_bringup::DOGroup > {
  static const char* value()
  {
    return "dobot_v4_bringup/DOGroup";
  }

  static const char* value(const ::dobot_v4_bringup::DOGroup&) { return value(); }
};


// service_traits::MD5Sum< ::dobot_v4_bringup::DOGroupRequest> should match
// service_traits::MD5Sum< ::dobot_v4_bringup::DOGroup >
template<>
struct MD5Sum< ::dobot_v4_bringup::DOGroupRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dobot_v4_bringup::DOGroup >::value();
  }
  static const char* value(const ::dobot_v4_bringup::DOGroupRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot_v4_bringup::DOGroupRequest> should match
// service_traits::DataType< ::dobot_v4_bringup::DOGroup >
template<>
struct DataType< ::dobot_v4_bringup::DOGroupRequest>
{
  static const char* value()
  {
    return DataType< ::dobot_v4_bringup::DOGroup >::value();
  }
  static const char* value(const ::dobot_v4_bringup::DOGroupRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dobot_v4_bringup::DOGroupResponse> should match
// service_traits::MD5Sum< ::dobot_v4_bringup::DOGroup >
template<>
struct MD5Sum< ::dobot_v4_bringup::DOGroupResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dobot_v4_bringup::DOGroup >::value();
  }
  static const char* value(const ::dobot_v4_bringup::DOGroupResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot_v4_bringup::DOGroupResponse> should match
// service_traits::DataType< ::dobot_v4_bringup::DOGroup >
template<>
struct DataType< ::dobot_v4_bringup::DOGroupResponse>
{
  static const char* value()
  {
    return DataType< ::dobot_v4_bringup::DOGroup >::value();
  }
  static const char* value(const ::dobot_v4_bringup::DOGroupResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DOBOT_V4_BRINGUP_MESSAGE_DOGROUP_H
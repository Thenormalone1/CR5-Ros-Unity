// Generated by gencpp from file dobot_v4_bringup/SetOutputFloat.msg
// DO NOT EDIT!


#ifndef DOBOT_V4_BRINGUP_MESSAGE_SETOUTPUTFLOAT_H
#define DOBOT_V4_BRINGUP_MESSAGE_SETOUTPUTFLOAT_H

#include <ros/service_traits.h>


#include <dobot_v4_bringup/SetOutputFloatRequest.h>
#include <dobot_v4_bringup/SetOutputFloatResponse.h>


namespace dobot_v4_bringup
{

struct SetOutputFloat
{

typedef SetOutputFloatRequest Request;
typedef SetOutputFloatResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetOutputFloat
} // namespace dobot_v4_bringup


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dobot_v4_bringup::SetOutputFloat > {
  static const char* value()
  {
    return "050d3ca114643319e79c7ef54b527cb4";
  }

  static const char* value(const ::dobot_v4_bringup::SetOutputFloat&) { return value(); }
};

template<>
struct DataType< ::dobot_v4_bringup::SetOutputFloat > {
  static const char* value()
  {
    return "dobot_v4_bringup/SetOutputFloat";
  }

  static const char* value(const ::dobot_v4_bringup::SetOutputFloat&) { return value(); }
};


// service_traits::MD5Sum< ::dobot_v4_bringup::SetOutputFloatRequest> should match
// service_traits::MD5Sum< ::dobot_v4_bringup::SetOutputFloat >
template<>
struct MD5Sum< ::dobot_v4_bringup::SetOutputFloatRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dobot_v4_bringup::SetOutputFloat >::value();
  }
  static const char* value(const ::dobot_v4_bringup::SetOutputFloatRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot_v4_bringup::SetOutputFloatRequest> should match
// service_traits::DataType< ::dobot_v4_bringup::SetOutputFloat >
template<>
struct DataType< ::dobot_v4_bringup::SetOutputFloatRequest>
{
  static const char* value()
  {
    return DataType< ::dobot_v4_bringup::SetOutputFloat >::value();
  }
  static const char* value(const ::dobot_v4_bringup::SetOutputFloatRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dobot_v4_bringup::SetOutputFloatResponse> should match
// service_traits::MD5Sum< ::dobot_v4_bringup::SetOutputFloat >
template<>
struct MD5Sum< ::dobot_v4_bringup::SetOutputFloatResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dobot_v4_bringup::SetOutputFloat >::value();
  }
  static const char* value(const ::dobot_v4_bringup::SetOutputFloatResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot_v4_bringup::SetOutputFloatResponse> should match
// service_traits::DataType< ::dobot_v4_bringup::SetOutputFloat >
template<>
struct DataType< ::dobot_v4_bringup::SetOutputFloatResponse>
{
  static const char* value()
  {
    return DataType< ::dobot_v4_bringup::SetOutputFloat >::value();
  }
  static const char* value(const ::dobot_v4_bringup::SetOutputFloatResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DOBOT_V4_BRINGUP_MESSAGE_SETOUTPUTFLOAT_H
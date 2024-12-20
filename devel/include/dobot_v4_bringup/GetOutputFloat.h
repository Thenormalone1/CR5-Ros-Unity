// Generated by gencpp from file dobot_v4_bringup/GetOutputFloat.msg
// DO NOT EDIT!


#ifndef DOBOT_V4_BRINGUP_MESSAGE_GETOUTPUTFLOAT_H
#define DOBOT_V4_BRINGUP_MESSAGE_GETOUTPUTFLOAT_H

#include <ros/service_traits.h>


#include <dobot_v4_bringup/GetOutputFloatRequest.h>
#include <dobot_v4_bringup/GetOutputFloatResponse.h>


namespace dobot_v4_bringup
{

struct GetOutputFloat
{

typedef GetOutputFloatRequest Request;
typedef GetOutputFloatResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetOutputFloat
} // namespace dobot_v4_bringup


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dobot_v4_bringup::GetOutputFloat > {
  static const char* value()
  {
    return "4f4e99215b78104599bc3fd88b4cdc1c";
  }

  static const char* value(const ::dobot_v4_bringup::GetOutputFloat&) { return value(); }
};

template<>
struct DataType< ::dobot_v4_bringup::GetOutputFloat > {
  static const char* value()
  {
    return "dobot_v4_bringup/GetOutputFloat";
  }

  static const char* value(const ::dobot_v4_bringup::GetOutputFloat&) { return value(); }
};


// service_traits::MD5Sum< ::dobot_v4_bringup::GetOutputFloatRequest> should match
// service_traits::MD5Sum< ::dobot_v4_bringup::GetOutputFloat >
template<>
struct MD5Sum< ::dobot_v4_bringup::GetOutputFloatRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dobot_v4_bringup::GetOutputFloat >::value();
  }
  static const char* value(const ::dobot_v4_bringup::GetOutputFloatRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot_v4_bringup::GetOutputFloatRequest> should match
// service_traits::DataType< ::dobot_v4_bringup::GetOutputFloat >
template<>
struct DataType< ::dobot_v4_bringup::GetOutputFloatRequest>
{
  static const char* value()
  {
    return DataType< ::dobot_v4_bringup::GetOutputFloat >::value();
  }
  static const char* value(const ::dobot_v4_bringup::GetOutputFloatRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dobot_v4_bringup::GetOutputFloatResponse> should match
// service_traits::MD5Sum< ::dobot_v4_bringup::GetOutputFloat >
template<>
struct MD5Sum< ::dobot_v4_bringup::GetOutputFloatResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dobot_v4_bringup::GetOutputFloat >::value();
  }
  static const char* value(const ::dobot_v4_bringup::GetOutputFloatResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot_v4_bringup::GetOutputFloatResponse> should match
// service_traits::DataType< ::dobot_v4_bringup::GetOutputFloat >
template<>
struct DataType< ::dobot_v4_bringup::GetOutputFloatResponse>
{
  static const char* value()
  {
    return DataType< ::dobot_v4_bringup::GetOutputFloat >::value();
  }
  static const char* value(const ::dobot_v4_bringup::GetOutputFloatResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DOBOT_V4_BRINGUP_MESSAGE_GETOUTPUTFLOAT_H

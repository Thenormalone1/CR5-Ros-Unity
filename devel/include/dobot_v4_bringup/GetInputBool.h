// Generated by gencpp from file dobot_v4_bringup/GetInputBool.msg
// DO NOT EDIT!


#ifndef DOBOT_V4_BRINGUP_MESSAGE_GETINPUTBOOL_H
#define DOBOT_V4_BRINGUP_MESSAGE_GETINPUTBOOL_H

#include <ros/service_traits.h>


#include <dobot_v4_bringup/GetInputBoolRequest.h>
#include <dobot_v4_bringup/GetInputBoolResponse.h>


namespace dobot_v4_bringup
{

struct GetInputBool
{

typedef GetInputBoolRequest Request;
typedef GetInputBoolResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetInputBool
} // namespace dobot_v4_bringup


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dobot_v4_bringup::GetInputBool > {
  static const char* value()
  {
    return "4f4e99215b78104599bc3fd88b4cdc1c";
  }

  static const char* value(const ::dobot_v4_bringup::GetInputBool&) { return value(); }
};

template<>
struct DataType< ::dobot_v4_bringup::GetInputBool > {
  static const char* value()
  {
    return "dobot_v4_bringup/GetInputBool";
  }

  static const char* value(const ::dobot_v4_bringup::GetInputBool&) { return value(); }
};


// service_traits::MD5Sum< ::dobot_v4_bringup::GetInputBoolRequest> should match
// service_traits::MD5Sum< ::dobot_v4_bringup::GetInputBool >
template<>
struct MD5Sum< ::dobot_v4_bringup::GetInputBoolRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dobot_v4_bringup::GetInputBool >::value();
  }
  static const char* value(const ::dobot_v4_bringup::GetInputBoolRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot_v4_bringup::GetInputBoolRequest> should match
// service_traits::DataType< ::dobot_v4_bringup::GetInputBool >
template<>
struct DataType< ::dobot_v4_bringup::GetInputBoolRequest>
{
  static const char* value()
  {
    return DataType< ::dobot_v4_bringup::GetInputBool >::value();
  }
  static const char* value(const ::dobot_v4_bringup::GetInputBoolRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dobot_v4_bringup::GetInputBoolResponse> should match
// service_traits::MD5Sum< ::dobot_v4_bringup::GetInputBool >
template<>
struct MD5Sum< ::dobot_v4_bringup::GetInputBoolResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dobot_v4_bringup::GetInputBool >::value();
  }
  static const char* value(const ::dobot_v4_bringup::GetInputBoolResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot_v4_bringup::GetInputBoolResponse> should match
// service_traits::DataType< ::dobot_v4_bringup::GetInputBool >
template<>
struct DataType< ::dobot_v4_bringup::GetInputBoolResponse>
{
  static const char* value()
  {
    return DataType< ::dobot_v4_bringup::GetInputBool >::value();
  }
  static const char* value(const ::dobot_v4_bringup::GetInputBoolResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DOBOT_V4_BRINGUP_MESSAGE_GETINPUTBOOL_H

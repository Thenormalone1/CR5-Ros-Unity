// Generated by gencpp from file dobot_v4_bringup/GetOutputBool.msg
// DO NOT EDIT!


#ifndef DOBOT_V4_BRINGUP_MESSAGE_GETOUTPUTBOOL_H
#define DOBOT_V4_BRINGUP_MESSAGE_GETOUTPUTBOOL_H

#include <ros/service_traits.h>


#include <dobot_v4_bringup/GetOutputBoolRequest.h>
#include <dobot_v4_bringup/GetOutputBoolResponse.h>


namespace dobot_v4_bringup
{

struct GetOutputBool
{

typedef GetOutputBoolRequest Request;
typedef GetOutputBoolResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetOutputBool
} // namespace dobot_v4_bringup


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dobot_v4_bringup::GetOutputBool > {
  static const char* value()
  {
    return "4f4e99215b78104599bc3fd88b4cdc1c";
  }

  static const char* value(const ::dobot_v4_bringup::GetOutputBool&) { return value(); }
};

template<>
struct DataType< ::dobot_v4_bringup::GetOutputBool > {
  static const char* value()
  {
    return "dobot_v4_bringup/GetOutputBool";
  }

  static const char* value(const ::dobot_v4_bringup::GetOutputBool&) { return value(); }
};


// service_traits::MD5Sum< ::dobot_v4_bringup::GetOutputBoolRequest> should match
// service_traits::MD5Sum< ::dobot_v4_bringup::GetOutputBool >
template<>
struct MD5Sum< ::dobot_v4_bringup::GetOutputBoolRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dobot_v4_bringup::GetOutputBool >::value();
  }
  static const char* value(const ::dobot_v4_bringup::GetOutputBoolRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot_v4_bringup::GetOutputBoolRequest> should match
// service_traits::DataType< ::dobot_v4_bringup::GetOutputBool >
template<>
struct DataType< ::dobot_v4_bringup::GetOutputBoolRequest>
{
  static const char* value()
  {
    return DataType< ::dobot_v4_bringup::GetOutputBool >::value();
  }
  static const char* value(const ::dobot_v4_bringup::GetOutputBoolRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dobot_v4_bringup::GetOutputBoolResponse> should match
// service_traits::MD5Sum< ::dobot_v4_bringup::GetOutputBool >
template<>
struct MD5Sum< ::dobot_v4_bringup::GetOutputBoolResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dobot_v4_bringup::GetOutputBool >::value();
  }
  static const char* value(const ::dobot_v4_bringup::GetOutputBoolResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot_v4_bringup::GetOutputBoolResponse> should match
// service_traits::DataType< ::dobot_v4_bringup::GetOutputBool >
template<>
struct DataType< ::dobot_v4_bringup::GetOutputBoolResponse>
{
  static const char* value()
  {
    return DataType< ::dobot_v4_bringup::GetOutputBool >::value();
  }
  static const char* value(const ::dobot_v4_bringup::GetOutputBoolResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DOBOT_V4_BRINGUP_MESSAGE_GETOUTPUTBOOL_H

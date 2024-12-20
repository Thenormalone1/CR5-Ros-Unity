// Generated by gencpp from file dobot_v4_bringup/GetOutputInt.msg
// DO NOT EDIT!


#ifndef DOBOT_V4_BRINGUP_MESSAGE_GETOUTPUTINT_H
#define DOBOT_V4_BRINGUP_MESSAGE_GETOUTPUTINT_H

#include <ros/service_traits.h>


#include <dobot_v4_bringup/GetOutputIntRequest.h>
#include <dobot_v4_bringup/GetOutputIntResponse.h>


namespace dobot_v4_bringup
{

struct GetOutputInt
{

typedef GetOutputIntRequest Request;
typedef GetOutputIntResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetOutputInt
} // namespace dobot_v4_bringup


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dobot_v4_bringup::GetOutputInt > {
  static const char* value()
  {
    return "4f4e99215b78104599bc3fd88b4cdc1c";
  }

  static const char* value(const ::dobot_v4_bringup::GetOutputInt&) { return value(); }
};

template<>
struct DataType< ::dobot_v4_bringup::GetOutputInt > {
  static const char* value()
  {
    return "dobot_v4_bringup/GetOutputInt";
  }

  static const char* value(const ::dobot_v4_bringup::GetOutputInt&) { return value(); }
};


// service_traits::MD5Sum< ::dobot_v4_bringup::GetOutputIntRequest> should match
// service_traits::MD5Sum< ::dobot_v4_bringup::GetOutputInt >
template<>
struct MD5Sum< ::dobot_v4_bringup::GetOutputIntRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dobot_v4_bringup::GetOutputInt >::value();
  }
  static const char* value(const ::dobot_v4_bringup::GetOutputIntRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot_v4_bringup::GetOutputIntRequest> should match
// service_traits::DataType< ::dobot_v4_bringup::GetOutputInt >
template<>
struct DataType< ::dobot_v4_bringup::GetOutputIntRequest>
{
  static const char* value()
  {
    return DataType< ::dobot_v4_bringup::GetOutputInt >::value();
  }
  static const char* value(const ::dobot_v4_bringup::GetOutputIntRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dobot_v4_bringup::GetOutputIntResponse> should match
// service_traits::MD5Sum< ::dobot_v4_bringup::GetOutputInt >
template<>
struct MD5Sum< ::dobot_v4_bringup::GetOutputIntResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dobot_v4_bringup::GetOutputInt >::value();
  }
  static const char* value(const ::dobot_v4_bringup::GetOutputIntResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot_v4_bringup::GetOutputIntResponse> should match
// service_traits::DataType< ::dobot_v4_bringup::GetOutputInt >
template<>
struct DataType< ::dobot_v4_bringup::GetOutputIntResponse>
{
  static const char* value()
  {
    return DataType< ::dobot_v4_bringup::GetOutputInt >::value();
  }
  static const char* value(const ::dobot_v4_bringup::GetOutputIntResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DOBOT_V4_BRINGUP_MESSAGE_GETOUTPUTINT_H

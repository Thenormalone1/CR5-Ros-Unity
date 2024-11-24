// Generated by gencpp from file dobot_v4_bringup/PowerOn.msg
// DO NOT EDIT!


#ifndef DOBOT_V4_BRINGUP_MESSAGE_POWERON_H
#define DOBOT_V4_BRINGUP_MESSAGE_POWERON_H

#include <ros/service_traits.h>


#include <dobot_v4_bringup/PowerOnRequest.h>
#include <dobot_v4_bringup/PowerOnResponse.h>


namespace dobot_v4_bringup
{

struct PowerOn
{

typedef PowerOnRequest Request;
typedef PowerOnResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct PowerOn
} // namespace dobot_v4_bringup


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dobot_v4_bringup::PowerOn > {
  static const char* value()
  {
    return "ca16cfbd5443ad97f6cc7ffd6bb67292";
  }

  static const char* value(const ::dobot_v4_bringup::PowerOn&) { return value(); }
};

template<>
struct DataType< ::dobot_v4_bringup::PowerOn > {
  static const char* value()
  {
    return "dobot_v4_bringup/PowerOn";
  }

  static const char* value(const ::dobot_v4_bringup::PowerOn&) { return value(); }
};


// service_traits::MD5Sum< ::dobot_v4_bringup::PowerOnRequest> should match
// service_traits::MD5Sum< ::dobot_v4_bringup::PowerOn >
template<>
struct MD5Sum< ::dobot_v4_bringup::PowerOnRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dobot_v4_bringup::PowerOn >::value();
  }
  static const char* value(const ::dobot_v4_bringup::PowerOnRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot_v4_bringup::PowerOnRequest> should match
// service_traits::DataType< ::dobot_v4_bringup::PowerOn >
template<>
struct DataType< ::dobot_v4_bringup::PowerOnRequest>
{
  static const char* value()
  {
    return DataType< ::dobot_v4_bringup::PowerOn >::value();
  }
  static const char* value(const ::dobot_v4_bringup::PowerOnRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dobot_v4_bringup::PowerOnResponse> should match
// service_traits::MD5Sum< ::dobot_v4_bringup::PowerOn >
template<>
struct MD5Sum< ::dobot_v4_bringup::PowerOnResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dobot_v4_bringup::PowerOn >::value();
  }
  static const char* value(const ::dobot_v4_bringup::PowerOnResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot_v4_bringup::PowerOnResponse> should match
// service_traits::DataType< ::dobot_v4_bringup::PowerOn >
template<>
struct DataType< ::dobot_v4_bringup::PowerOnResponse>
{
  static const char* value()
  {
    return DataType< ::dobot_v4_bringup::PowerOn >::value();
  }
  static const char* value(const ::dobot_v4_bringup::PowerOnResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DOBOT_V4_BRINGUP_MESSAGE_POWERON_H

// Generated by gencpp from file dobot_v4_bringup/Pause.msg
// DO NOT EDIT!


#ifndef DOBOT_V4_BRINGUP_MESSAGE_PAUSE_H
#define DOBOT_V4_BRINGUP_MESSAGE_PAUSE_H

#include <ros/service_traits.h>


#include <dobot_v4_bringup/PauseRequest.h>
#include <dobot_v4_bringup/PauseResponse.h>


namespace dobot_v4_bringup
{

struct Pause
{

typedef PauseRequest Request;
typedef PauseResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Pause
} // namespace dobot_v4_bringup


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dobot_v4_bringup::Pause > {
  static const char* value()
  {
    return "ca16cfbd5443ad97f6cc7ffd6bb67292";
  }

  static const char* value(const ::dobot_v4_bringup::Pause&) { return value(); }
};

template<>
struct DataType< ::dobot_v4_bringup::Pause > {
  static const char* value()
  {
    return "dobot_v4_bringup/Pause";
  }

  static const char* value(const ::dobot_v4_bringup::Pause&) { return value(); }
};


// service_traits::MD5Sum< ::dobot_v4_bringup::PauseRequest> should match
// service_traits::MD5Sum< ::dobot_v4_bringup::Pause >
template<>
struct MD5Sum< ::dobot_v4_bringup::PauseRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dobot_v4_bringup::Pause >::value();
  }
  static const char* value(const ::dobot_v4_bringup::PauseRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot_v4_bringup::PauseRequest> should match
// service_traits::DataType< ::dobot_v4_bringup::Pause >
template<>
struct DataType< ::dobot_v4_bringup::PauseRequest>
{
  static const char* value()
  {
    return DataType< ::dobot_v4_bringup::Pause >::value();
  }
  static const char* value(const ::dobot_v4_bringup::PauseRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dobot_v4_bringup::PauseResponse> should match
// service_traits::MD5Sum< ::dobot_v4_bringup::Pause >
template<>
struct MD5Sum< ::dobot_v4_bringup::PauseResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dobot_v4_bringup::Pause >::value();
  }
  static const char* value(const ::dobot_v4_bringup::PauseResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot_v4_bringup::PauseResponse> should match
// service_traits::DataType< ::dobot_v4_bringup::Pause >
template<>
struct DataType< ::dobot_v4_bringup::PauseResponse>
{
  static const char* value()
  {
    return DataType< ::dobot_v4_bringup::Pause >::value();
  }
  static const char* value(const ::dobot_v4_bringup::PauseResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DOBOT_V4_BRINGUP_MESSAGE_PAUSE_H
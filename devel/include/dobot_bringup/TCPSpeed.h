// Generated by gencpp from file dobot_bringup/TCPSpeed.msg
// DO NOT EDIT!


#ifndef DOBOT_BRINGUP_MESSAGE_TCPSPEED_H
#define DOBOT_BRINGUP_MESSAGE_TCPSPEED_H

#include <ros/service_traits.h>


#include <dobot_bringup/TCPSpeedRequest.h>
#include <dobot_bringup/TCPSpeedResponse.h>


namespace dobot_bringup
{

struct TCPSpeed
{

typedef TCPSpeedRequest Request;
typedef TCPSpeedResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct TCPSpeed
} // namespace dobot_bringup


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dobot_bringup::TCPSpeed > {
  static const char* value()
  {
    return "a08759d5a79cc8511dea5815a6ac4c30";
  }

  static const char* value(const ::dobot_bringup::TCPSpeed&) { return value(); }
};

template<>
struct DataType< ::dobot_bringup::TCPSpeed > {
  static const char* value()
  {
    return "dobot_bringup/TCPSpeed";
  }

  static const char* value(const ::dobot_bringup::TCPSpeed&) { return value(); }
};


// service_traits::MD5Sum< ::dobot_bringup::TCPSpeedRequest> should match
// service_traits::MD5Sum< ::dobot_bringup::TCPSpeed >
template<>
struct MD5Sum< ::dobot_bringup::TCPSpeedRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dobot_bringup::TCPSpeed >::value();
  }
  static const char* value(const ::dobot_bringup::TCPSpeedRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot_bringup::TCPSpeedRequest> should match
// service_traits::DataType< ::dobot_bringup::TCPSpeed >
template<>
struct DataType< ::dobot_bringup::TCPSpeedRequest>
{
  static const char* value()
  {
    return DataType< ::dobot_bringup::TCPSpeed >::value();
  }
  static const char* value(const ::dobot_bringup::TCPSpeedRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dobot_bringup::TCPSpeedResponse> should match
// service_traits::MD5Sum< ::dobot_bringup::TCPSpeed >
template<>
struct MD5Sum< ::dobot_bringup::TCPSpeedResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dobot_bringup::TCPSpeed >::value();
  }
  static const char* value(const ::dobot_bringup::TCPSpeedResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot_bringup::TCPSpeedResponse> should match
// service_traits::DataType< ::dobot_bringup::TCPSpeed >
template<>
struct DataType< ::dobot_bringup::TCPSpeedResponse>
{
  static const char* value()
  {
    return DataType< ::dobot_bringup::TCPSpeed >::value();
  }
  static const char* value(const ::dobot_bringup::TCPSpeedResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DOBOT_BRINGUP_MESSAGE_TCPSPEED_H
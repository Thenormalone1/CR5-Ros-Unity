// Generated by gencpp from file dobot_v4_bringup/DisableRobot.msg
// DO NOT EDIT!


#ifndef DOBOT_V4_BRINGUP_MESSAGE_DISABLEROBOT_H
#define DOBOT_V4_BRINGUP_MESSAGE_DISABLEROBOT_H

#include <ros/service_traits.h>


#include <dobot_v4_bringup/DisableRobotRequest.h>
#include <dobot_v4_bringup/DisableRobotResponse.h>


namespace dobot_v4_bringup
{

struct DisableRobot
{

typedef DisableRobotRequest Request;
typedef DisableRobotResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct DisableRobot
} // namespace dobot_v4_bringup


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dobot_v4_bringup::DisableRobot > {
  static const char* value()
  {
    return "ca16cfbd5443ad97f6cc7ffd6bb67292";
  }

  static const char* value(const ::dobot_v4_bringup::DisableRobot&) { return value(); }
};

template<>
struct DataType< ::dobot_v4_bringup::DisableRobot > {
  static const char* value()
  {
    return "dobot_v4_bringup/DisableRobot";
  }

  static const char* value(const ::dobot_v4_bringup::DisableRobot&) { return value(); }
};


// service_traits::MD5Sum< ::dobot_v4_bringup::DisableRobotRequest> should match
// service_traits::MD5Sum< ::dobot_v4_bringup::DisableRobot >
template<>
struct MD5Sum< ::dobot_v4_bringup::DisableRobotRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dobot_v4_bringup::DisableRobot >::value();
  }
  static const char* value(const ::dobot_v4_bringup::DisableRobotRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot_v4_bringup::DisableRobotRequest> should match
// service_traits::DataType< ::dobot_v4_bringup::DisableRobot >
template<>
struct DataType< ::dobot_v4_bringup::DisableRobotRequest>
{
  static const char* value()
  {
    return DataType< ::dobot_v4_bringup::DisableRobot >::value();
  }
  static const char* value(const ::dobot_v4_bringup::DisableRobotRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dobot_v4_bringup::DisableRobotResponse> should match
// service_traits::MD5Sum< ::dobot_v4_bringup::DisableRobot >
template<>
struct MD5Sum< ::dobot_v4_bringup::DisableRobotResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dobot_v4_bringup::DisableRobot >::value();
  }
  static const char* value(const ::dobot_v4_bringup::DisableRobotResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot_v4_bringup::DisableRobotResponse> should match
// service_traits::DataType< ::dobot_v4_bringup::DisableRobot >
template<>
struct DataType< ::dobot_v4_bringup::DisableRobotResponse>
{
  static const char* value()
  {
    return DataType< ::dobot_v4_bringup::DisableRobot >::value();
  }
  static const char* value(const ::dobot_v4_bringup::DisableRobotResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DOBOT_V4_BRINGUP_MESSAGE_DISABLEROBOT_H

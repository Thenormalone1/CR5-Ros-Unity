// Generated by gencpp from file rosdemo_v4/DisableRobot.msg
// DO NOT EDIT!


#ifndef ROSDEMO_V4_MESSAGE_DISABLEROBOT_H
#define ROSDEMO_V4_MESSAGE_DISABLEROBOT_H

#include <ros/service_traits.h>


#include <rosdemo_v4/DisableRobotRequest.h>
#include <rosdemo_v4/DisableRobotResponse.h>


namespace rosdemo_v4
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
} // namespace rosdemo_v4


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::rosdemo_v4::DisableRobot > {
  static const char* value()
  {
    return "ca16cfbd5443ad97f6cc7ffd6bb67292";
  }

  static const char* value(const ::rosdemo_v4::DisableRobot&) { return value(); }
};

template<>
struct DataType< ::rosdemo_v4::DisableRobot > {
  static const char* value()
  {
    return "rosdemo_v4/DisableRobot";
  }

  static const char* value(const ::rosdemo_v4::DisableRobot&) { return value(); }
};


// service_traits::MD5Sum< ::rosdemo_v4::DisableRobotRequest> should match
// service_traits::MD5Sum< ::rosdemo_v4::DisableRobot >
template<>
struct MD5Sum< ::rosdemo_v4::DisableRobotRequest>
{
  static const char* value()
  {
    return MD5Sum< ::rosdemo_v4::DisableRobot >::value();
  }
  static const char* value(const ::rosdemo_v4::DisableRobotRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::rosdemo_v4::DisableRobotRequest> should match
// service_traits::DataType< ::rosdemo_v4::DisableRobot >
template<>
struct DataType< ::rosdemo_v4::DisableRobotRequest>
{
  static const char* value()
  {
    return DataType< ::rosdemo_v4::DisableRobot >::value();
  }
  static const char* value(const ::rosdemo_v4::DisableRobotRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::rosdemo_v4::DisableRobotResponse> should match
// service_traits::MD5Sum< ::rosdemo_v4::DisableRobot >
template<>
struct MD5Sum< ::rosdemo_v4::DisableRobotResponse>
{
  static const char* value()
  {
    return MD5Sum< ::rosdemo_v4::DisableRobot >::value();
  }
  static const char* value(const ::rosdemo_v4::DisableRobotResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::rosdemo_v4::DisableRobotResponse> should match
// service_traits::DataType< ::rosdemo_v4::DisableRobot >
template<>
struct DataType< ::rosdemo_v4::DisableRobotResponse>
{
  static const char* value()
  {
    return DataType< ::rosdemo_v4::DisableRobot >::value();
  }
  static const char* value(const ::rosdemo_v4::DisableRobotResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROSDEMO_V4_MESSAGE_DISABLEROBOT_H
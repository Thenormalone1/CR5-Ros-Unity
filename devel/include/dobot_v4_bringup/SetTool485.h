// Generated by gencpp from file dobot_v4_bringup/SetTool485.msg
// DO NOT EDIT!


#ifndef DOBOT_V4_BRINGUP_MESSAGE_SETTOOL485_H
#define DOBOT_V4_BRINGUP_MESSAGE_SETTOOL485_H

#include <ros/service_traits.h>


#include <dobot_v4_bringup/SetTool485Request.h>
#include <dobot_v4_bringup/SetTool485Response.h>


namespace dobot_v4_bringup
{

struct SetTool485
{

typedef SetTool485Request Request;
typedef SetTool485Response Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetTool485
} // namespace dobot_v4_bringup


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dobot_v4_bringup::SetTool485 > {
  static const char* value()
  {
    return "b53aee6b74e02c5b0c053ab210ea006a";
  }

  static const char* value(const ::dobot_v4_bringup::SetTool485&) { return value(); }
};

template<>
struct DataType< ::dobot_v4_bringup::SetTool485 > {
  static const char* value()
  {
    return "dobot_v4_bringup/SetTool485";
  }

  static const char* value(const ::dobot_v4_bringup::SetTool485&) { return value(); }
};


// service_traits::MD5Sum< ::dobot_v4_bringup::SetTool485Request> should match
// service_traits::MD5Sum< ::dobot_v4_bringup::SetTool485 >
template<>
struct MD5Sum< ::dobot_v4_bringup::SetTool485Request>
{
  static const char* value()
  {
    return MD5Sum< ::dobot_v4_bringup::SetTool485 >::value();
  }
  static const char* value(const ::dobot_v4_bringup::SetTool485Request&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot_v4_bringup::SetTool485Request> should match
// service_traits::DataType< ::dobot_v4_bringup::SetTool485 >
template<>
struct DataType< ::dobot_v4_bringup::SetTool485Request>
{
  static const char* value()
  {
    return DataType< ::dobot_v4_bringup::SetTool485 >::value();
  }
  static const char* value(const ::dobot_v4_bringup::SetTool485Request&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dobot_v4_bringup::SetTool485Response> should match
// service_traits::MD5Sum< ::dobot_v4_bringup::SetTool485 >
template<>
struct MD5Sum< ::dobot_v4_bringup::SetTool485Response>
{
  static const char* value()
  {
    return MD5Sum< ::dobot_v4_bringup::SetTool485 >::value();
  }
  static const char* value(const ::dobot_v4_bringup::SetTool485Response&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot_v4_bringup::SetTool485Response> should match
// service_traits::DataType< ::dobot_v4_bringup::SetTool485 >
template<>
struct DataType< ::dobot_v4_bringup::SetTool485Response>
{
  static const char* value()
  {
    return DataType< ::dobot_v4_bringup::SetTool485 >::value();
  }
  static const char* value(const ::dobot_v4_bringup::SetTool485Response&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DOBOT_V4_BRINGUP_MESSAGE_SETTOOL485_H

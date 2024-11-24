// Generated by gencpp from file dobot_bringup/StopScript.msg
// DO NOT EDIT!


#ifndef DOBOT_BRINGUP_MESSAGE_STOPSCRIPT_H
#define DOBOT_BRINGUP_MESSAGE_STOPSCRIPT_H

#include <ros/service_traits.h>


#include <dobot_bringup/StopScriptRequest.h>
#include <dobot_bringup/StopScriptResponse.h>


namespace dobot_bringup
{

struct StopScript
{

typedef StopScriptRequest Request;
typedef StopScriptResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct StopScript
} // namespace dobot_bringup


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dobot_bringup::StopScript > {
  static const char* value()
  {
    return "ca16cfbd5443ad97f6cc7ffd6bb67292";
  }

  static const char* value(const ::dobot_bringup::StopScript&) { return value(); }
};

template<>
struct DataType< ::dobot_bringup::StopScript > {
  static const char* value()
  {
    return "dobot_bringup/StopScript";
  }

  static const char* value(const ::dobot_bringup::StopScript&) { return value(); }
};


// service_traits::MD5Sum< ::dobot_bringup::StopScriptRequest> should match
// service_traits::MD5Sum< ::dobot_bringup::StopScript >
template<>
struct MD5Sum< ::dobot_bringup::StopScriptRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dobot_bringup::StopScript >::value();
  }
  static const char* value(const ::dobot_bringup::StopScriptRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot_bringup::StopScriptRequest> should match
// service_traits::DataType< ::dobot_bringup::StopScript >
template<>
struct DataType< ::dobot_bringup::StopScriptRequest>
{
  static const char* value()
  {
    return DataType< ::dobot_bringup::StopScript >::value();
  }
  static const char* value(const ::dobot_bringup::StopScriptRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dobot_bringup::StopScriptResponse> should match
// service_traits::MD5Sum< ::dobot_bringup::StopScript >
template<>
struct MD5Sum< ::dobot_bringup::StopScriptResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dobot_bringup::StopScript >::value();
  }
  static const char* value(const ::dobot_bringup::StopScriptResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot_bringup::StopScriptResponse> should match
// service_traits::DataType< ::dobot_bringup::StopScript >
template<>
struct DataType< ::dobot_bringup::StopScriptResponse>
{
  static const char* value()
  {
    return DataType< ::dobot_bringup::StopScript >::value();
  }
  static const char* value(const ::dobot_bringup::StopScriptResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DOBOT_BRINGUP_MESSAGE_STOPSCRIPT_H
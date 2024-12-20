// Generated by gencpp from file dobot_v4_bringup/SetPostCollisionMode.msg
// DO NOT EDIT!


#ifndef DOBOT_V4_BRINGUP_MESSAGE_SETPOSTCOLLISIONMODE_H
#define DOBOT_V4_BRINGUP_MESSAGE_SETPOSTCOLLISIONMODE_H

#include <ros/service_traits.h>


#include <dobot_v4_bringup/SetPostCollisionModeRequest.h>
#include <dobot_v4_bringup/SetPostCollisionModeResponse.h>


namespace dobot_v4_bringup
{

struct SetPostCollisionMode
{

typedef SetPostCollisionModeRequest Request;
typedef SetPostCollisionModeResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetPostCollisionMode
} // namespace dobot_v4_bringup


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dobot_v4_bringup::SetPostCollisionMode > {
  static const char* value()
  {
    return "3340e7d95d77d8066c49f3d257143e7a";
  }

  static const char* value(const ::dobot_v4_bringup::SetPostCollisionMode&) { return value(); }
};

template<>
struct DataType< ::dobot_v4_bringup::SetPostCollisionMode > {
  static const char* value()
  {
    return "dobot_v4_bringup/SetPostCollisionMode";
  }

  static const char* value(const ::dobot_v4_bringup::SetPostCollisionMode&) { return value(); }
};


// service_traits::MD5Sum< ::dobot_v4_bringup::SetPostCollisionModeRequest> should match
// service_traits::MD5Sum< ::dobot_v4_bringup::SetPostCollisionMode >
template<>
struct MD5Sum< ::dobot_v4_bringup::SetPostCollisionModeRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dobot_v4_bringup::SetPostCollisionMode >::value();
  }
  static const char* value(const ::dobot_v4_bringup::SetPostCollisionModeRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot_v4_bringup::SetPostCollisionModeRequest> should match
// service_traits::DataType< ::dobot_v4_bringup::SetPostCollisionMode >
template<>
struct DataType< ::dobot_v4_bringup::SetPostCollisionModeRequest>
{
  static const char* value()
  {
    return DataType< ::dobot_v4_bringup::SetPostCollisionMode >::value();
  }
  static const char* value(const ::dobot_v4_bringup::SetPostCollisionModeRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dobot_v4_bringup::SetPostCollisionModeResponse> should match
// service_traits::MD5Sum< ::dobot_v4_bringup::SetPostCollisionMode >
template<>
struct MD5Sum< ::dobot_v4_bringup::SetPostCollisionModeResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dobot_v4_bringup::SetPostCollisionMode >::value();
  }
  static const char* value(const ::dobot_v4_bringup::SetPostCollisionModeResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot_v4_bringup::SetPostCollisionModeResponse> should match
// service_traits::DataType< ::dobot_v4_bringup::SetPostCollisionMode >
template<>
struct DataType< ::dobot_v4_bringup::SetPostCollisionModeResponse>
{
  static const char* value()
  {
    return DataType< ::dobot_v4_bringup::SetPostCollisionMode >::value();
  }
  static const char* value(const ::dobot_v4_bringup::SetPostCollisionModeResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DOBOT_V4_BRINGUP_MESSAGE_SETPOSTCOLLISIONMODE_H

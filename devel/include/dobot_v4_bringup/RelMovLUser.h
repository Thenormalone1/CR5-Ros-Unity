// Generated by gencpp from file dobot_v4_bringup/RelMovLUser.msg
// DO NOT EDIT!


#ifndef DOBOT_V4_BRINGUP_MESSAGE_RELMOVLUSER_H
#define DOBOT_V4_BRINGUP_MESSAGE_RELMOVLUSER_H

#include <ros/service_traits.h>


#include <dobot_v4_bringup/RelMovLUserRequest.h>
#include <dobot_v4_bringup/RelMovLUserResponse.h>


namespace dobot_v4_bringup
{

struct RelMovLUser
{

typedef RelMovLUserRequest Request;
typedef RelMovLUserResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct RelMovLUser
} // namespace dobot_v4_bringup


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dobot_v4_bringup::RelMovLUser > {
  static const char* value()
  {
    return "acbcde02d4dabec81bbbb65ee94d60dc";
  }

  static const char* value(const ::dobot_v4_bringup::RelMovLUser&) { return value(); }
};

template<>
struct DataType< ::dobot_v4_bringup::RelMovLUser > {
  static const char* value()
  {
    return "dobot_v4_bringup/RelMovLUser";
  }

  static const char* value(const ::dobot_v4_bringup::RelMovLUser&) { return value(); }
};


// service_traits::MD5Sum< ::dobot_v4_bringup::RelMovLUserRequest> should match
// service_traits::MD5Sum< ::dobot_v4_bringup::RelMovLUser >
template<>
struct MD5Sum< ::dobot_v4_bringup::RelMovLUserRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dobot_v4_bringup::RelMovLUser >::value();
  }
  static const char* value(const ::dobot_v4_bringup::RelMovLUserRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot_v4_bringup::RelMovLUserRequest> should match
// service_traits::DataType< ::dobot_v4_bringup::RelMovLUser >
template<>
struct DataType< ::dobot_v4_bringup::RelMovLUserRequest>
{
  static const char* value()
  {
    return DataType< ::dobot_v4_bringup::RelMovLUser >::value();
  }
  static const char* value(const ::dobot_v4_bringup::RelMovLUserRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dobot_v4_bringup::RelMovLUserResponse> should match
// service_traits::MD5Sum< ::dobot_v4_bringup::RelMovLUser >
template<>
struct MD5Sum< ::dobot_v4_bringup::RelMovLUserResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dobot_v4_bringup::RelMovLUser >::value();
  }
  static const char* value(const ::dobot_v4_bringup::RelMovLUserResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot_v4_bringup::RelMovLUserResponse> should match
// service_traits::DataType< ::dobot_v4_bringup::RelMovLUser >
template<>
struct DataType< ::dobot_v4_bringup::RelMovLUserResponse>
{
  static const char* value()
  {
    return DataType< ::dobot_v4_bringup::RelMovLUser >::value();
  }
  static const char* value(const ::dobot_v4_bringup::RelMovLUserResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DOBOT_V4_BRINGUP_MESSAGE_RELMOVLUSER_H
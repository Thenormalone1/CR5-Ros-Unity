// Generated by gencpp from file dobot_bringup/Jump.msg
// DO NOT EDIT!


#ifndef DOBOT_BRINGUP_MESSAGE_JUMP_H
#define DOBOT_BRINGUP_MESSAGE_JUMP_H

#include <ros/service_traits.h>


#include <dobot_bringup/JumpRequest.h>
#include <dobot_bringup/JumpResponse.h>


namespace dobot_bringup
{

struct Jump
{

typedef JumpRequest Request;
typedef JumpResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Jump
} // namespace dobot_bringup


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dobot_bringup::Jump > {
  static const char* value()
  {
    return "e279c0ec95d750d32f1bcdc49940f3d6";
  }

  static const char* value(const ::dobot_bringup::Jump&) { return value(); }
};

template<>
struct DataType< ::dobot_bringup::Jump > {
  static const char* value()
  {
    return "dobot_bringup/Jump";
  }

  static const char* value(const ::dobot_bringup::Jump&) { return value(); }
};


// service_traits::MD5Sum< ::dobot_bringup::JumpRequest> should match
// service_traits::MD5Sum< ::dobot_bringup::Jump >
template<>
struct MD5Sum< ::dobot_bringup::JumpRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dobot_bringup::Jump >::value();
  }
  static const char* value(const ::dobot_bringup::JumpRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot_bringup::JumpRequest> should match
// service_traits::DataType< ::dobot_bringup::Jump >
template<>
struct DataType< ::dobot_bringup::JumpRequest>
{
  static const char* value()
  {
    return DataType< ::dobot_bringup::Jump >::value();
  }
  static const char* value(const ::dobot_bringup::JumpRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dobot_bringup::JumpResponse> should match
// service_traits::MD5Sum< ::dobot_bringup::Jump >
template<>
struct MD5Sum< ::dobot_bringup::JumpResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dobot_bringup::Jump >::value();
  }
  static const char* value(const ::dobot_bringup::JumpResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot_bringup::JumpResponse> should match
// service_traits::DataType< ::dobot_bringup::Jump >
template<>
struct DataType< ::dobot_bringup::JumpResponse>
{
  static const char* value()
  {
    return DataType< ::dobot_bringup::Jump >::value();
  }
  static const char* value(const ::dobot_bringup::JumpResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DOBOT_BRINGUP_MESSAGE_JUMP_H

// Generated by gencpp from file dobot_bringup/DI.msg
// DO NOT EDIT!


#ifndef DOBOT_BRINGUP_MESSAGE_DI_H
#define DOBOT_BRINGUP_MESSAGE_DI_H

#include <ros/service_traits.h>


#include <dobot_bringup/DIRequest.h>
#include <dobot_bringup/DIResponse.h>


namespace dobot_bringup
{

struct DI
{

typedef DIRequest Request;
typedef DIResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct DI
} // namespace dobot_bringup


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dobot_bringup::DI > {
  static const char* value()
  {
    return "6d753c0adbdd6c06a6eb5c36aec96b0c";
  }

  static const char* value(const ::dobot_bringup::DI&) { return value(); }
};

template<>
struct DataType< ::dobot_bringup::DI > {
  static const char* value()
  {
    return "dobot_bringup/DI";
  }

  static const char* value(const ::dobot_bringup::DI&) { return value(); }
};


// service_traits::MD5Sum< ::dobot_bringup::DIRequest> should match
// service_traits::MD5Sum< ::dobot_bringup::DI >
template<>
struct MD5Sum< ::dobot_bringup::DIRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dobot_bringup::DI >::value();
  }
  static const char* value(const ::dobot_bringup::DIRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot_bringup::DIRequest> should match
// service_traits::DataType< ::dobot_bringup::DI >
template<>
struct DataType< ::dobot_bringup::DIRequest>
{
  static const char* value()
  {
    return DataType< ::dobot_bringup::DI >::value();
  }
  static const char* value(const ::dobot_bringup::DIRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dobot_bringup::DIResponse> should match
// service_traits::MD5Sum< ::dobot_bringup::DI >
template<>
struct MD5Sum< ::dobot_bringup::DIResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dobot_bringup::DI >::value();
  }
  static const char* value(const ::dobot_bringup::DIResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot_bringup::DIResponse> should match
// service_traits::DataType< ::dobot_bringup::DI >
template<>
struct DataType< ::dobot_bringup::DIResponse>
{
  static const char* value()
  {
    return DataType< ::dobot_bringup::DI >::value();
  }
  static const char* value(const ::dobot_bringup::DIResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DOBOT_BRINGUP_MESSAGE_DI_H
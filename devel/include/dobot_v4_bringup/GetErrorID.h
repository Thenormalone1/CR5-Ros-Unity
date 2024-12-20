// Generated by gencpp from file dobot_v4_bringup/GetErrorID.msg
// DO NOT EDIT!


#ifndef DOBOT_V4_BRINGUP_MESSAGE_GETERRORID_H
#define DOBOT_V4_BRINGUP_MESSAGE_GETERRORID_H

#include <ros/service_traits.h>


#include <dobot_v4_bringup/GetErrorIDRequest.h>
#include <dobot_v4_bringup/GetErrorIDResponse.h>


namespace dobot_v4_bringup
{

struct GetErrorID
{

typedef GetErrorIDRequest Request;
typedef GetErrorIDResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetErrorID
} // namespace dobot_v4_bringup


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dobot_v4_bringup::GetErrorID > {
  static const char* value()
  {
    return "15273c96ecb6b320e7c1e60e17abe5ab";
  }

  static const char* value(const ::dobot_v4_bringup::GetErrorID&) { return value(); }
};

template<>
struct DataType< ::dobot_v4_bringup::GetErrorID > {
  static const char* value()
  {
    return "dobot_v4_bringup/GetErrorID";
  }

  static const char* value(const ::dobot_v4_bringup::GetErrorID&) { return value(); }
};


// service_traits::MD5Sum< ::dobot_v4_bringup::GetErrorIDRequest> should match
// service_traits::MD5Sum< ::dobot_v4_bringup::GetErrorID >
template<>
struct MD5Sum< ::dobot_v4_bringup::GetErrorIDRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dobot_v4_bringup::GetErrorID >::value();
  }
  static const char* value(const ::dobot_v4_bringup::GetErrorIDRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot_v4_bringup::GetErrorIDRequest> should match
// service_traits::DataType< ::dobot_v4_bringup::GetErrorID >
template<>
struct DataType< ::dobot_v4_bringup::GetErrorIDRequest>
{
  static const char* value()
  {
    return DataType< ::dobot_v4_bringup::GetErrorID >::value();
  }
  static const char* value(const ::dobot_v4_bringup::GetErrorIDRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dobot_v4_bringup::GetErrorIDResponse> should match
// service_traits::MD5Sum< ::dobot_v4_bringup::GetErrorID >
template<>
struct MD5Sum< ::dobot_v4_bringup::GetErrorIDResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dobot_v4_bringup::GetErrorID >::value();
  }
  static const char* value(const ::dobot_v4_bringup::GetErrorIDResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot_v4_bringup::GetErrorIDResponse> should match
// service_traits::DataType< ::dobot_v4_bringup::GetErrorID >
template<>
struct DataType< ::dobot_v4_bringup::GetErrorIDResponse>
{
  static const char* value()
  {
    return DataType< ::dobot_v4_bringup::GetErrorID >::value();
  }
  static const char* value(const ::dobot_v4_bringup::GetErrorIDResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DOBOT_V4_BRINGUP_MESSAGE_GETERRORID_H

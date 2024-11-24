// Generated by gencpp from file dobot_v4_bringup/DO.msg
// DO NOT EDIT!


#ifndef DOBOT_V4_BRINGUP_MESSAGE_DO_H
#define DOBOT_V4_BRINGUP_MESSAGE_DO_H

#include <ros/service_traits.h>


#include <dobot_v4_bringup/DORequest.h>
#include <dobot_v4_bringup/DOResponse.h>


namespace dobot_v4_bringup
{

struct DO
{

typedef DORequest Request;
typedef DOResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct DO
} // namespace dobot_v4_bringup


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dobot_v4_bringup::DO > {
  static const char* value()
  {
    return "e820de648488f9514e8f674f0270cc06";
  }

  static const char* value(const ::dobot_v4_bringup::DO&) { return value(); }
};

template<>
struct DataType< ::dobot_v4_bringup::DO > {
  static const char* value()
  {
    return "dobot_v4_bringup/DO";
  }

  static const char* value(const ::dobot_v4_bringup::DO&) { return value(); }
};


// service_traits::MD5Sum< ::dobot_v4_bringup::DORequest> should match
// service_traits::MD5Sum< ::dobot_v4_bringup::DO >
template<>
struct MD5Sum< ::dobot_v4_bringup::DORequest>
{
  static const char* value()
  {
    return MD5Sum< ::dobot_v4_bringup::DO >::value();
  }
  static const char* value(const ::dobot_v4_bringup::DORequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot_v4_bringup::DORequest> should match
// service_traits::DataType< ::dobot_v4_bringup::DO >
template<>
struct DataType< ::dobot_v4_bringup::DORequest>
{
  static const char* value()
  {
    return DataType< ::dobot_v4_bringup::DO >::value();
  }
  static const char* value(const ::dobot_v4_bringup::DORequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dobot_v4_bringup::DOResponse> should match
// service_traits::MD5Sum< ::dobot_v4_bringup::DO >
template<>
struct MD5Sum< ::dobot_v4_bringup::DOResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dobot_v4_bringup::DO >::value();
  }
  static const char* value(const ::dobot_v4_bringup::DOResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot_v4_bringup::DOResponse> should match
// service_traits::DataType< ::dobot_v4_bringup::DO >
template<>
struct DataType< ::dobot_v4_bringup::DOResponse>
{
  static const char* value()
  {
    return DataType< ::dobot_v4_bringup::DO >::value();
  }
  static const char* value(const ::dobot_v4_bringup::DOResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DOBOT_V4_BRINGUP_MESSAGE_DO_H

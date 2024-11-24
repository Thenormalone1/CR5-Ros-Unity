// Generated by gencpp from file dobot_v4_bringup/MovL.msg
// DO NOT EDIT!


#ifndef DOBOT_V4_BRINGUP_MESSAGE_MOVL_H
#define DOBOT_V4_BRINGUP_MESSAGE_MOVL_H

#include <ros/service_traits.h>


#include <dobot_v4_bringup/MovLRequest.h>
#include <dobot_v4_bringup/MovLResponse.h>


namespace dobot_v4_bringup
{

struct MovL
{

typedef MovLRequest Request;
typedef MovLResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct MovL
} // namespace dobot_v4_bringup


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dobot_v4_bringup::MovL > {
  static const char* value()
  {
    return "dd1dc62fc49b20e14b128b54ed54d2c0";
  }

  static const char* value(const ::dobot_v4_bringup::MovL&) { return value(); }
};

template<>
struct DataType< ::dobot_v4_bringup::MovL > {
  static const char* value()
  {
    return "dobot_v4_bringup/MovL";
  }

  static const char* value(const ::dobot_v4_bringup::MovL&) { return value(); }
};


// service_traits::MD5Sum< ::dobot_v4_bringup::MovLRequest> should match
// service_traits::MD5Sum< ::dobot_v4_bringup::MovL >
template<>
struct MD5Sum< ::dobot_v4_bringup::MovLRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dobot_v4_bringup::MovL >::value();
  }
  static const char* value(const ::dobot_v4_bringup::MovLRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot_v4_bringup::MovLRequest> should match
// service_traits::DataType< ::dobot_v4_bringup::MovL >
template<>
struct DataType< ::dobot_v4_bringup::MovLRequest>
{
  static const char* value()
  {
    return DataType< ::dobot_v4_bringup::MovL >::value();
  }
  static const char* value(const ::dobot_v4_bringup::MovLRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dobot_v4_bringup::MovLResponse> should match
// service_traits::MD5Sum< ::dobot_v4_bringup::MovL >
template<>
struct MD5Sum< ::dobot_v4_bringup::MovLResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dobot_v4_bringup::MovL >::value();
  }
  static const char* value(const ::dobot_v4_bringup::MovLResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot_v4_bringup::MovLResponse> should match
// service_traits::DataType< ::dobot_v4_bringup::MovL >
template<>
struct DataType< ::dobot_v4_bringup::MovLResponse>
{
  static const char* value()
  {
    return DataType< ::dobot_v4_bringup::MovL >::value();
  }
  static const char* value(const ::dobot_v4_bringup::MovLResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DOBOT_V4_BRINGUP_MESSAGE_MOVL_H
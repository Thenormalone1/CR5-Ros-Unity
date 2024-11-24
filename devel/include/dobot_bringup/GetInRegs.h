// Generated by gencpp from file dobot_bringup/GetInRegs.msg
// DO NOT EDIT!


#ifndef DOBOT_BRINGUP_MESSAGE_GETINREGS_H
#define DOBOT_BRINGUP_MESSAGE_GETINREGS_H

#include <ros/service_traits.h>


#include <dobot_bringup/GetInRegsRequest.h>
#include <dobot_bringup/GetInRegsResponse.h>


namespace dobot_bringup
{

struct GetInRegs
{

typedef GetInRegsRequest Request;
typedef GetInRegsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetInRegs
} // namespace dobot_bringup


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dobot_bringup::GetInRegs > {
  static const char* value()
  {
    return "52234d8943fca7222a9cdf043482aad5";
  }

  static const char* value(const ::dobot_bringup::GetInRegs&) { return value(); }
};

template<>
struct DataType< ::dobot_bringup::GetInRegs > {
  static const char* value()
  {
    return "dobot_bringup/GetInRegs";
  }

  static const char* value(const ::dobot_bringup::GetInRegs&) { return value(); }
};


// service_traits::MD5Sum< ::dobot_bringup::GetInRegsRequest> should match
// service_traits::MD5Sum< ::dobot_bringup::GetInRegs >
template<>
struct MD5Sum< ::dobot_bringup::GetInRegsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dobot_bringup::GetInRegs >::value();
  }
  static const char* value(const ::dobot_bringup::GetInRegsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot_bringup::GetInRegsRequest> should match
// service_traits::DataType< ::dobot_bringup::GetInRegs >
template<>
struct DataType< ::dobot_bringup::GetInRegsRequest>
{
  static const char* value()
  {
    return DataType< ::dobot_bringup::GetInRegs >::value();
  }
  static const char* value(const ::dobot_bringup::GetInRegsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dobot_bringup::GetInRegsResponse> should match
// service_traits::MD5Sum< ::dobot_bringup::GetInRegs >
template<>
struct MD5Sum< ::dobot_bringup::GetInRegsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dobot_bringup::GetInRegs >::value();
  }
  static const char* value(const ::dobot_bringup::GetInRegsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot_bringup::GetInRegsResponse> should match
// service_traits::DataType< ::dobot_bringup::GetInRegs >
template<>
struct DataType< ::dobot_bringup::GetInRegsResponse>
{
  static const char* value()
  {
    return DataType< ::dobot_bringup::GetInRegs >::value();
  }
  static const char* value(const ::dobot_bringup::GetInRegsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DOBOT_BRINGUP_MESSAGE_GETINREGS_H

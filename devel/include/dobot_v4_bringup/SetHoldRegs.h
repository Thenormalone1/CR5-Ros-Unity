// Generated by gencpp from file dobot_v4_bringup/SetHoldRegs.msg
// DO NOT EDIT!


#ifndef DOBOT_V4_BRINGUP_MESSAGE_SETHOLDREGS_H
#define DOBOT_V4_BRINGUP_MESSAGE_SETHOLDREGS_H

#include <ros/service_traits.h>


#include <dobot_v4_bringup/SetHoldRegsRequest.h>
#include <dobot_v4_bringup/SetHoldRegsResponse.h>


namespace dobot_v4_bringup
{

struct SetHoldRegs
{

typedef SetHoldRegsRequest Request;
typedef SetHoldRegsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetHoldRegs
} // namespace dobot_v4_bringup


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dobot_v4_bringup::SetHoldRegs > {
  static const char* value()
  {
    return "e0d42a09df85575ba7301debdafa6447";
  }

  static const char* value(const ::dobot_v4_bringup::SetHoldRegs&) { return value(); }
};

template<>
struct DataType< ::dobot_v4_bringup::SetHoldRegs > {
  static const char* value()
  {
    return "dobot_v4_bringup/SetHoldRegs";
  }

  static const char* value(const ::dobot_v4_bringup::SetHoldRegs&) { return value(); }
};


// service_traits::MD5Sum< ::dobot_v4_bringup::SetHoldRegsRequest> should match
// service_traits::MD5Sum< ::dobot_v4_bringup::SetHoldRegs >
template<>
struct MD5Sum< ::dobot_v4_bringup::SetHoldRegsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dobot_v4_bringup::SetHoldRegs >::value();
  }
  static const char* value(const ::dobot_v4_bringup::SetHoldRegsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot_v4_bringup::SetHoldRegsRequest> should match
// service_traits::DataType< ::dobot_v4_bringup::SetHoldRegs >
template<>
struct DataType< ::dobot_v4_bringup::SetHoldRegsRequest>
{
  static const char* value()
  {
    return DataType< ::dobot_v4_bringup::SetHoldRegs >::value();
  }
  static const char* value(const ::dobot_v4_bringup::SetHoldRegsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dobot_v4_bringup::SetHoldRegsResponse> should match
// service_traits::MD5Sum< ::dobot_v4_bringup::SetHoldRegs >
template<>
struct MD5Sum< ::dobot_v4_bringup::SetHoldRegsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dobot_v4_bringup::SetHoldRegs >::value();
  }
  static const char* value(const ::dobot_v4_bringup::SetHoldRegsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot_v4_bringup::SetHoldRegsResponse> should match
// service_traits::DataType< ::dobot_v4_bringup::SetHoldRegs >
template<>
struct DataType< ::dobot_v4_bringup::SetHoldRegsResponse>
{
  static const char* value()
  {
    return DataType< ::dobot_v4_bringup::SetHoldRegs >::value();
  }
  static const char* value(const ::dobot_v4_bringup::SetHoldRegsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DOBOT_V4_BRINGUP_MESSAGE_SETHOLDREGS_H

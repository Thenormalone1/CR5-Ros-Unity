// Generated by gencpp from file dobot_v4_bringup/SetPayload.msg
// DO NOT EDIT!


#ifndef DOBOT_V4_BRINGUP_MESSAGE_SETPAYLOAD_H
#define DOBOT_V4_BRINGUP_MESSAGE_SETPAYLOAD_H

#include <ros/service_traits.h>


#include <dobot_v4_bringup/SetPayloadRequest.h>
#include <dobot_v4_bringup/SetPayloadResponse.h>


namespace dobot_v4_bringup
{

struct SetPayload
{

typedef SetPayloadRequest Request;
typedef SetPayloadResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetPayload
} // namespace dobot_v4_bringup


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dobot_v4_bringup::SetPayload > {
  static const char* value()
  {
    return "878e739d8d6e232b2ad0fd2b7ca0f7df";
  }

  static const char* value(const ::dobot_v4_bringup::SetPayload&) { return value(); }
};

template<>
struct DataType< ::dobot_v4_bringup::SetPayload > {
  static const char* value()
  {
    return "dobot_v4_bringup/SetPayload";
  }

  static const char* value(const ::dobot_v4_bringup::SetPayload&) { return value(); }
};


// service_traits::MD5Sum< ::dobot_v4_bringup::SetPayloadRequest> should match
// service_traits::MD5Sum< ::dobot_v4_bringup::SetPayload >
template<>
struct MD5Sum< ::dobot_v4_bringup::SetPayloadRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dobot_v4_bringup::SetPayload >::value();
  }
  static const char* value(const ::dobot_v4_bringup::SetPayloadRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot_v4_bringup::SetPayloadRequest> should match
// service_traits::DataType< ::dobot_v4_bringup::SetPayload >
template<>
struct DataType< ::dobot_v4_bringup::SetPayloadRequest>
{
  static const char* value()
  {
    return DataType< ::dobot_v4_bringup::SetPayload >::value();
  }
  static const char* value(const ::dobot_v4_bringup::SetPayloadRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dobot_v4_bringup::SetPayloadResponse> should match
// service_traits::MD5Sum< ::dobot_v4_bringup::SetPayload >
template<>
struct MD5Sum< ::dobot_v4_bringup::SetPayloadResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dobot_v4_bringup::SetPayload >::value();
  }
  static const char* value(const ::dobot_v4_bringup::SetPayloadResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot_v4_bringup::SetPayloadResponse> should match
// service_traits::DataType< ::dobot_v4_bringup::SetPayload >
template<>
struct DataType< ::dobot_v4_bringup::SetPayloadResponse>
{
  static const char* value()
  {
    return DataType< ::dobot_v4_bringup::SetPayload >::value();
  }
  static const char* value(const ::dobot_v4_bringup::SetPayloadResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DOBOT_V4_BRINGUP_MESSAGE_SETPAYLOAD_H

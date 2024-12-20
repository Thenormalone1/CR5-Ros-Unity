// Generated by gencpp from file dobot_v4_bringup/StartDrag.msg
// DO NOT EDIT!


#ifndef DOBOT_V4_BRINGUP_MESSAGE_STARTDRAG_H
#define DOBOT_V4_BRINGUP_MESSAGE_STARTDRAG_H

#include <ros/service_traits.h>


#include <dobot_v4_bringup/StartDragRequest.h>
#include <dobot_v4_bringup/StartDragResponse.h>


namespace dobot_v4_bringup
{

struct StartDrag
{

typedef StartDragRequest Request;
typedef StartDragResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct StartDrag
} // namespace dobot_v4_bringup


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dobot_v4_bringup::StartDrag > {
  static const char* value()
  {
    return "ca16cfbd5443ad97f6cc7ffd6bb67292";
  }

  static const char* value(const ::dobot_v4_bringup::StartDrag&) { return value(); }
};

template<>
struct DataType< ::dobot_v4_bringup::StartDrag > {
  static const char* value()
  {
    return "dobot_v4_bringup/StartDrag";
  }

  static const char* value(const ::dobot_v4_bringup::StartDrag&) { return value(); }
};


// service_traits::MD5Sum< ::dobot_v4_bringup::StartDragRequest> should match
// service_traits::MD5Sum< ::dobot_v4_bringup::StartDrag >
template<>
struct MD5Sum< ::dobot_v4_bringup::StartDragRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dobot_v4_bringup::StartDrag >::value();
  }
  static const char* value(const ::dobot_v4_bringup::StartDragRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot_v4_bringup::StartDragRequest> should match
// service_traits::DataType< ::dobot_v4_bringup::StartDrag >
template<>
struct DataType< ::dobot_v4_bringup::StartDragRequest>
{
  static const char* value()
  {
    return DataType< ::dobot_v4_bringup::StartDrag >::value();
  }
  static const char* value(const ::dobot_v4_bringup::StartDragRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dobot_v4_bringup::StartDragResponse> should match
// service_traits::MD5Sum< ::dobot_v4_bringup::StartDrag >
template<>
struct MD5Sum< ::dobot_v4_bringup::StartDragResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dobot_v4_bringup::StartDrag >::value();
  }
  static const char* value(const ::dobot_v4_bringup::StartDragResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot_v4_bringup::StartDragResponse> should match
// service_traits::DataType< ::dobot_v4_bringup::StartDrag >
template<>
struct DataType< ::dobot_v4_bringup::StartDragResponse>
{
  static const char* value()
  {
    return DataType< ::dobot_v4_bringup::StartDrag >::value();
  }
  static const char* value(const ::dobot_v4_bringup::StartDragResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DOBOT_V4_BRINGUP_MESSAGE_STARTDRAG_H

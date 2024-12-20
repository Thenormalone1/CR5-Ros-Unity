// Generated by gencpp from file dobot_v4_bringup/StopMoveJog.msg
// DO NOT EDIT!


#ifndef DOBOT_V4_BRINGUP_MESSAGE_STOPMOVEJOG_H
#define DOBOT_V4_BRINGUP_MESSAGE_STOPMOVEJOG_H

#include <ros/service_traits.h>


#include <dobot_v4_bringup/StopMoveJogRequest.h>
#include <dobot_v4_bringup/StopMoveJogResponse.h>


namespace dobot_v4_bringup
{

struct StopMoveJog
{

typedef StopMoveJogRequest Request;
typedef StopMoveJogResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct StopMoveJog
} // namespace dobot_v4_bringup


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dobot_v4_bringup::StopMoveJog > {
  static const char* value()
  {
    return "ca16cfbd5443ad97f6cc7ffd6bb67292";
  }

  static const char* value(const ::dobot_v4_bringup::StopMoveJog&) { return value(); }
};

template<>
struct DataType< ::dobot_v4_bringup::StopMoveJog > {
  static const char* value()
  {
    return "dobot_v4_bringup/StopMoveJog";
  }

  static const char* value(const ::dobot_v4_bringup::StopMoveJog&) { return value(); }
};


// service_traits::MD5Sum< ::dobot_v4_bringup::StopMoveJogRequest> should match
// service_traits::MD5Sum< ::dobot_v4_bringup::StopMoveJog >
template<>
struct MD5Sum< ::dobot_v4_bringup::StopMoveJogRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dobot_v4_bringup::StopMoveJog >::value();
  }
  static const char* value(const ::dobot_v4_bringup::StopMoveJogRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot_v4_bringup::StopMoveJogRequest> should match
// service_traits::DataType< ::dobot_v4_bringup::StopMoveJog >
template<>
struct DataType< ::dobot_v4_bringup::StopMoveJogRequest>
{
  static const char* value()
  {
    return DataType< ::dobot_v4_bringup::StopMoveJog >::value();
  }
  static const char* value(const ::dobot_v4_bringup::StopMoveJogRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dobot_v4_bringup::StopMoveJogResponse> should match
// service_traits::MD5Sum< ::dobot_v4_bringup::StopMoveJog >
template<>
struct MD5Sum< ::dobot_v4_bringup::StopMoveJogResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dobot_v4_bringup::StopMoveJog >::value();
  }
  static const char* value(const ::dobot_v4_bringup::StopMoveJogResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot_v4_bringup::StopMoveJogResponse> should match
// service_traits::DataType< ::dobot_v4_bringup::StopMoveJog >
template<>
struct DataType< ::dobot_v4_bringup::StopMoveJogResponse>
{
  static const char* value()
  {
    return DataType< ::dobot_v4_bringup::StopMoveJog >::value();
  }
  static const char* value(const ::dobot_v4_bringup::StopMoveJogResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DOBOT_V4_BRINGUP_MESSAGE_STOPMOVEJOG_H

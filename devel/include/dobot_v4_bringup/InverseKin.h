// Generated by gencpp from file dobot_v4_bringup/InverseKin.msg
// DO NOT EDIT!


#ifndef DOBOT_V4_BRINGUP_MESSAGE_INVERSEKIN_H
#define DOBOT_V4_BRINGUP_MESSAGE_INVERSEKIN_H

#include <ros/service_traits.h>


#include <dobot_v4_bringup/InverseKinRequest.h>
#include <dobot_v4_bringup/InverseKinResponse.h>


namespace dobot_v4_bringup
{

struct InverseKin
{

typedef InverseKinRequest Request;
typedef InverseKinResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct InverseKin
} // namespace dobot_v4_bringup


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dobot_v4_bringup::InverseKin > {
  static const char* value()
  {
    return "8146121994e66ae13378b6fc3540a594";
  }

  static const char* value(const ::dobot_v4_bringup::InverseKin&) { return value(); }
};

template<>
struct DataType< ::dobot_v4_bringup::InverseKin > {
  static const char* value()
  {
    return "dobot_v4_bringup/InverseKin";
  }

  static const char* value(const ::dobot_v4_bringup::InverseKin&) { return value(); }
};


// service_traits::MD5Sum< ::dobot_v4_bringup::InverseKinRequest> should match
// service_traits::MD5Sum< ::dobot_v4_bringup::InverseKin >
template<>
struct MD5Sum< ::dobot_v4_bringup::InverseKinRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dobot_v4_bringup::InverseKin >::value();
  }
  static const char* value(const ::dobot_v4_bringup::InverseKinRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot_v4_bringup::InverseKinRequest> should match
// service_traits::DataType< ::dobot_v4_bringup::InverseKin >
template<>
struct DataType< ::dobot_v4_bringup::InverseKinRequest>
{
  static const char* value()
  {
    return DataType< ::dobot_v4_bringup::InverseKin >::value();
  }
  static const char* value(const ::dobot_v4_bringup::InverseKinRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dobot_v4_bringup::InverseKinResponse> should match
// service_traits::MD5Sum< ::dobot_v4_bringup::InverseKin >
template<>
struct MD5Sum< ::dobot_v4_bringup::InverseKinResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dobot_v4_bringup::InverseKin >::value();
  }
  static const char* value(const ::dobot_v4_bringup::InverseKinResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot_v4_bringup::InverseKinResponse> should match
// service_traits::DataType< ::dobot_v4_bringup::InverseKin >
template<>
struct DataType< ::dobot_v4_bringup::InverseKinResponse>
{
  static const char* value()
  {
    return DataType< ::dobot_v4_bringup::InverseKin >::value();
  }
  static const char* value(const ::dobot_v4_bringup::InverseKinResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DOBOT_V4_BRINGUP_MESSAGE_INVERSEKIN_H

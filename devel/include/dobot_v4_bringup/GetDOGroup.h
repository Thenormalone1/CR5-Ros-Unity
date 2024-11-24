// Generated by gencpp from file dobot_v4_bringup/GetDOGroup.msg
// DO NOT EDIT!


#ifndef DOBOT_V4_BRINGUP_MESSAGE_GETDOGROUP_H
#define DOBOT_V4_BRINGUP_MESSAGE_GETDOGROUP_H

#include <ros/service_traits.h>


#include <dobot_v4_bringup/GetDOGroupRequest.h>
#include <dobot_v4_bringup/GetDOGroupResponse.h>


namespace dobot_v4_bringup
{

struct GetDOGroup
{

typedef GetDOGroupRequest Request;
typedef GetDOGroupResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetDOGroup
} // namespace dobot_v4_bringup


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dobot_v4_bringup::GetDOGroup > {
  static const char* value()
  {
    return "c00d8cf03529f203db2cdda57834a934";
  }

  static const char* value(const ::dobot_v4_bringup::GetDOGroup&) { return value(); }
};

template<>
struct DataType< ::dobot_v4_bringup::GetDOGroup > {
  static const char* value()
  {
    return "dobot_v4_bringup/GetDOGroup";
  }

  static const char* value(const ::dobot_v4_bringup::GetDOGroup&) { return value(); }
};


// service_traits::MD5Sum< ::dobot_v4_bringup::GetDOGroupRequest> should match
// service_traits::MD5Sum< ::dobot_v4_bringup::GetDOGroup >
template<>
struct MD5Sum< ::dobot_v4_bringup::GetDOGroupRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dobot_v4_bringup::GetDOGroup >::value();
  }
  static const char* value(const ::dobot_v4_bringup::GetDOGroupRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot_v4_bringup::GetDOGroupRequest> should match
// service_traits::DataType< ::dobot_v4_bringup::GetDOGroup >
template<>
struct DataType< ::dobot_v4_bringup::GetDOGroupRequest>
{
  static const char* value()
  {
    return DataType< ::dobot_v4_bringup::GetDOGroup >::value();
  }
  static const char* value(const ::dobot_v4_bringup::GetDOGroupRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dobot_v4_bringup::GetDOGroupResponse> should match
// service_traits::MD5Sum< ::dobot_v4_bringup::GetDOGroup >
template<>
struct MD5Sum< ::dobot_v4_bringup::GetDOGroupResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dobot_v4_bringup::GetDOGroup >::value();
  }
  static const char* value(const ::dobot_v4_bringup::GetDOGroupResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dobot_v4_bringup::GetDOGroupResponse> should match
// service_traits::DataType< ::dobot_v4_bringup::GetDOGroup >
template<>
struct DataType< ::dobot_v4_bringup::GetDOGroupResponse>
{
  static const char* value()
  {
    return DataType< ::dobot_v4_bringup::GetDOGroup >::value();
  }
  static const char* value(const ::dobot_v4_bringup::GetDOGroupResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DOBOT_V4_BRINGUP_MESSAGE_GETDOGROUP_H

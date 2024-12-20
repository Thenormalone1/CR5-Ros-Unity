// Generated by gencpp from file rosdemo_v3/GetErrorID.msg
// DO NOT EDIT!


#ifndef ROSDEMO_V3_MESSAGE_GETERRORID_H
#define ROSDEMO_V3_MESSAGE_GETERRORID_H

#include <ros/service_traits.h>


#include <rosdemo_v3/GetErrorIDRequest.h>
#include <rosdemo_v3/GetErrorIDResponse.h>


namespace rosdemo_v3
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
} // namespace rosdemo_v3


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::rosdemo_v3::GetErrorID > {
  static const char* value()
  {
    return "21732a31ce08e00841e34036c6b93272";
  }

  static const char* value(const ::rosdemo_v3::GetErrorID&) { return value(); }
};

template<>
struct DataType< ::rosdemo_v3::GetErrorID > {
  static const char* value()
  {
    return "rosdemo_v3/GetErrorID";
  }

  static const char* value(const ::rosdemo_v3::GetErrorID&) { return value(); }
};


// service_traits::MD5Sum< ::rosdemo_v3::GetErrorIDRequest> should match
// service_traits::MD5Sum< ::rosdemo_v3::GetErrorID >
template<>
struct MD5Sum< ::rosdemo_v3::GetErrorIDRequest>
{
  static const char* value()
  {
    return MD5Sum< ::rosdemo_v3::GetErrorID >::value();
  }
  static const char* value(const ::rosdemo_v3::GetErrorIDRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::rosdemo_v3::GetErrorIDRequest> should match
// service_traits::DataType< ::rosdemo_v3::GetErrorID >
template<>
struct DataType< ::rosdemo_v3::GetErrorIDRequest>
{
  static const char* value()
  {
    return DataType< ::rosdemo_v3::GetErrorID >::value();
  }
  static const char* value(const ::rosdemo_v3::GetErrorIDRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::rosdemo_v3::GetErrorIDResponse> should match
// service_traits::MD5Sum< ::rosdemo_v3::GetErrorID >
template<>
struct MD5Sum< ::rosdemo_v3::GetErrorIDResponse>
{
  static const char* value()
  {
    return MD5Sum< ::rosdemo_v3::GetErrorID >::value();
  }
  static const char* value(const ::rosdemo_v3::GetErrorIDResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::rosdemo_v3::GetErrorIDResponse> should match
// service_traits::DataType< ::rosdemo_v3::GetErrorID >
template<>
struct DataType< ::rosdemo_v3::GetErrorIDResponse>
{
  static const char* value()
  {
    return DataType< ::rosdemo_v3::GetErrorID >::value();
  }
  static const char* value(const ::rosdemo_v3::GetErrorIDResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROSDEMO_V3_MESSAGE_GETERRORID_H

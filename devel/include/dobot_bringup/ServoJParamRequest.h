// Generated by gencpp from file dobot_bringup/ServoJParamRequest.msg
// DO NOT EDIT!


#ifndef DOBOT_BRINGUP_MESSAGE_SERVOJPARAMREQUEST_H
#define DOBOT_BRINGUP_MESSAGE_SERVOJPARAMREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace dobot_bringup
{
template <class ContainerAllocator>
struct ServoJParamRequest_
{
  typedef ServoJParamRequest_<ContainerAllocator> Type;

  ServoJParamRequest_()
    : trajectory_duration(0.0)
    , t(0.0)
    , lookahead_time(0.0)
    , gain(0.0)  {
    }
  ServoJParamRequest_(const ContainerAllocator& _alloc)
    : trajectory_duration(0.0)
    , t(0.0)
    , lookahead_time(0.0)
    , gain(0.0)  {
  (void)_alloc;
    }



   typedef double _trajectory_duration_type;
  _trajectory_duration_type trajectory_duration;

   typedef double _t_type;
  _t_type t;

   typedef double _lookahead_time_type;
  _lookahead_time_type lookahead_time;

   typedef double _gain_type;
  _gain_type gain;





  typedef boost::shared_ptr< ::dobot_bringup::ServoJParamRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dobot_bringup::ServoJParamRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ServoJParamRequest_

typedef ::dobot_bringup::ServoJParamRequest_<std::allocator<void> > ServoJParamRequest;

typedef boost::shared_ptr< ::dobot_bringup::ServoJParamRequest > ServoJParamRequestPtr;
typedef boost::shared_ptr< ::dobot_bringup::ServoJParamRequest const> ServoJParamRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dobot_bringup::ServoJParamRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dobot_bringup::ServoJParamRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dobot_bringup::ServoJParamRequest_<ContainerAllocator1> & lhs, const ::dobot_bringup::ServoJParamRequest_<ContainerAllocator2> & rhs)
{
  return lhs.trajectory_duration == rhs.trajectory_duration &&
    lhs.t == rhs.t &&
    lhs.lookahead_time == rhs.lookahead_time &&
    lhs.gain == rhs.gain;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dobot_bringup::ServoJParamRequest_<ContainerAllocator1> & lhs, const ::dobot_bringup::ServoJParamRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dobot_bringup

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::dobot_bringup::ServoJParamRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot_bringup::ServoJParamRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot_bringup::ServoJParamRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot_bringup::ServoJParamRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot_bringup::ServoJParamRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot_bringup::ServoJParamRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dobot_bringup::ServoJParamRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "911ccd5d4ec114d36a5a62867f218ad6";
  }

  static const char* value(const ::dobot_bringup::ServoJParamRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x911ccd5d4ec114d3ULL;
  static const uint64_t static_value2 = 0x6a5a62867f218ad6ULL;
};

template<class ContainerAllocator>
struct DataType< ::dobot_bringup::ServoJParamRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dobot_bringup/ServoJParamRequest";
  }

  static const char* value(const ::dobot_bringup::ServoJParamRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dobot_bringup::ServoJParamRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 trajectory_duration\n"
"float64 t\n"
"float64 lookahead_time\n"
"float64 gain\n"
;
  }

  static const char* value(const ::dobot_bringup::ServoJParamRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dobot_bringup::ServoJParamRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.trajectory_duration);
      stream.next(m.t);
      stream.next(m.lookahead_time);
      stream.next(m.gain);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ServoJParamRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dobot_bringup::ServoJParamRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dobot_bringup::ServoJParamRequest_<ContainerAllocator>& v)
  {
    s << indent << "trajectory_duration: ";
    Printer<double>::stream(s, indent + "  ", v.trajectory_duration);
    s << indent << "t: ";
    Printer<double>::stream(s, indent + "  ", v.t);
    s << indent << "lookahead_time: ";
    Printer<double>::stream(s, indent + "  ", v.lookahead_time);
    s << indent << "gain: ";
    Printer<double>::stream(s, indent + "  ", v.gain);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DOBOT_BRINGUP_MESSAGE_SERVOJPARAMREQUEST_H
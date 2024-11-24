// Generated by gencpp from file dobot_v4_bringup/BrakeControlRequest.msg
// DO NOT EDIT!


#ifndef DOBOT_V4_BRINGUP_MESSAGE_BRAKECONTROLREQUEST_H
#define DOBOT_V4_BRINGUP_MESSAGE_BRAKECONTROLREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace dobot_v4_bringup
{
template <class ContainerAllocator>
struct BrakeControlRequest_
{
  typedef BrakeControlRequest_<ContainerAllocator> Type;

  BrakeControlRequest_()
    : axisID(0)
    , value(0)  {
    }
  BrakeControlRequest_(const ContainerAllocator& _alloc)
    : axisID(0)
    , value(0)  {
  (void)_alloc;
    }



   typedef int32_t _axisID_type;
  _axisID_type axisID;

   typedef int32_t _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::dobot_v4_bringup::BrakeControlRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dobot_v4_bringup::BrakeControlRequest_<ContainerAllocator> const> ConstPtr;

}; // struct BrakeControlRequest_

typedef ::dobot_v4_bringup::BrakeControlRequest_<std::allocator<void> > BrakeControlRequest;

typedef boost::shared_ptr< ::dobot_v4_bringup::BrakeControlRequest > BrakeControlRequestPtr;
typedef boost::shared_ptr< ::dobot_v4_bringup::BrakeControlRequest const> BrakeControlRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dobot_v4_bringup::BrakeControlRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dobot_v4_bringup::BrakeControlRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dobot_v4_bringup::BrakeControlRequest_<ContainerAllocator1> & lhs, const ::dobot_v4_bringup::BrakeControlRequest_<ContainerAllocator2> & rhs)
{
  return lhs.axisID == rhs.axisID &&
    lhs.value == rhs.value;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dobot_v4_bringup::BrakeControlRequest_<ContainerAllocator1> & lhs, const ::dobot_v4_bringup::BrakeControlRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dobot_v4_bringup

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::dobot_v4_bringup::BrakeControlRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot_v4_bringup::BrakeControlRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot_v4_bringup::BrakeControlRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot_v4_bringup::BrakeControlRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot_v4_bringup::BrakeControlRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot_v4_bringup::BrakeControlRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dobot_v4_bringup::BrakeControlRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6f295f27affd91da236d85966e5292af";
  }

  static const char* value(const ::dobot_v4_bringup::BrakeControlRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6f295f27affd91daULL;
  static const uint64_t static_value2 = 0x236d85966e5292afULL;
};

template<class ContainerAllocator>
struct DataType< ::dobot_v4_bringup::BrakeControlRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dobot_v4_bringup/BrakeControlRequest";
  }

  static const char* value(const ::dobot_v4_bringup::BrakeControlRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dobot_v4_bringup::BrakeControlRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 axisID\n"
"int32 value\n"
;
  }

  static const char* value(const ::dobot_v4_bringup::BrakeControlRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dobot_v4_bringup::BrakeControlRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.axisID);
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BrakeControlRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dobot_v4_bringup::BrakeControlRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dobot_v4_bringup::BrakeControlRequest_<ContainerAllocator>& v)
  {
    s << indent << "axisID: ";
    Printer<int32_t>::stream(s, indent + "  ", v.axisID);
    s << indent << "value: ";
    Printer<int32_t>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DOBOT_V4_BRINGUP_MESSAGE_BRAKECONTROLREQUEST_H

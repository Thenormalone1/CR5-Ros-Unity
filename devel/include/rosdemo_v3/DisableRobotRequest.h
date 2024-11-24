// Generated by gencpp from file rosdemo_v3/DisableRobotRequest.msg
// DO NOT EDIT!


#ifndef ROSDEMO_V3_MESSAGE_DISABLEROBOTREQUEST_H
#define ROSDEMO_V3_MESSAGE_DISABLEROBOTREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rosdemo_v3
{
template <class ContainerAllocator>
struct DisableRobotRequest_
{
  typedef DisableRobotRequest_<ContainerAllocator> Type;

  DisableRobotRequest_()
    {
    }
  DisableRobotRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::rosdemo_v3::DisableRobotRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rosdemo_v3::DisableRobotRequest_<ContainerAllocator> const> ConstPtr;

}; // struct DisableRobotRequest_

typedef ::rosdemo_v3::DisableRobotRequest_<std::allocator<void> > DisableRobotRequest;

typedef boost::shared_ptr< ::rosdemo_v3::DisableRobotRequest > DisableRobotRequestPtr;
typedef boost::shared_ptr< ::rosdemo_v3::DisableRobotRequest const> DisableRobotRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rosdemo_v3::DisableRobotRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rosdemo_v3::DisableRobotRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace rosdemo_v3

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rosdemo_v3::DisableRobotRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosdemo_v3::DisableRobotRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosdemo_v3::DisableRobotRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosdemo_v3::DisableRobotRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosdemo_v3::DisableRobotRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosdemo_v3::DisableRobotRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rosdemo_v3::DisableRobotRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::rosdemo_v3::DisableRobotRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::rosdemo_v3::DisableRobotRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rosdemo_v3/DisableRobotRequest";
  }

  static const char* value(const ::rosdemo_v3::DisableRobotRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rosdemo_v3::DisableRobotRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::rosdemo_v3::DisableRobotRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rosdemo_v3::DisableRobotRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DisableRobotRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rosdemo_v3::DisableRobotRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::rosdemo_v3::DisableRobotRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // ROSDEMO_V3_MESSAGE_DISABLEROBOTREQUEST_H

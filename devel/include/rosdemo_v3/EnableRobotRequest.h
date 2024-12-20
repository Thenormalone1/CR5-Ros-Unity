// Generated by gencpp from file rosdemo_v3/EnableRobotRequest.msg
// DO NOT EDIT!


#ifndef ROSDEMO_V3_MESSAGE_ENABLEROBOTREQUEST_H
#define ROSDEMO_V3_MESSAGE_ENABLEROBOTREQUEST_H


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
struct EnableRobotRequest_
{
  typedef EnableRobotRequest_<ContainerAllocator> Type;

  EnableRobotRequest_()
    : args()  {
    }
  EnableRobotRequest_(const ContainerAllocator& _alloc)
    : args(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> _args_type;
  _args_type args;





  typedef boost::shared_ptr< ::rosdemo_v3::EnableRobotRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rosdemo_v3::EnableRobotRequest_<ContainerAllocator> const> ConstPtr;

}; // struct EnableRobotRequest_

typedef ::rosdemo_v3::EnableRobotRequest_<std::allocator<void> > EnableRobotRequest;

typedef boost::shared_ptr< ::rosdemo_v3::EnableRobotRequest > EnableRobotRequestPtr;
typedef boost::shared_ptr< ::rosdemo_v3::EnableRobotRequest const> EnableRobotRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rosdemo_v3::EnableRobotRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rosdemo_v3::EnableRobotRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rosdemo_v3::EnableRobotRequest_<ContainerAllocator1> & lhs, const ::rosdemo_v3::EnableRobotRequest_<ContainerAllocator2> & rhs)
{
  return lhs.args == rhs.args;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rosdemo_v3::EnableRobotRequest_<ContainerAllocator1> & lhs, const ::rosdemo_v3::EnableRobotRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rosdemo_v3

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rosdemo_v3::EnableRobotRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosdemo_v3::EnableRobotRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosdemo_v3::EnableRobotRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosdemo_v3::EnableRobotRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosdemo_v3::EnableRobotRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosdemo_v3::EnableRobotRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rosdemo_v3::EnableRobotRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6424ff00ab5815ba232de90313cda317";
  }

  static const char* value(const ::rosdemo_v3::EnableRobotRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6424ff00ab5815baULL;
  static const uint64_t static_value2 = 0x232de90313cda317ULL;
};

template<class ContainerAllocator>
struct DataType< ::rosdemo_v3::EnableRobotRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rosdemo_v3/EnableRobotRequest";
  }

  static const char* value(const ::rosdemo_v3::EnableRobotRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rosdemo_v3::EnableRobotRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64[] args\n"
;
  }

  static const char* value(const ::rosdemo_v3::EnableRobotRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rosdemo_v3::EnableRobotRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.args);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EnableRobotRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rosdemo_v3::EnableRobotRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rosdemo_v3::EnableRobotRequest_<ContainerAllocator>& v)
  {
    s << indent << "args[]" << std::endl;
    for (size_t i = 0; i < v.args.size(); ++i)
    {
      s << indent << "  args[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.args[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROSDEMO_V3_MESSAGE_ENABLEROBOTREQUEST_H

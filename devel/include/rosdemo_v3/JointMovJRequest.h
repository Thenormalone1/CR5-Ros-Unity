// Generated by gencpp from file rosdemo_v3/JointMovJRequest.msg
// DO NOT EDIT!


#ifndef ROSDEMO_V3_MESSAGE_JOINTMOVJREQUEST_H
#define ROSDEMO_V3_MESSAGE_JOINTMOVJREQUEST_H


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
struct JointMovJRequest_
{
  typedef JointMovJRequest_<ContainerAllocator> Type;

  JointMovJRequest_()
    : j1(0.0)
    , j2(0.0)
    , j3(0.0)
    , j4(0.0)
    , j5(0.0)
    , j6(0.0)
    , paramValue()  {
    }
  JointMovJRequest_(const ContainerAllocator& _alloc)
    : j1(0.0)
    , j2(0.0)
    , j3(0.0)
    , j4(0.0)
    , j5(0.0)
    , j6(0.0)
    , paramValue(_alloc)  {
  (void)_alloc;
    }



   typedef double _j1_type;
  _j1_type j1;

   typedef double _j2_type;
  _j2_type j2;

   typedef double _j3_type;
  _j3_type j3;

   typedef double _j4_type;
  _j4_type j4;

   typedef double _j5_type;
  _j5_type j5;

   typedef double _j6_type;
  _j6_type j6;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> _paramValue_type;
  _paramValue_type paramValue;





  typedef boost::shared_ptr< ::rosdemo_v3::JointMovJRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rosdemo_v3::JointMovJRequest_<ContainerAllocator> const> ConstPtr;

}; // struct JointMovJRequest_

typedef ::rosdemo_v3::JointMovJRequest_<std::allocator<void> > JointMovJRequest;

typedef boost::shared_ptr< ::rosdemo_v3::JointMovJRequest > JointMovJRequestPtr;
typedef boost::shared_ptr< ::rosdemo_v3::JointMovJRequest const> JointMovJRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rosdemo_v3::JointMovJRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rosdemo_v3::JointMovJRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rosdemo_v3::JointMovJRequest_<ContainerAllocator1> & lhs, const ::rosdemo_v3::JointMovJRequest_<ContainerAllocator2> & rhs)
{
  return lhs.j1 == rhs.j1 &&
    lhs.j2 == rhs.j2 &&
    lhs.j3 == rhs.j3 &&
    lhs.j4 == rhs.j4 &&
    lhs.j5 == rhs.j5 &&
    lhs.j6 == rhs.j6 &&
    lhs.paramValue == rhs.paramValue;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rosdemo_v3::JointMovJRequest_<ContainerAllocator1> & lhs, const ::rosdemo_v3::JointMovJRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rosdemo_v3

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rosdemo_v3::JointMovJRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosdemo_v3::JointMovJRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosdemo_v3::JointMovJRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosdemo_v3::JointMovJRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosdemo_v3::JointMovJRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosdemo_v3::JointMovJRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rosdemo_v3::JointMovJRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "77e0608d00f9b9f3b855783be5ae892e";
  }

  static const char* value(const ::rosdemo_v3::JointMovJRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x77e0608d00f9b9f3ULL;
  static const uint64_t static_value2 = 0xb855783be5ae892eULL;
};

template<class ContainerAllocator>
struct DataType< ::rosdemo_v3::JointMovJRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rosdemo_v3/JointMovJRequest";
  }

  static const char* value(const ::rosdemo_v3::JointMovJRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rosdemo_v3::JointMovJRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 j1\n"
"float64 j2\n"
"float64 j3\n"
"float64 j4\n"
"float64 j5\n"
"float64 j6\n"
"string[] paramValue\n"
;
  }

  static const char* value(const ::rosdemo_v3::JointMovJRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rosdemo_v3::JointMovJRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.j1);
      stream.next(m.j2);
      stream.next(m.j3);
      stream.next(m.j4);
      stream.next(m.j5);
      stream.next(m.j6);
      stream.next(m.paramValue);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct JointMovJRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rosdemo_v3::JointMovJRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rosdemo_v3::JointMovJRequest_<ContainerAllocator>& v)
  {
    s << indent << "j1: ";
    Printer<double>::stream(s, indent + "  ", v.j1);
    s << indent << "j2: ";
    Printer<double>::stream(s, indent + "  ", v.j2);
    s << indent << "j3: ";
    Printer<double>::stream(s, indent + "  ", v.j3);
    s << indent << "j4: ";
    Printer<double>::stream(s, indent + "  ", v.j4);
    s << indent << "j5: ";
    Printer<double>::stream(s, indent + "  ", v.j5);
    s << indent << "j6: ";
    Printer<double>::stream(s, indent + "  ", v.j6);
    s << indent << "paramValue[]" << std::endl;
    for (size_t i = 0; i < v.paramValue.size(); ++i)
    {
      s << indent << "  paramValue[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.paramValue[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROSDEMO_V3_MESSAGE_JOINTMOVJREQUEST_H

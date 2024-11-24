// Generated by gencpp from file dobot_bringup/MovLRequest.msg
// DO NOT EDIT!


#ifndef DOBOT_BRINGUP_MESSAGE_MOVLREQUEST_H
#define DOBOT_BRINGUP_MESSAGE_MOVLREQUEST_H


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
struct MovLRequest_
{
  typedef MovLRequest_<ContainerAllocator> Type;

  MovLRequest_()
    : x(0.0)
    , y(0.0)
    , z(0.0)
    , a(0.0)
    , b(0.0)
    , c(0.0)
    , paramValue()  {
    }
  MovLRequest_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)
    , z(0.0)
    , a(0.0)
    , b(0.0)
    , c(0.0)
    , paramValue(_alloc)  {
  (void)_alloc;
    }



   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;

   typedef double _z_type;
  _z_type z;

   typedef double _a_type;
  _a_type a;

   typedef double _b_type;
  _b_type b;

   typedef double _c_type;
  _c_type c;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> _paramValue_type;
  _paramValue_type paramValue;





  typedef boost::shared_ptr< ::dobot_bringup::MovLRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dobot_bringup::MovLRequest_<ContainerAllocator> const> ConstPtr;

}; // struct MovLRequest_

typedef ::dobot_bringup::MovLRequest_<std::allocator<void> > MovLRequest;

typedef boost::shared_ptr< ::dobot_bringup::MovLRequest > MovLRequestPtr;
typedef boost::shared_ptr< ::dobot_bringup::MovLRequest const> MovLRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dobot_bringup::MovLRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dobot_bringup::MovLRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dobot_bringup::MovLRequest_<ContainerAllocator1> & lhs, const ::dobot_bringup::MovLRequest_<ContainerAllocator2> & rhs)
{
  return lhs.x == rhs.x &&
    lhs.y == rhs.y &&
    lhs.z == rhs.z &&
    lhs.a == rhs.a &&
    lhs.b == rhs.b &&
    lhs.c == rhs.c &&
    lhs.paramValue == rhs.paramValue;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dobot_bringup::MovLRequest_<ContainerAllocator1> & lhs, const ::dobot_bringup::MovLRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dobot_bringup

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::dobot_bringup::MovLRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot_bringup::MovLRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot_bringup::MovLRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot_bringup::MovLRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot_bringup::MovLRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot_bringup::MovLRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dobot_bringup::MovLRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6303dd50f83b53f520a9b979a58e7e24";
  }

  static const char* value(const ::dobot_bringup::MovLRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6303dd50f83b53f5ULL;
  static const uint64_t static_value2 = 0x20a9b979a58e7e24ULL;
};

template<class ContainerAllocator>
struct DataType< ::dobot_bringup::MovLRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dobot_bringup/MovLRequest";
  }

  static const char* value(const ::dobot_bringup::MovLRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dobot_bringup::MovLRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 a\n"
"float64 b\n"
"float64 c\n"
"string[] paramValue\n"
;
  }

  static const char* value(const ::dobot_bringup::MovLRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dobot_bringup::MovLRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
      stream.next(m.a);
      stream.next(m.b);
      stream.next(m.c);
      stream.next(m.paramValue);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MovLRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dobot_bringup::MovLRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dobot_bringup::MovLRequest_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<double>::stream(s, indent + "  ", v.z);
    s << indent << "a: ";
    Printer<double>::stream(s, indent + "  ", v.a);
    s << indent << "b: ";
    Printer<double>::stream(s, indent + "  ", v.b);
    s << indent << "c: ";
    Printer<double>::stream(s, indent + "  ", v.c);
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

#endif // DOBOT_BRINGUP_MESSAGE_MOVLREQUEST_H

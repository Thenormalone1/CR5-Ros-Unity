// Generated by gencpp from file dobot_v4_bringup/CircleRequest.msg
// DO NOT EDIT!


#ifndef DOBOT_V4_BRINGUP_MESSAGE_CIRCLEREQUEST_H
#define DOBOT_V4_BRINGUP_MESSAGE_CIRCLEREQUEST_H


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
struct CircleRequest_
{
  typedef CircleRequest_<ContainerAllocator> Type;

  CircleRequest_()
    : mode(false)
    , a(0.0)
    , b(0.0)
    , c(0.0)
    , d(0.0)
    , e(0.0)
    , f(0.0)
    , a2(0.0)
    , b2(0.0)
    , c2(0.0)
    , d2(0.0)
    , e2(0.0)
    , f2(0.0)
    , count(0)
    , paramValue()  {
    }
  CircleRequest_(const ContainerAllocator& _alloc)
    : mode(false)
    , a(0.0)
    , b(0.0)
    , c(0.0)
    , d(0.0)
    , e(0.0)
    , f(0.0)
    , a2(0.0)
    , b2(0.0)
    , c2(0.0)
    , d2(0.0)
    , e2(0.0)
    , f2(0.0)
    , count(0)
    , paramValue(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _mode_type;
  _mode_type mode;

   typedef double _a_type;
  _a_type a;

   typedef double _b_type;
  _b_type b;

   typedef double _c_type;
  _c_type c;

   typedef double _d_type;
  _d_type d;

   typedef double _e_type;
  _e_type e;

   typedef double _f_type;
  _f_type f;

   typedef double _a2_type;
  _a2_type a2;

   typedef double _b2_type;
  _b2_type b2;

   typedef double _c2_type;
  _c2_type c2;

   typedef double _d2_type;
  _d2_type d2;

   typedef double _e2_type;
  _e2_type e2;

   typedef double _f2_type;
  _f2_type f2;

   typedef int32_t _count_type;
  _count_type count;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> _paramValue_type;
  _paramValue_type paramValue;





  typedef boost::shared_ptr< ::dobot_v4_bringup::CircleRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dobot_v4_bringup::CircleRequest_<ContainerAllocator> const> ConstPtr;

}; // struct CircleRequest_

typedef ::dobot_v4_bringup::CircleRequest_<std::allocator<void> > CircleRequest;

typedef boost::shared_ptr< ::dobot_v4_bringup::CircleRequest > CircleRequestPtr;
typedef boost::shared_ptr< ::dobot_v4_bringup::CircleRequest const> CircleRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dobot_v4_bringup::CircleRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dobot_v4_bringup::CircleRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dobot_v4_bringup::CircleRequest_<ContainerAllocator1> & lhs, const ::dobot_v4_bringup::CircleRequest_<ContainerAllocator2> & rhs)
{
  return lhs.mode == rhs.mode &&
    lhs.a == rhs.a &&
    lhs.b == rhs.b &&
    lhs.c == rhs.c &&
    lhs.d == rhs.d &&
    lhs.e == rhs.e &&
    lhs.f == rhs.f &&
    lhs.a2 == rhs.a2 &&
    lhs.b2 == rhs.b2 &&
    lhs.c2 == rhs.c2 &&
    lhs.d2 == rhs.d2 &&
    lhs.e2 == rhs.e2 &&
    lhs.f2 == rhs.f2 &&
    lhs.count == rhs.count &&
    lhs.paramValue == rhs.paramValue;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dobot_v4_bringup::CircleRequest_<ContainerAllocator1> & lhs, const ::dobot_v4_bringup::CircleRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dobot_v4_bringup

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::dobot_v4_bringup::CircleRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot_v4_bringup::CircleRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot_v4_bringup::CircleRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot_v4_bringup::CircleRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot_v4_bringup::CircleRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot_v4_bringup::CircleRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dobot_v4_bringup::CircleRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "436e19304d0b48bc7fa4d2de814ce0e5";
  }

  static const char* value(const ::dobot_v4_bringup::CircleRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x436e19304d0b48bcULL;
  static const uint64_t static_value2 = 0x7fa4d2de814ce0e5ULL;
};

template<class ContainerAllocator>
struct DataType< ::dobot_v4_bringup::CircleRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dobot_v4_bringup/CircleRequest";
  }

  static const char* value(const ::dobot_v4_bringup::CircleRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dobot_v4_bringup::CircleRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool mode\n"
"float64 a\n"
"float64 b\n"
"float64 c\n"
"float64 d\n"
"float64 e\n"
"float64 f\n"
"float64 a2\n"
"float64 b2\n"
"float64 c2\n"
"float64 d2\n"
"float64 e2\n"
"float64 f2\n"
"int32 count\n"
"string[] paramValue\n"
;
  }

  static const char* value(const ::dobot_v4_bringup::CircleRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dobot_v4_bringup::CircleRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.mode);
      stream.next(m.a);
      stream.next(m.b);
      stream.next(m.c);
      stream.next(m.d);
      stream.next(m.e);
      stream.next(m.f);
      stream.next(m.a2);
      stream.next(m.b2);
      stream.next(m.c2);
      stream.next(m.d2);
      stream.next(m.e2);
      stream.next(m.f2);
      stream.next(m.count);
      stream.next(m.paramValue);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CircleRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dobot_v4_bringup::CircleRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dobot_v4_bringup::CircleRequest_<ContainerAllocator>& v)
  {
    s << indent << "mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mode);
    s << indent << "a: ";
    Printer<double>::stream(s, indent + "  ", v.a);
    s << indent << "b: ";
    Printer<double>::stream(s, indent + "  ", v.b);
    s << indent << "c: ";
    Printer<double>::stream(s, indent + "  ", v.c);
    s << indent << "d: ";
    Printer<double>::stream(s, indent + "  ", v.d);
    s << indent << "e: ";
    Printer<double>::stream(s, indent + "  ", v.e);
    s << indent << "f: ";
    Printer<double>::stream(s, indent + "  ", v.f);
    s << indent << "a2: ";
    Printer<double>::stream(s, indent + "  ", v.a2);
    s << indent << "b2: ";
    Printer<double>::stream(s, indent + "  ", v.b2);
    s << indent << "c2: ";
    Printer<double>::stream(s, indent + "  ", v.c2);
    s << indent << "d2: ";
    Printer<double>::stream(s, indent + "  ", v.d2);
    s << indent << "e2: ";
    Printer<double>::stream(s, indent + "  ", v.e2);
    s << indent << "f2: ";
    Printer<double>::stream(s, indent + "  ", v.f2);
    s << indent << "count: ";
    Printer<int32_t>::stream(s, indent + "  ", v.count);
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

#endif // DOBOT_V4_BRINGUP_MESSAGE_CIRCLEREQUEST_H
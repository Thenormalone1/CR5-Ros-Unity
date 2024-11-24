// Generated by gencpp from file dobot_v4_bringup/ToolVectorActual.msg
// DO NOT EDIT!


#ifndef DOBOT_V4_BRINGUP_MESSAGE_TOOLVECTORACTUAL_H
#define DOBOT_V4_BRINGUP_MESSAGE_TOOLVECTORACTUAL_H


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
struct ToolVectorActual_
{
  typedef ToolVectorActual_<ContainerAllocator> Type;

  ToolVectorActual_()
    : x(0.0)
    , y(0.0)
    , z(0.0)
    , rx(0.0)
    , ry(0.0)
    , rz(0.0)  {
    }
  ToolVectorActual_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)
    , z(0.0)
    , rx(0.0)
    , ry(0.0)
    , rz(0.0)  {
  (void)_alloc;
    }



   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;

   typedef double _z_type;
  _z_type z;

   typedef double _rx_type;
  _rx_type rx;

   typedef double _ry_type;
  _ry_type ry;

   typedef double _rz_type;
  _rz_type rz;





  typedef boost::shared_ptr< ::dobot_v4_bringup::ToolVectorActual_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dobot_v4_bringup::ToolVectorActual_<ContainerAllocator> const> ConstPtr;

}; // struct ToolVectorActual_

typedef ::dobot_v4_bringup::ToolVectorActual_<std::allocator<void> > ToolVectorActual;

typedef boost::shared_ptr< ::dobot_v4_bringup::ToolVectorActual > ToolVectorActualPtr;
typedef boost::shared_ptr< ::dobot_v4_bringup::ToolVectorActual const> ToolVectorActualConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dobot_v4_bringup::ToolVectorActual_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dobot_v4_bringup::ToolVectorActual_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dobot_v4_bringup::ToolVectorActual_<ContainerAllocator1> & lhs, const ::dobot_v4_bringup::ToolVectorActual_<ContainerAllocator2> & rhs)
{
  return lhs.x == rhs.x &&
    lhs.y == rhs.y &&
    lhs.z == rhs.z &&
    lhs.rx == rhs.rx &&
    lhs.ry == rhs.ry &&
    lhs.rz == rhs.rz;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dobot_v4_bringup::ToolVectorActual_<ContainerAllocator1> & lhs, const ::dobot_v4_bringup::ToolVectorActual_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dobot_v4_bringup

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::dobot_v4_bringup::ToolVectorActual_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot_v4_bringup::ToolVectorActual_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot_v4_bringup::ToolVectorActual_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot_v4_bringup::ToolVectorActual_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot_v4_bringup::ToolVectorActual_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot_v4_bringup::ToolVectorActual_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dobot_v4_bringup::ToolVectorActual_<ContainerAllocator> >
{
  static const char* value()
  {
    return "88d995302418aa13534aa14fc9aeed94";
  }

  static const char* value(const ::dobot_v4_bringup::ToolVectorActual_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x88d995302418aa13ULL;
  static const uint64_t static_value2 = 0x534aa14fc9aeed94ULL;
};

template<class ContainerAllocator>
struct DataType< ::dobot_v4_bringup::ToolVectorActual_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dobot_v4_bringup/ToolVectorActual";
  }

  static const char* value(const ::dobot_v4_bringup::ToolVectorActual_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dobot_v4_bringup::ToolVectorActual_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 rx\n"
"float64 ry\n"
"float64 rz\n"
;
  }

  static const char* value(const ::dobot_v4_bringup::ToolVectorActual_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dobot_v4_bringup::ToolVectorActual_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
      stream.next(m.rx);
      stream.next(m.ry);
      stream.next(m.rz);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ToolVectorActual_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dobot_v4_bringup::ToolVectorActual_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dobot_v4_bringup::ToolVectorActual_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<double>::stream(s, indent + "  ", v.z);
    s << indent << "rx: ";
    Printer<double>::stream(s, indent + "  ", v.rx);
    s << indent << "ry: ";
    Printer<double>::stream(s, indent + "  ", v.ry);
    s << indent << "rz: ";
    Printer<double>::stream(s, indent + "  ", v.rz);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DOBOT_V4_BRINGUP_MESSAGE_TOOLVECTORACTUAL_H
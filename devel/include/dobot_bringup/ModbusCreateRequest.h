// Generated by gencpp from file dobot_bringup/ModbusCreateRequest.msg
// DO NOT EDIT!


#ifndef DOBOT_BRINGUP_MESSAGE_MODBUSCREATEREQUEST_H
#define DOBOT_BRINGUP_MESSAGE_MODBUSCREATEREQUEST_H


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
struct ModbusCreateRequest_
{
  typedef ModbusCreateRequest_<ContainerAllocator> Type;

  ModbusCreateRequest_()
    : ip()
    , port(0)
    , slave_id(0)
    , is_rtu()  {
    }
  ModbusCreateRequest_(const ContainerAllocator& _alloc)
    : ip(_alloc)
    , port(0)
    , slave_id(0)
    , is_rtu(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _ip_type;
  _ip_type ip;

   typedef int32_t _port_type;
  _port_type port;

   typedef int32_t _slave_id_type;
  _slave_id_type slave_id;

   typedef std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> _is_rtu_type;
  _is_rtu_type is_rtu;





  typedef boost::shared_ptr< ::dobot_bringup::ModbusCreateRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dobot_bringup::ModbusCreateRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ModbusCreateRequest_

typedef ::dobot_bringup::ModbusCreateRequest_<std::allocator<void> > ModbusCreateRequest;

typedef boost::shared_ptr< ::dobot_bringup::ModbusCreateRequest > ModbusCreateRequestPtr;
typedef boost::shared_ptr< ::dobot_bringup::ModbusCreateRequest const> ModbusCreateRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dobot_bringup::ModbusCreateRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dobot_bringup::ModbusCreateRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dobot_bringup::ModbusCreateRequest_<ContainerAllocator1> & lhs, const ::dobot_bringup::ModbusCreateRequest_<ContainerAllocator2> & rhs)
{
  return lhs.ip == rhs.ip &&
    lhs.port == rhs.port &&
    lhs.slave_id == rhs.slave_id &&
    lhs.is_rtu == rhs.is_rtu;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dobot_bringup::ModbusCreateRequest_<ContainerAllocator1> & lhs, const ::dobot_bringup::ModbusCreateRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dobot_bringup

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::dobot_bringup::ModbusCreateRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot_bringup::ModbusCreateRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot_bringup::ModbusCreateRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot_bringup::ModbusCreateRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot_bringup::ModbusCreateRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot_bringup::ModbusCreateRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dobot_bringup::ModbusCreateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c57fede4da0120ad81331b39cab621bf";
  }

  static const char* value(const ::dobot_bringup::ModbusCreateRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc57fede4da0120adULL;
  static const uint64_t static_value2 = 0x81331b39cab621bfULL;
};

template<class ContainerAllocator>
struct DataType< ::dobot_bringup::ModbusCreateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dobot_bringup/ModbusCreateRequest";
  }

  static const char* value(const ::dobot_bringup::ModbusCreateRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dobot_bringup::ModbusCreateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string ip\n"
"int32 port\n"
"int32 slave_id\n"
"int32[] is_rtu\n"
"\n"
;
  }

  static const char* value(const ::dobot_bringup::ModbusCreateRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dobot_bringup::ModbusCreateRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.ip);
      stream.next(m.port);
      stream.next(m.slave_id);
      stream.next(m.is_rtu);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ModbusCreateRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dobot_bringup::ModbusCreateRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dobot_bringup::ModbusCreateRequest_<ContainerAllocator>& v)
  {
    s << indent << "ip: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.ip);
    s << indent << "port: ";
    Printer<int32_t>::stream(s, indent + "  ", v.port);
    s << indent << "slave_id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.slave_id);
    s << indent << "is_rtu[]" << std::endl;
    for (size_t i = 0; i < v.is_rtu.size(); ++i)
    {
      s << indent << "  is_rtu[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.is_rtu[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DOBOT_BRINGUP_MESSAGE_MODBUSCREATEREQUEST_H
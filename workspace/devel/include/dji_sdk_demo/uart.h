// Generated by gencpp from file dji_sdk_demo/uart.msg
// DO NOT EDIT!


#ifndef DJI_SDK_DEMO_MESSAGE_UART_H
#define DJI_SDK_DEMO_MESSAGE_UART_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace dji_sdk_demo
{
template <class ContainerAllocator>
struct uart_
{
  typedef uart_<ContainerAllocator> Type;

  uart_()
    : flag(0)  {
    }
  uart_(const ContainerAllocator& _alloc)
    : flag(0)  {
  (void)_alloc;
    }



   typedef int32_t _flag_type;
  _flag_type flag;




  typedef boost::shared_ptr< ::dji_sdk_demo::uart_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dji_sdk_demo::uart_<ContainerAllocator> const> ConstPtr;

}; // struct uart_

typedef ::dji_sdk_demo::uart_<std::allocator<void> > uart;

typedef boost::shared_ptr< ::dji_sdk_demo::uart > uartPtr;
typedef boost::shared_ptr< ::dji_sdk_demo::uart const> uartConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dji_sdk_demo::uart_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dji_sdk_demo::uart_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace dji_sdk_demo

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'dji_sdk_demo': ['/home/ubuntu/m100-ros-test/workspace/src/dji_sdk_demo/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::dji_sdk_demo::uart_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dji_sdk_demo::uart_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_sdk_demo::uart_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_sdk_demo::uart_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_sdk_demo::uart_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_sdk_demo::uart_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dji_sdk_demo::uart_<ContainerAllocator> >
{
  static const char* value()
  {
    return "aa0dbc5596ec12974ea3a17a045b36e0";
  }

  static const char* value(const ::dji_sdk_demo::uart_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xaa0dbc5596ec1297ULL;
  static const uint64_t static_value2 = 0x4ea3a17a045b36e0ULL;
};

template<class ContainerAllocator>
struct DataType< ::dji_sdk_demo::uart_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dji_sdk_demo/uart";
  }

  static const char* value(const ::dji_sdk_demo::uart_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dji_sdk_demo::uart_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 flag\n\
\n\
";
  }

  static const char* value(const ::dji_sdk_demo::uart_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dji_sdk_demo::uart_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.flag);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct uart_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dji_sdk_demo::uart_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dji_sdk_demo::uart_<ContainerAllocator>& v)
  {
    s << indent << "flag: ";
    Printer<int32_t>::stream(s, indent + "  ", v.flag);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DJI_SDK_DEMO_MESSAGE_UART_H

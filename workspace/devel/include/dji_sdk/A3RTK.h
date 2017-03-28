// Generated by gencpp from file dji_sdk/A3RTK.msg
// DO NOT EDIT!


#ifndef DJI_SDK_MESSAGE_A3RTK_H
#define DJI_SDK_MESSAGE_A3RTK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace dji_sdk
{
template <class ContainerAllocator>
struct A3RTK_
{
  typedef A3RTK_<ContainerAllocator> Type;

  A3RTK_()
    : date(0)
    , time(0)
    , longitude_RTK(0.0)
    , latitude_RTK(0.0)
    , height_above_sea_RTK(0.0)
    , velocity_north(0.0)
    , velocity_east(0.0)
    , velocity_ground(0.0)
    , yaw(0)
    , position_flag(0)
    , yaw_flag(0)  {
    }
  A3RTK_(const ContainerAllocator& _alloc)
    : date(0)
    , time(0)
    , longitude_RTK(0.0)
    , latitude_RTK(0.0)
    , height_above_sea_RTK(0.0)
    , velocity_north(0.0)
    , velocity_east(0.0)
    , velocity_ground(0.0)
    , yaw(0)
    , position_flag(0)
    , yaw_flag(0)  {
  (void)_alloc;
    }



   typedef uint32_t _date_type;
  _date_type date;

   typedef uint32_t _time_type;
  _time_type time;

   typedef double _longitude_RTK_type;
  _longitude_RTK_type longitude_RTK;

   typedef double _latitude_RTK_type;
  _latitude_RTK_type latitude_RTK;

   typedef float _height_above_sea_RTK_type;
  _height_above_sea_RTK_type height_above_sea_RTK;

   typedef float _velocity_north_type;
  _velocity_north_type velocity_north;

   typedef float _velocity_east_type;
  _velocity_east_type velocity_east;

   typedef float _velocity_ground_type;
  _velocity_ground_type velocity_ground;

   typedef int16_t _yaw_type;
  _yaw_type yaw;

   typedef uint8_t _position_flag_type;
  _position_flag_type position_flag;

   typedef uint8_t _yaw_flag_type;
  _yaw_flag_type yaw_flag;




  typedef boost::shared_ptr< ::dji_sdk::A3RTK_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dji_sdk::A3RTK_<ContainerAllocator> const> ConstPtr;

}; // struct A3RTK_

typedef ::dji_sdk::A3RTK_<std::allocator<void> > A3RTK;

typedef boost::shared_ptr< ::dji_sdk::A3RTK > A3RTKPtr;
typedef boost::shared_ptr< ::dji_sdk::A3RTK const> A3RTKConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dji_sdk::A3RTK_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dji_sdk::A3RTK_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace dji_sdk

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/indigo/share/nav_msgs/cmake/../msg'], 'dji_sdk': ['/home/ubuntu/m100-ros-test/workspace/src/dji_sdk/msg', '/home/ubuntu/m100-ros-test/workspace/devel/share/dji_sdk/msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::dji_sdk::A3RTK_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dji_sdk::A3RTK_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_sdk::A3RTK_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_sdk::A3RTK_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_sdk::A3RTK_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_sdk::A3RTK_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dji_sdk::A3RTK_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2f1a4c1310d587c3f79f00f74019a0be";
  }

  static const char* value(const ::dji_sdk::A3RTK_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2f1a4c1310d587c3ULL;
  static const uint64_t static_value2 = 0xf79f00f74019a0beULL;
};

template<class ContainerAllocator>
struct DataType< ::dji_sdk::A3RTK_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dji_sdk/A3RTK";
  }

  static const char* value(const ::dji_sdk::A3RTK_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dji_sdk::A3RTK_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 date\n\
uint32 time\n\
float64 longitude_RTK\n\
float64 latitude_RTK\n\
float32 height_above_sea_RTK\n\
float32 velocity_north\n\
float32 velocity_east\n\
float32 velocity_ground\n\
int16 yaw #between baseline and south\n\
uint8 position_flag\n\
uint8 yaw_flag\n\
";
  }

  static const char* value(const ::dji_sdk::A3RTK_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dji_sdk::A3RTK_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.date);
      stream.next(m.time);
      stream.next(m.longitude_RTK);
      stream.next(m.latitude_RTK);
      stream.next(m.height_above_sea_RTK);
      stream.next(m.velocity_north);
      stream.next(m.velocity_east);
      stream.next(m.velocity_ground);
      stream.next(m.yaw);
      stream.next(m.position_flag);
      stream.next(m.yaw_flag);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct A3RTK_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dji_sdk::A3RTK_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dji_sdk::A3RTK_<ContainerAllocator>& v)
  {
    s << indent << "date: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.date);
    s << indent << "time: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.time);
    s << indent << "longitude_RTK: ";
    Printer<double>::stream(s, indent + "  ", v.longitude_RTK);
    s << indent << "latitude_RTK: ";
    Printer<double>::stream(s, indent + "  ", v.latitude_RTK);
    s << indent << "height_above_sea_RTK: ";
    Printer<float>::stream(s, indent + "  ", v.height_above_sea_RTK);
    s << indent << "velocity_north: ";
    Printer<float>::stream(s, indent + "  ", v.velocity_north);
    s << indent << "velocity_east: ";
    Printer<float>::stream(s, indent + "  ", v.velocity_east);
    s << indent << "velocity_ground: ";
    Printer<float>::stream(s, indent + "  ", v.velocity_ground);
    s << indent << "yaw: ";
    Printer<int16_t>::stream(s, indent + "  ", v.yaw);
    s << indent << "position_flag: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.position_flag);
    s << indent << "yaw_flag: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.yaw_flag);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DJI_SDK_MESSAGE_A3RTK_H

// Generated by gencpp from file dji_sdk/GlobalPositionNavigationActionGoal.msg
// DO NOT EDIT!


#ifndef DJI_SDK_MESSAGE_GLOBALPOSITIONNAVIGATIONACTIONGOAL_H
#define DJI_SDK_MESSAGE_GLOBALPOSITIONNAVIGATIONACTIONGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <actionlib_msgs/GoalID.h>
#include <dji_sdk/GlobalPositionNavigationGoal.h>

namespace dji_sdk
{
template <class ContainerAllocator>
struct GlobalPositionNavigationActionGoal_
{
  typedef GlobalPositionNavigationActionGoal_<ContainerAllocator> Type;

  GlobalPositionNavigationActionGoal_()
    : header()
    , goal_id()
    , goal()  {
    }
  GlobalPositionNavigationActionGoal_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , goal_id(_alloc)
    , goal(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::actionlib_msgs::GoalID_<ContainerAllocator>  _goal_id_type;
  _goal_id_type goal_id;

   typedef  ::dji_sdk::GlobalPositionNavigationGoal_<ContainerAllocator>  _goal_type;
  _goal_type goal;




  typedef boost::shared_ptr< ::dji_sdk::GlobalPositionNavigationActionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dji_sdk::GlobalPositionNavigationActionGoal_<ContainerAllocator> const> ConstPtr;

}; // struct GlobalPositionNavigationActionGoal_

typedef ::dji_sdk::GlobalPositionNavigationActionGoal_<std::allocator<void> > GlobalPositionNavigationActionGoal;

typedef boost::shared_ptr< ::dji_sdk::GlobalPositionNavigationActionGoal > GlobalPositionNavigationActionGoalPtr;
typedef boost::shared_ptr< ::dji_sdk::GlobalPositionNavigationActionGoal const> GlobalPositionNavigationActionGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dji_sdk::GlobalPositionNavigationActionGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dji_sdk::GlobalPositionNavigationActionGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace dji_sdk

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'nav_msgs': ['/opt/ros/indigo/share/nav_msgs/cmake/../msg'], 'dji_sdk': ['/home/ubuntu/m100-ros-test/workspace/src/dji_sdk/msg', '/home/ubuntu/m100-ros-test/workspace/devel/share/dji_sdk/msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::dji_sdk::GlobalPositionNavigationActionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dji_sdk::GlobalPositionNavigationActionGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_sdk::GlobalPositionNavigationActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_sdk::GlobalPositionNavigationActionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_sdk::GlobalPositionNavigationActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_sdk::GlobalPositionNavigationActionGoal_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dji_sdk::GlobalPositionNavigationActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "aa276c42d0721388e0eaf572b1f6ea65";
  }

  static const char* value(const ::dji_sdk::GlobalPositionNavigationActionGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xaa276c42d0721388ULL;
  static const uint64_t static_value2 = 0xe0eaf572b1f6ea65ULL;
};

template<class ContainerAllocator>
struct DataType< ::dji_sdk::GlobalPositionNavigationActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dji_sdk/GlobalPositionNavigationActionGoal";
  }

  static const char* value(const ::dji_sdk::GlobalPositionNavigationActionGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dji_sdk::GlobalPositionNavigationActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalID goal_id\n\
GlobalPositionNavigationGoal goal\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalID\n\
# The stamp should store the time at which this goal was requested.\n\
# It is used by an action server when it tries to preempt all\n\
# goals that were requested before a certain time\n\
time stamp\n\
\n\
# The id provides a way to associate feedback and\n\
# result message with specific goal requests. The id\n\
# specified must be unique.\n\
string id\n\
\n\
\n\
================================================================================\n\
MSG: dji_sdk/GlobalPositionNavigationGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#latitude is in degree\n\
float64 latitude\n\
#longitude is in degree\n\
float64 longitude\n\
float32 altitude\n\
";
  }

  static const char* value(const ::dji_sdk::GlobalPositionNavigationActionGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dji_sdk::GlobalPositionNavigationActionGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.goal_id);
      stream.next(m.goal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GlobalPositionNavigationActionGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dji_sdk::GlobalPositionNavigationActionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dji_sdk::GlobalPositionNavigationActionGoal_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "goal_id: ";
    s << std::endl;
    Printer< ::actionlib_msgs::GoalID_<ContainerAllocator> >::stream(s, indent + "  ", v.goal_id);
    s << indent << "goal: ";
    s << std::endl;
    Printer< ::dji_sdk::GlobalPositionNavigationGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DJI_SDK_MESSAGE_GLOBALPOSITIONNAVIGATIONACTIONGOAL_H

// Generated by gencpp from file spar_msgs/FlightMotionFeedback.msg
// DO NOT EDIT!


#ifndef SPAR_MSGS_MESSAGE_FLIGHTMOTIONFEEDBACK_H
#define SPAR_MSGS_MESSAGE_FLIGHTMOTIONFEEDBACK_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Point.h>

namespace spar_msgs
{
template <class ContainerAllocator>
struct FlightMotionFeedback_
{
  typedef FlightMotionFeedback_<ContainerAllocator> Type;

  FlightMotionFeedback_()
    : progress(0.0)
    , waiting_for_convergence(false)
    , goal_position()
    , goal_yaw(0.0)  {
    }
  FlightMotionFeedback_(const ContainerAllocator& _alloc)
    : progress(0.0)
    , waiting_for_convergence(false)
    , goal_position(_alloc)
    , goal_yaw(0.0)  {
  (void)_alloc;
    }



   typedef float _progress_type;
  _progress_type progress;

   typedef uint8_t _waiting_for_convergence_type;
  _waiting_for_convergence_type waiting_for_convergence;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _goal_position_type;
  _goal_position_type goal_position;

   typedef float _goal_yaw_type;
  _goal_yaw_type goal_yaw;





  typedef boost::shared_ptr< ::spar_msgs::FlightMotionFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::spar_msgs::FlightMotionFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct FlightMotionFeedback_

typedef ::spar_msgs::FlightMotionFeedback_<std::allocator<void> > FlightMotionFeedback;

typedef boost::shared_ptr< ::spar_msgs::FlightMotionFeedback > FlightMotionFeedbackPtr;
typedef boost::shared_ptr< ::spar_msgs::FlightMotionFeedback const> FlightMotionFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::spar_msgs::FlightMotionFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::spar_msgs::FlightMotionFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::spar_msgs::FlightMotionFeedback_<ContainerAllocator1> & lhs, const ::spar_msgs::FlightMotionFeedback_<ContainerAllocator2> & rhs)
{
  return lhs.progress == rhs.progress &&
    lhs.waiting_for_convergence == rhs.waiting_for_convergence &&
    lhs.goal_position == rhs.goal_position &&
    lhs.goal_yaw == rhs.goal_yaw;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::spar_msgs::FlightMotionFeedback_<ContainerAllocator1> & lhs, const ::spar_msgs::FlightMotionFeedback_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace spar_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::spar_msgs::FlightMotionFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spar_msgs::FlightMotionFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::spar_msgs::FlightMotionFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::spar_msgs::FlightMotionFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spar_msgs::FlightMotionFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spar_msgs::FlightMotionFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::spar_msgs::FlightMotionFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6f23ddce6055aec8d4fbc59ea65c4cb8";
  }

  static const char* value(const ::spar_msgs::FlightMotionFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6f23ddce6055aec8ULL;
  static const uint64_t static_value2 = 0xd4fbc59ea65c4cb8ULL;
};

template<class ContainerAllocator>
struct DataType< ::spar_msgs::FlightMotionFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "spar_msgs/FlightMotionFeedback";
  }

  static const char* value(const ::spar_msgs::FlightMotionFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::spar_msgs::FlightMotionFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"# Feedback\n"
"\n"
"float32 progress					# Progress 0..1 from start to goal\n"
"bool waiting_for_convergence		# Mark to show if waiting for convergence\n"
"\n"
"geometry_msgs/Point goal_position	# Current goal position\n"
"float32 goal_yaw					# Current goal yaw\n"
"\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::spar_msgs::FlightMotionFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::spar_msgs::FlightMotionFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.progress);
      stream.next(m.waiting_for_convergence);
      stream.next(m.goal_position);
      stream.next(m.goal_yaw);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FlightMotionFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::spar_msgs::FlightMotionFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::spar_msgs::FlightMotionFeedback_<ContainerAllocator>& v)
  {
    s << indent << "progress: ";
    Printer<float>::stream(s, indent + "  ", v.progress);
    s << indent << "waiting_for_convergence: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.waiting_for_convergence);
    s << indent << "goal_position: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.goal_position);
    s << indent << "goal_yaw: ";
    Printer<float>::stream(s, indent + "  ", v.goal_yaw);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SPAR_MSGS_MESSAGE_FLIGHTMOTIONFEEDBACK_H
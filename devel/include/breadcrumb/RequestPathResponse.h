// Generated by gencpp from file breadcrumb/RequestPathResponse.msg
// DO NOT EDIT!


#ifndef BREADCRUMB_MESSAGE_REQUESTPATHRESPONSE_H
#define BREADCRUMB_MESSAGE_REQUESTPATHRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/PoseArray.h>
#include <geometry_msgs/PoseArray.h>

namespace breadcrumb
{
template <class ContainerAllocator>
struct RequestPathResponse_
{
  typedef RequestPathResponse_<ContainerAllocator> Type;

  RequestPathResponse_()
    : path()
    , path_sparse()  {
    }
  RequestPathResponse_(const ContainerAllocator& _alloc)
    : path(_alloc)
    , path_sparse(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::PoseArray_<ContainerAllocator>  _path_type;
  _path_type path;

   typedef  ::geometry_msgs::PoseArray_<ContainerAllocator>  _path_sparse_type;
  _path_sparse_type path_sparse;





  typedef boost::shared_ptr< ::breadcrumb::RequestPathResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::breadcrumb::RequestPathResponse_<ContainerAllocator> const> ConstPtr;

}; // struct RequestPathResponse_

typedef ::breadcrumb::RequestPathResponse_<std::allocator<void> > RequestPathResponse;

typedef boost::shared_ptr< ::breadcrumb::RequestPathResponse > RequestPathResponsePtr;
typedef boost::shared_ptr< ::breadcrumb::RequestPathResponse const> RequestPathResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::breadcrumb::RequestPathResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::breadcrumb::RequestPathResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::breadcrumb::RequestPathResponse_<ContainerAllocator1> & lhs, const ::breadcrumb::RequestPathResponse_<ContainerAllocator2> & rhs)
{
  return lhs.path == rhs.path &&
    lhs.path_sparse == rhs.path_sparse;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::breadcrumb::RequestPathResponse_<ContainerAllocator1> & lhs, const ::breadcrumb::RequestPathResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace breadcrumb

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::breadcrumb::RequestPathResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::breadcrumb::RequestPathResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::breadcrumb::RequestPathResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::breadcrumb::RequestPathResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::breadcrumb::RequestPathResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::breadcrumb::RequestPathResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::breadcrumb::RequestPathResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ce73eaa73efb05398295fe135230d380";
  }

  static const char* value(const ::breadcrumb::RequestPathResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xce73eaa73efb0539ULL;
  static const uint64_t static_value2 = 0x8295fe135230d380ULL;
};

template<class ContainerAllocator>
struct DataType< ::breadcrumb::RequestPathResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "breadcrumb/RequestPathResponse";
  }

  static const char* value(const ::breadcrumb::RequestPathResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::breadcrumb::RequestPathResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"# Response:\n"
"#   path:\n"
"#     - List of poses returned in the grid's parent frame\n"
"#     - Oriented facing towards the next point\n"
"#     - Empty if no path was found\n"
"#   path_sparse:\n"
"#     - List of poses returned in the grid's parent frame\n"
"#     - Oriented facing towards the next point\n"
"#     - Empty if no path was found\n"
"#     - Acts the same as \"path\" but removes intermediate steps if they form a straight line\n"
"\n"
"geometry_msgs/PoseArray path\n"
"geometry_msgs/PoseArray path_sparse\n"
"\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseArray\n"
"# An array of poses with a header for global reference.\n"
"\n"
"Header header\n"
"\n"
"Pose[] poses\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::breadcrumb::RequestPathResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::breadcrumb::RequestPathResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.path);
      stream.next(m.path_sparse);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RequestPathResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::breadcrumb::RequestPathResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::breadcrumb::RequestPathResponse_<ContainerAllocator>& v)
  {
    s << indent << "path: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseArray_<ContainerAllocator> >::stream(s, indent + "  ", v.path);
    s << indent << "path_sparse: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseArray_<ContainerAllocator> >::stream(s, indent + "  ", v.path_sparse);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BREADCRUMB_MESSAGE_REQUESTPATHRESPONSE_H
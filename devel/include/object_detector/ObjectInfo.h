// Generated by gencpp from file object_detector/ObjectInfo.msg
// DO NOT EDIT!


#ifndef OBJECT_DETECTOR_MESSAGE_OBJECTINFO_H
#define OBJECT_DETECTOR_MESSAGE_OBJECTINFO_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace object_detector
{
template <class ContainerAllocator>
struct ObjectInfo_
{
  typedef ObjectInfo_<ContainerAllocator> Type;

  ObjectInfo_()
    : objectCounts(0)
    , centerX()
    , centerY()
    , centerZ()
    , lengthX()
    , lengthY()
    , lengthZ()  {
      centerX.assign(0.0);

      centerY.assign(0.0);

      centerZ.assign(0.0);

      lengthX.assign(0.0);

      lengthY.assign(0.0);

      lengthZ.assign(0.0);
  }
  ObjectInfo_(const ContainerAllocator& _alloc)
    : objectCounts(0)
    , centerX()
    , centerY()
    , centerZ()
    , lengthX()
    , lengthY()
    , lengthZ()  {
  (void)_alloc;
      centerX.assign(0.0);

      centerY.assign(0.0);

      centerZ.assign(0.0);

      lengthX.assign(0.0);

      lengthY.assign(0.0);

      lengthZ.assign(0.0);
  }



   typedef int32_t _objectCounts_type;
  _objectCounts_type objectCounts;

   typedef boost::array<double, 100>  _centerX_type;
  _centerX_type centerX;

   typedef boost::array<double, 100>  _centerY_type;
  _centerY_type centerY;

   typedef boost::array<double, 100>  _centerZ_type;
  _centerZ_type centerZ;

   typedef boost::array<double, 100>  _lengthX_type;
  _lengthX_type lengthX;

   typedef boost::array<double, 100>  _lengthY_type;
  _lengthY_type lengthY;

   typedef boost::array<double, 100>  _lengthZ_type;
  _lengthZ_type lengthZ;





  typedef boost::shared_ptr< ::object_detector::ObjectInfo_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::object_detector::ObjectInfo_<ContainerAllocator> const> ConstPtr;

}; // struct ObjectInfo_

typedef ::object_detector::ObjectInfo_<std::allocator<void> > ObjectInfo;

typedef boost::shared_ptr< ::object_detector::ObjectInfo > ObjectInfoPtr;
typedef boost::shared_ptr< ::object_detector::ObjectInfo const> ObjectInfoConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::object_detector::ObjectInfo_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::object_detector::ObjectInfo_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::object_detector::ObjectInfo_<ContainerAllocator1> & lhs, const ::object_detector::ObjectInfo_<ContainerAllocator2> & rhs)
{
  return lhs.objectCounts == rhs.objectCounts &&
    lhs.centerX == rhs.centerX &&
    lhs.centerY == rhs.centerY &&
    lhs.centerZ == rhs.centerZ &&
    lhs.lengthX == rhs.lengthX &&
    lhs.lengthY == rhs.lengthY &&
    lhs.lengthZ == rhs.lengthZ;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::object_detector::ObjectInfo_<ContainerAllocator1> & lhs, const ::object_detector::ObjectInfo_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace object_detector

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::object_detector::ObjectInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::object_detector::ObjectInfo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::object_detector::ObjectInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::object_detector::ObjectInfo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::object_detector::ObjectInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::object_detector::ObjectInfo_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::object_detector::ObjectInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fcb703df87d24291d755127aee75bb7e";
  }

  static const char* value(const ::object_detector::ObjectInfo_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfcb703df87d24291ULL;
  static const uint64_t static_value2 = 0xd755127aee75bb7eULL;
};

template<class ContainerAllocator>
struct DataType< ::object_detector::ObjectInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "object_detector/ObjectInfo";
  }

  static const char* value(const ::object_detector::ObjectInfo_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::object_detector::ObjectInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 objectCounts\n"
"float64[100] centerX\n"
"float64[100] centerY\n"
"float64[100] centerZ\n"
"float64[100] lengthX\n"
"float64[100] lengthY\n"
"float64[100] lengthZ\n"
;
  }

  static const char* value(const ::object_detector::ObjectInfo_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::object_detector::ObjectInfo_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.objectCounts);
      stream.next(m.centerX);
      stream.next(m.centerY);
      stream.next(m.centerZ);
      stream.next(m.lengthX);
      stream.next(m.lengthY);
      stream.next(m.lengthZ);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ObjectInfo_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::object_detector::ObjectInfo_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::object_detector::ObjectInfo_<ContainerAllocator>& v)
  {
    s << indent << "objectCounts: ";
    Printer<int32_t>::stream(s, indent + "  ", v.objectCounts);
    s << indent << "centerX[]" << std::endl;
    for (size_t i = 0; i < v.centerX.size(); ++i)
    {
      s << indent << "  centerX[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.centerX[i]);
    }
    s << indent << "centerY[]" << std::endl;
    for (size_t i = 0; i < v.centerY.size(); ++i)
    {
      s << indent << "  centerY[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.centerY[i]);
    }
    s << indent << "centerZ[]" << std::endl;
    for (size_t i = 0; i < v.centerZ.size(); ++i)
    {
      s << indent << "  centerZ[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.centerZ[i]);
    }
    s << indent << "lengthX[]" << std::endl;
    for (size_t i = 0; i < v.lengthX.size(); ++i)
    {
      s << indent << "  lengthX[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.lengthX[i]);
    }
    s << indent << "lengthY[]" << std::endl;
    for (size_t i = 0; i < v.lengthY.size(); ++i)
    {
      s << indent << "  lengthY[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.lengthY[i]);
    }
    s << indent << "lengthZ[]" << std::endl;
    for (size_t i = 0; i < v.lengthZ.size(); ++i)
    {
      s << indent << "  lengthZ[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.lengthZ[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // OBJECT_DETECTOR_MESSAGE_OBJECTINFO_H
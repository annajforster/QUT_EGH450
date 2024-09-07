# Install script for directory: /home/uavteam2/QUT_EGH450/src/depthai_publisher_updated

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/uavteam2/QUT_EGH450/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/uavteam2/QUT_EGH450/build/depthai_publisher_updated/catkin_generated/safe_execute_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/uavteam2/QUT_EGH450/build/depthai_publisher_updated/catkin_generated/installspace/depthai_publisher_updated.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/depthai_publisher_updated/cmake" TYPE FILE FILES
    "/home/uavteam2/QUT_EGH450/build/depthai_publisher_updated/catkin_generated/installspace/depthai_publisher_updatedConfig.cmake"
    "/home/uavteam2/QUT_EGH450/build/depthai_publisher_updated/catkin_generated/installspace/depthai_publisher_updatedConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/depthai_publisher_updated" TYPE FILE FILES "/home/uavteam2/QUT_EGH450/src/depthai_publisher_updated/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/depthai_publisher_updated" TYPE PROGRAM FILES "/home/uavteam2/QUT_EGH450/build/depthai_publisher_updated/catkin_generated/installspace/dai_publisher")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/depthai_publisher_updated" TYPE PROGRAM FILES "/home/uavteam2/QUT_EGH450/build/depthai_publisher_updated/catkin_generated/installspace/aruco_subscriber")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/depthai_publisher_updated" TYPE PROGRAM FILES "/home/uavteam2/QUT_EGH450/build/depthai_publisher_updated/catkin_generated/installspace/dai_detector")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/depthai_publisher_updated" TYPE PROGRAM FILES "/home/uavteam2/QUT_EGH450/build/depthai_publisher_updated/catkin_generated/installspace/aruco_subscriber_voice")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/depthai_publisher_updated" TYPE PROGRAM FILES "/home/uavteam2/QUT_EGH450/build/depthai_publisher_updated/catkin_generated/installspace/aruco_subscriber_voice2")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/depthai_publisher_updated" TYPE PROGRAM FILES "/home/uavteam2/QUT_EGH450/build/depthai_publisher_updated/catkin_generated/installspace/dai_publisher_yolov5_runner_2")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/depthai_publisher_updated" TYPE PROGRAM FILES "/home/uavteam2/QUT_EGH450/build/depthai_publisher_updated/catkin_generated/installspace/aruco_subscriber_pose_wip")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/depthai_publisher_updated" TYPE PROGRAM FILES "/home/uavteam2/QUT_EGH450/build/depthai_publisher_updated/catkin_generated/installspace/aruco_subscriber_pose_wip2")
endif()


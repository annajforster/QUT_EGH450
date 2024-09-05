execute_process(COMMAND "/home/uavteam2/QUT_EGH450/build/depthai_publisher_updated/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/uavteam2/QUT_EGH450/build/depthai_publisher_updated/catkin_generated/python_distutils_install.sh) returned error code ")
endif()

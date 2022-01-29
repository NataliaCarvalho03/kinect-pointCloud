cmake_minimum_required(VERSION 2.8 FATAL_ERROR)
project("KinectProject")

find_package(OpenCV REQUIRED)
find_package(libfreenect REQUIRED)

add_executable(
    kinect_test kinect_test.cpp
)

include_directories(/usr/local/include/libfreenect/
                    /usr/local/include/libusb-1.0/)

target_link_libraries(kinect_test  ${OpenCV_LIBS}
                               ${FREENECT_LIBRARIES})

target_link_libraries(kinect_test  ${OpenCV_LIBS}
                                   ${CMAKE_THREAD_LIBS_INIT}
                                   ${FREENECT_LIBRARIES})

cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

find_package(OpenCV REQUIRED)
find_package(Threads REQUIRED)
find_package(libfreenect REQUIRED)


include_directories( /usr/local/include/libfreenect/
                     /usr/local/include/libusb-1.0/
)

add_executable(
    depth_map depth_map.cpp
)

target_link_libraries(depth_map  ${OpenCV_LIBS}
                                   ${CMAKE_THREAD_LIBS_INIT}
                                   ${FREENECT_LIBRARIES} freenect
                                   )
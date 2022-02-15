find_package(OpenCV REQUIRED)
find_package(Threads REQUIRED)
find_package(libfreenect REQUIRED)
find_package(GLUT REQUIRED)
find_package(OpenGL)
set(DEPENDENCIES realsense2 glfw ${OPENGL_LIBRARIES})

include_directories( /usr/local/include/libfreenect/
                     /usr/local/include/libusb-1.0/
                     /usr/include/GL
                     ${CMAKE_CURRENT_SOURCE_DIR}/include/
)

file(GLOB SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)

add_executable(
    kinect_calibration ${SOURCES}
)

target_link_libraries(kinect_calibration  ${OpenCV_LIBS}
                                   ${CMAKE_THREAD_LIBS_INIT}
                                   ${FREENECT_LIBRARIES} freenect freenect_sync
                                   ${GLUT_LIBRARIES}
                                   ${OPENGL_LIBRARIES} glfw OpenGL::GL
                                   )
find_package(OpenCV REQUIRED)
find_package(Threads REQUIRED)
find_package(libfreenect REQUIRED)
find_package(GLUT REQUIRED)
find_package(OpenGL)
set(DEPENDENCIES realsense2 glfw ${OPENGL_LIBRARIES})

include_directories( /usr/local/include/libfreenect/
                     /usr/local/include/libusb-1.0/
                     /usr/include/GL
)

add_executable(
    point_cloud_viz view_point_cloud.cpp
)

target_link_libraries(point_cloud_viz  ${OpenCV_LIBS}
                                   ${CMAKE_THREAD_LIBS_INIT}
                                   ${FREENECT_LIBRARIES} freenect freenect_sync
                                   ${GLUT_LIBRARIES}
                                   ${OPENGL_LIBRARIES} glfw OpenGL::GL
                                   )
# Point Cloud from XBOX 360 Kinect Sensor

This repo contains a set of projects to acquire and process kinect data as depth maps and Point Clouds. It is still under development.

## Dependencies

- cmake
- libfreenect
- librealsense2 [see how to install](https://github.com/IntelRealSense/librealsense/blob/master/doc/distribution_linux.md)
- libglfw3-dev 
- freeglut3-dev
- OpenCV 4.x

## Building the Project

In the root folder of this project, use the following commands:

```bash
mkdir build && cd build

cmake ..

make
```

## Running the Project

Inside build folder there will be two subfolders: DepthMap and PointCloud, just run the executables inside them. For example:

*Running point_cloud_viz executable from build folder*

```bash
./PointCloud/point_cloud_viz
```
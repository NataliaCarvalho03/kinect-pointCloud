#ifndef DEPTHCONTROLLER_HPP
#define DEPTHCONTROLLER_HPP

#include <thread>

#include "libfreenect.h"

#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

#include <kinect_controller.hpp>
class depthController : public kinectController
{
    public:
        depthController();
        cv::Mat getFrame();
        
};

#endif
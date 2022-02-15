#ifndef RGBCONTROLLER_HPP
#define RGBCONTROLLER_HPP

#include <kinect_controller.hpp>

#include "libfreenect.h"

#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

class rgbController : public kinectController
{
    public:
        rgbController();
        cv::Mat getFrame();
};

#endif
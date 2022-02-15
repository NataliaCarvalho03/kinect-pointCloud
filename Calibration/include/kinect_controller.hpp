#ifndef KINECTCONTROLLER_HPP
#define KINECTCONTROLLER_HPP

#include "libfreenect.h"


 class kinectController
{
    public:
        kinectController();
        virtual cv::Mat getFrame();
    
    private:
        freenect_context* fn_ctx;
        int ret;
        int devices;


};
#endif
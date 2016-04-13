#include "opencv2/highgui/highgui.hpp"
#include <iostream>

//#include "stdafx.h"
//#include <cv.h>
//#include <highgui.h>


using namespace cv;
using namespace std;


int main()
{
        //display the original image
        IplImage* img = cvLoadImage("/Users/davidchen/Desktop/opencvProjects/cv/cv/SplashScreenImage.jpg");
        cvNamedWindow("MyWindow");
        cvShowImage("MyWindow", img);

        //dilate and display the dilated image
        cvDilate(img, img, 0, 2);
        cvNamedWindow("Dilated");
        cvShowImage("Dilated", img);

        cvWaitKey(0);
        
        //cleaning up
        cvDestroyWindow("MyWindow");
        cvDestroyWindow("Dilated");
        cvReleaseImage(&img);
        
        return 0;
}
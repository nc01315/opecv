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
    
    //erode and display the eroded image
    cvErode(img, img, 0, 2);
    cvNamedWindow("Eroded");
    cvShowImage("Eroded", img);
    
    cvWaitKey(0);
    
    //cleaning up
    cvDestroyWindow("MyWindow");
    cvDestroyWindow("Eroded");
    cvReleaseImage(&img);
    
    return 0;
}
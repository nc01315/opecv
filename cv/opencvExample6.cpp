#include "opencv2/highgui/highgui.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
        //display the original image
        IplImage* img = cvLoadImage("/Users/davidchen/Desktop/opencvProjects/cv/cv/SplashScreenImage.jpg");
		cvNamedWindow("MyWindow");
		cvShowImage("MyWindow", img);

		 //invert and display the inverted image
		 cvNot(img, img);
		 cvNamedWindow("Inverted");
		 cvShowImage("Inverted", img);

		 vector<int> compression_params; //vector that stores the compression parameters of the image
 compression_params.push_back(CV_IMWRITE_JPEG_QUALITY); //specify the compression technique

			       compression_params.push_back(98); //specify the compression quality

	bool bSuccess =imwrite("/Users/davidchen/Desktop/opencvProjects/cv/cv/InvSplashScreenImage.jpg", img, compression_params); //write the image to file

    if ( !bSuccess )
   {
        cout << "ERROR : Failed to save the image" << endl;
   }
       
		        //cleaning up
		        cvDestroyWindow("MyWindow");
		        cvDestroyWindow("Inverted");
		        cvReleaseImage(&img);
       
		        return 0;
		}

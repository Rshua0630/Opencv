/*
 * =====================================================================================
 *
 *       Filename:  facedetect_p.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2018年12月26日 09时39分35秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Joshua 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main(int argc,char ** argv)
{
   cv::Mat frame;
   cv::VideoCapture video;
   cv::namedWindow("facedetect",cv::WINDOW_AUTOSIZE);
   video.open(0);
   if(!video.isOpened()) {
        printf("Joshua note: can't open cam\r\n");
        return -1;
   }
   for(;;){
         video >> frame;  
        if(!frame.empty()){
            cv::imshow("facedetect",frame);
            cv::waitKey(30);
        }
   }
}


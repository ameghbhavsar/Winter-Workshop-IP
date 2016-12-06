#include "opencv2/imgproc/imgproc.hpp"
//#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <bits/stdc++.h>

using namespace cv;
using namespace std;

Mat src, src_gray;
Mat dst, detected_edges;

int edgeThresh = 1;
int lowThreshold=10;
const char* window_name = "Edge Map";

static void CannyThreshold(int, void*)
{
    blur( src_gray, detected_edges, Size(3,3) );
    Canny(detected_edges, detected_edges, lowThreshold, lowThreshold*3, 3);
    dst = Scalar::all(0);
    src.copyTo( dst, detected_edges);
    imshow( window_name, dst );
}
int main()
{
  VideoCapture a(0);
  while(a.isOpened()){
    a>>src;
    dst.create( src.size(), src.type() );
  //  cvtColor( src, src_gray, CV_BGR2GRAY );
    namedWindow( window_name, WINDOW_AUTOSIZE );
    createTrackbar( "Min Threshold:", window_name, &lowThreshold,255, CannyThreshold );
    CannyThreshold(0, 0);
    char c;/*
    if(getc(c)){
      if(c=='q'){
        imwrite("1.jpg",dst);
        exit(0);
      }
    }*/
    waitKey(30);
  }
  return 0;
}

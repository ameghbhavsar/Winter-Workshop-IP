#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <bits/stdc++.h>

using namespace cv;
using namespace std;

Mat src;
Mat dst;

static void CallBackFunc(int event, int y, int x, int flags, void* userdata){
  if(event == EVENT_LBUTTONDOWN){
  for(int i=0;i<src.rows;i++){
    for(int j=0;j<src.cols;j++){
      if(src.at<Vec3b>(i,j)[0]==255 && src.at<Vec3b>(i,j)[1]==255)
        dst.at<Vec3b>(i,j)[0]==0;
        dst.at<Vec3b>(i,j)[1]==0;
        dst.at<Vec3b>(i,j)[2]==255;
    }
  }
  imshow("Original",src);
  imshow("Detected",dst);
  }
}

int main()
{
  VideoCapture a(0);
  while(a.isOpened()){
    a>>src;
    dst.create( src.size(), src.type());
    namedWindow("Original", WINDOW_AUTOSIZE );
    namedWindow("Detected", WINDOW_AUTOSIZE );
    setMouseCallback("Original", CallBackFunc, NULL);
    waitKey(30);
  }
  return 0;
}

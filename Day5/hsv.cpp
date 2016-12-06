#include"opencv2/imgproc/imgproc.hpp"
#include"opencv2/highgui/highgui.hpp"
using namespace std;
using namespace cv;

Mat HSV,var2,var1;
int lH,lS,lV,hH,hS,hV;

void callback(int ,void*){

  inRange(HSV,Scalar(lV,lS,lH),Scalar(hV,hS,hH),var2);
  imshow("windows1",HSV);
  imshow("windows2",var2);
      waitKey(100);
}

int main()
{
//  VideoCapture a(0);
  var1=imread("img.jpg",1);
  // imshow("windows1",var1);
   namedWindow("Trackbars",WINDOW_AUTOSIZE);
   createTrackbar("Low H","Trackbars",&lH,179,callback);
   createTrackbar("Low S","Trackbars",&lS,255,callback);
   createTrackbar("Low V","Trackbars",&lV,255,callback);
   createTrackbar("High H","Trackbars",&hH,179,callback);
   createTrackbar("High S","Trackbars",&hS,255,callback);
   createTrackbar("High V","Trackbars",&hV,255,callback);
    cvtColor(var1,HSV,CV_RGB2HSV);
    callback(0,0);
/*  while(1){
    inRange(HSV,Scalar(lV,lS,lH),Scalar(hV,hS,hH),var2);
    imshow("windows1",HSV);
    imshow("windows2",var2);
        waitKey(100);
  }
*/
  waitKey(0);
   return 0;
}

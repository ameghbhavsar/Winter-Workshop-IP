#include"opencv2/imgproc/imgproc.hpp"
#include"opencv2/highgui/highgui.hpp"
using namespace std;
using namespace cv;
int main()
{
        Mat var1(80,80,CV_8UC1,Scalar(0));    //(B,G,R)
	for(int i=0;i<var1.rows;i++){
	   for(int j=0;j<var1.cols;j++){
		if(((i/8)+(j/8))%2==0)
		   var1.at<uchar>(i,j)=0;
		else
		   var1.at<uchar>(i,j)=255;
	   }
	}
   namedWindow("windows1",WINDOW_AUTOSIZE);
   imshow("window1",var1);
   waitKey(0);
   return 0;
}

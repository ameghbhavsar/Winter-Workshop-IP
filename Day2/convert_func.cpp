#include"opencv2/core/core.hpp"
#include"opencv2/imgproc/imgproc.hpp"
#include"opencv2/highgui/highgui.hpp"
using namespace std;
using namespace cv;

int main()
{
   Mat var1=imread("img.jpg",1);
   Mat gray(var1.rows,var1.cols,CV_8UC1,Scalar(0));
   Mat bin(var1.rows,var1.cols,CV_8UC1,Scalar(0));
   //namedWindow("windows1",WINDOW_AUTOSIZE);
   int a=150;
  // imshow("windows1",var1);
   namedWindow("windows3",WINDOW_AUTOSIZE);
   createTrackbar("TrackBar","windows3",&a,255);
   while(1){
   		for(int i=0;i<var1.rows;i++){
   			for(int j=0;j<var1.cols;j++){
   				gray.at<uchar>(i,j)=(var1.at<Vec3b>(i,j)[0]+var1.at<Vec3b>(i,j)[1]+var1.at<Vec3b>(i,j)[2])/3;
				if(gray.at<uchar>(i,j)<a)
					bin.at<uchar>(i,j)=0;   
				else
					bin.at<uchar>(i,j)=255;
   			}
   		}  
   		imshow("windows3",bin);
   		waitKey(100);
   }
   //cvtColor(var1,gray,CV_RGB2GRAY);
   //namedWindow("windows2",WINDOW_AUTOSIZE);
   //imshow("windows2",gray);
   //waitKey(0);
   return 0;
}

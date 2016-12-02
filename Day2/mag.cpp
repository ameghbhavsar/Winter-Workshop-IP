#include"opencv2/imgproc/imgproc.hpp"
#include"opencv2/highgui/highgui.hpp"
using namespace std;
using namespace cv;

int main()
{
   Mat var1=imread("img.jpg",1);
   Mat mag(var1.rows*2,var1.cols*2,CV_8UC3,Scalar(0,0,0));
   //Mat bin(var1.rows,var1.cols,CV_8UC1,Scalar(0));
   namedWindow("windows1",WINDOW_AUTOSIZE);
   namedWindow("windows2",WINDOW_AUTOSIZE);
   int b,g,r;
  // imshow("windows1",var1);
   for(int i=0;i<var1.rows;i++){
   	for(int j=0;j<var1.cols;j++){
   			b=var1.at<Vec3b>(i,j)[0];
            g=var1.at<Vec3b>(i,j)[1];
            r=var1.at<Vec3b>(i,j)[2];
            mag.at<Vec3b>(((i+1)*2)-1,((j+1)*2)-1)=var1.at<Vec3b>(i,j);
            mag.at<Vec3b>(((i+1)*2)-1,((j+1)*2)-2)=var1.at<Vec3b>(i,j);
            mag.at<Vec3b>(((i+1)*2)-2,((j+1)*2)-1)=var1.at<Vec3b>(i,j);
            mag.at<Vec3b>(((i+1)*2)-2,((j+1)*2)-2)=var1.at<Vec3b>(i,j);
      }
	} 
   imshow("windows1",var1);
   imshow("windows2",mag);
   waitKey(0);
   return 0;
}

#include"opencv2/imgproc/imgproc.hpp"
#include"opencv2/highgui/highgui.hpp"
using namespace std;
using namespace cv;

int main()
{
   Mat var1=imread("img.jpg",1);
   Mat var2(var1.rows/2,var1.cols/2,CV_8UC3,Scalar(0,0,0));
   //Mat bin(var1.rows,var1.cols,CV_8UC1,Scalar(0));
   namedWindow("windows1",WINDOW_AUTOSIZE);
   namedWindow("windows2",WINDOW_AUTOSIZE);
   int a,b,c,d;
  // imshow("windows1",var1);
   for(int i=0;i<var2.rows;i++){
   	for(int j=0;j<var2.cols;j++){
      for(int x=0;x<3;x++)
        a=var1.at<Vec3b>((i+1)*2-1,(j+1)*2-1)[x];
        b=var1.at<Vec3b>((i+1)*2-2,(j+1)*2-1)[x];
        c=var1.at<Vec3b>((i+1)*2-1,(j+1)*2-2)[x];
        d=var1.at<Vec3b>((i+1)*2-2,(j+1)*2-2)[x];
        var2.at<Vec3b>(i,j)[x]=(a+b+c+d)/4;
      }
	}
   imshow("windows1",var1);
   imshow("windows2",mag);
   waitKey(0);
   return 0;
}

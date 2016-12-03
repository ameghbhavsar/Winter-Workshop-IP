#include"opencv2/imgproc/imgproc.hpp"
#include"opencv2/highgui/highgui.hpp"
#include<math.h>
using namespace std;
using namespace cv;

int main()
{
   Mat var1=imread("img.jpg",1);
   Mat gray(var1.rows,var1.cols,CV_8UC1,Scalar(0));
   Mat var2(var1.rows,var1.cols,CV_8UC1,Scalar(0));
   Mat var3(var1.rows,var1.cols,CV_8UC1,Scalar(0));
   //Mat bin(var1.rows,var1.cols,CV_8UC1,Scalar(0));
   cvtColor(var1,gray,CV_RGB2GRAY);
   namedWindow("windows1",WINDOW_AUTOSIZE);
   namedWindow("windows2",WINDOW_AUTOSIZE);
   namedWindow("windows3",WINDOW_AUTOSIZE);
   int T=150;
   createTrackbar("TrackBar","windows3",&T,255);
   int Lx[3]={-1,0,1};
   int Ly[3]={1,0,-1};
   int A[3],G[3][3],R[3][3];
  // imshow("windows1",var1);
  while(1){
   for(int i=1;i<(var1.rows-2);i++){
   	for(int j=1;j<(var1.cols-2);j++){
         int sumx=0,sumy=0;
         for(int l=i-1,a=0;a<3;a++,l++){

                  sumy+=Ly[a]*gray.at<uchar>(l,j)/2;
        }
        for(int m=j-1,a=0;a<3;a++,m++){
          
                  sumx+=Lx[a]*gray.at<uchar>(i,m)/2;

         }
         var2.at<uchar>(i,j)=sqrt((sumx*sumx)+(sumy*sumy));
         if(var2.at<uchar>(i,j)<T)
           var3.at<uchar>(i,j)=0;
         else
           var3.at<uchar>(i,j)=255;
      }
   }
   imshow("windows1",var2);
   imshow("windows2",var3);
   waitKey(100);
    }
   return 0;
}

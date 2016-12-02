#include"opencv2/imgproc/imgproc.hpp"
#include"opencv2/highgui/highgui.hpp"
#include<math.h>
using namespace std;
using namespace cv;

int main()
{
   Mat var1=imread("img.jpg",1);
   Mat var2(var1.rows,var1.cols,CV_8UC3,Scalar(0,0,0));
   //Mat bin(var1.rows,var1.cols,CV_8UC1,Scalar(0));
   namedWindow("windows1",WINDOW_AUTOSIZE);
   namedWindow("windows2",WINDOW_AUTOSIZE);
   int b,g,r;
   int Gx[3][3]={-1,0,1,-2,0,2,-1,0,1};
   int Gy[3][3]={1,2,1,0,0,0,-1,-2,-1};
   int A[3],G[3][3],R[3][3];
  // imshow("windows1",var1);
   for(int x=0;x<3;x++){
   for(int i=1;i<(var1.rows-1);i++){
   	for(int j=1;j<(var1.cols-1);j++){
         int sumx=0,sumy=0;
         for(int l=i-1,a=0;a<3;a++,l++){
            for(int m=j-1,b=0;b<3;m++,b++){
   
                  sumx+=Gx[a][b]*var1.at<Vec3b>(l,m)[x];

            }
            for(int m=j-1,b=0;b<3;m++,b++){
   
                  sumy+=Gy[a][b]*var1.at<Vec3b>(l,m)[x];

            }
         }
         var2.at<Vec3b>(i,j)[x]=sqrt((sumx*sumx)+(sumy*sumy));
      }
   }
	} 
   imshow("windows1",var1);
   imshow("windows2",var2);
   waitKey(0);
   return 0;
}

#include"opencv2/imgproc/imgproc.hpp"
#include"opencv2/highgui/highgui.hpp"
#include<iostream>
using namespace std;
using namespace cv;

void Sort(int A[])
{
    int temp, i , j;
    for(i = 0; i < 9; i++){
        temp = A[i];
        for(j = i-1; j >= 0 && temp < A[j]; j--){
            A[j+1] = A[j];
        }
        A[j+1] = temp;
    }
}

int main()
{
   Mat var1=imread("img.jpg",1);
   Mat var2(var1.rows,var1.cols,CV_8UC3,Scalar(0,0,0));
   //Mat bin(var1.rows,var1.cols,CV_8UC1,Scalar(0));
   namedWindow("windows1",WINDOW_AUTOSIZE);
   namedWindow("windows2",WINDOW_AUTOSIZE);
   //int b,g,r;
   int k[3][3]={1,1,1,1,1,1,1,1,1};
   int B[3][3],G[3][3],R[3][3];
   int b[9],g[9],r[9];
  // imshow("windows1",var1);
   for(int i=1;i<(var1.rows-1);i++){
   	for(int j=1;j<(var1.cols-1);j++){
         int sum=0,c=0;
         for(int l=i-1,x=0;x<3;x++,l++){
            for(int m=j-1,y=0;y<3;m++,y++){

                b[c]=k[x][y]*var1.at<Vec3b>(l,m)[0];
                g[c]=k[x][y]*var1.at<Vec3b>(l,m)[1];
                r[c]=k[x][y]*var1.at<Vec3b>(l,m)[2];
                c++;
            }
         }
         Sort(b);
         Sort(g);
         Sort(r);
         var2.at<Vec3b>(i,j)[0]=b[4];
         var2.at<Vec3b>(i,j)[1]=g[4];
         var2.at<Vec3b>(i,j)[2]=r[4];
      }
   }
   cout<<"1";
   imshow("windows1",var1);
   imshow("windows2",var2);
   waitKey(0);
   return 0;
}

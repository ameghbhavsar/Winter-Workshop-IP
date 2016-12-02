#include"opencv2/imgproc/imgproc.hpp"
#include"opencv2/highgui/highgui.hpp"
using namespace std;
using namespace cv;

int main()
{
   Mat var1=imread("img.jpg",1);
   Mat blue(100,256,CV_8UC3,Scalar(0,0,0));
   Mat green(100,256,CV_8UC3,Scalar(0,0,0));
   Mat red(100,256,CV_8UC3,Scalar(0,0,0));
   //namedWindow("windows1",WINDOW_AUTOSIZE);
   float B[256],G[256],R[256];
   int b,g,r;
   int bmax=0,gmax=0,rmax=0;  
   for(int i=0;i<256;i++){
      B[i]=0;
      G[i]=0;
      R[i]=0;
   }            
  // imshow("windows1",var1);
   namedWindow("windows1",WINDOW_AUTOSIZE);
   namedWindow("windows2",WINDOW_AUTOSIZE);
   namedWindow("windows3",WINDOW_AUTOSIZE);
   for(int i=0;i<var1.rows;i++){
   	for(int j=0;j<var1.cols;j++){
         b=var1.at<Vec3b>(i,j)[0];
         B[b]++;
         g=var1.at<Vec3b>(i,j)[0];
         G[b]++;   
         r=var1.at<Vec3b>(i,j)[0];
         R[b]++;            
   	}
   }  
   for(int i=0;i<256;i++)
   {
      if(B[i]>bmax)
         bmax=B[i];
      if(G[i]>gmax)
         gmax=G[i];
      if(R[i]>rmax)
         rmax=R[i];
   }
   assert(bmax!=0);
   for(int i=0;i<256;i++){
      B[i]=B[i]*100.0/bmax;
      G[i]=G[i]*100.0/gmax;
      R[i]=R[i]*100.0/rmax;
   }

  for(int i=0;i<256;i++){
      int p=B[i],q=G[i],s=R[i];
      for(int j=99;p>0&&j>0;j--,p--){
         blue.at<Vec3b>(j,i)[0]=255;
      }
      for(int k=99;q>0&&k>0;k--,q--){
         green.at<Vec3b>(k,i)[1]=255;
      }
      for(int l=99;s>0&&l>0;l--,s--){
         red.at<Vec3b>(l,i)[2]=255;
      }
   }  
   imshow("windows1",blue);
   imshow("windows2",green);
   imshow("windows3",red);
   waitKey(0);
   //cvtColor(var1,gray,CV_RGB2GRAY);
   //namedWindow("windows2",WINDOW_AUTOSIZE);
   //imshow("windows2",gray);
   //waitKey(0);
   return 0;
}

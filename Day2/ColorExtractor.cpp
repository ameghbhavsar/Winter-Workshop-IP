#include"opencv2/imgproc/imgproc.hpp"
#include"opencv2/highgui/highgui.hpp"
using namespace std;
using namespace cv;

int main()
{
   Mat var1=imread("img.jpg",1);
   Mat var2(var1.rows,var1.cols,CV_8UC3,Scalar(0,0,0));
   namedWindow("windows1",WINDOW_AUTOSIZE);
   int B,G,R,dB,dG,dR,b,g,r;
  // imshow("windows1",var1);
   namedWindow("Trackbars",WINDOW_AUTOSIZE);
   createTrackbar("B","Trackbars",&B,255);
   createTrackbar("G","Trackbars",&G,255);
   createTrackbar("R","Trackbars",&R,255);
   createTrackbar("dB","Trackbars",&dB,255);
   createTrackbar("dG","Trackbars",&dG,255);
   createTrackbar("dR","Trackbars",&dR,255);
   while(1){
   		for(int i=0;i<var1.rows;i++){
   			for(int j=0;j<var1.cols;j++){
               b=var1.at<Vec3b>(i,j)[0];
               g=var1.at<Vec3b>(i,j)[1];
               r=var1.at<Vec3b>(i,j)[2];
   				if(b<B+dB && b>B-dB){
                  if(g<G+dG && g>G-dG){
                     if(r<R+dR && r>R-dR){
                        var2.at<Vec3b>(i,j)[0]=b;
                        var2.at<Vec3b>(i,j)[1]=g;
                        var2.at<Vec3b>(i,j)[2]=r;
                     }   

                  }
               }                 
               else{
                  var2.at<Vec3b>(i,j)[0]=0;
                  var2.at<Vec3b>(i,j)[1]=0;
                  var2.at<Vec3b>(i,j)[2]=0;
               }               
            }
   		}
         imshow("windows1",var2);
         waitKey(100);
   }  

   return 0;
}

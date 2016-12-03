#include"opencv2/imgproc/imgproc.hpp"
#include"opencv2/highgui/highgui.hpp"
using namespace std;
using namespace cv;
int main()
{
  Mat var1(200,200,CV_8UC3,Scalar(0,0,0));    //(B,G,R)
	for(int i=0;i<var1.rows;i++){
	   for(int j=0;j<var1.cols;j++){
		if(i<j){
      if(i+j<200)
        var1.at<Vec3b>(j,i)={255,255,255};  //W
      else
        var1.at<Vec3b>(j,i)={0,0,255};  //RED
    }
    else{
      if(i+j<200)
        var1.at<Vec3b>(j,i)={255,0,0};  //B
      else
        var1.at<Vec3b>(j,i)={0,255,0};  //RED
    }
	   }
	}
   namedWindow("windows1",WINDOW_AUTOSIZE);
   imshow("window1",var1);
   waitKey(0);
   return 0;
}

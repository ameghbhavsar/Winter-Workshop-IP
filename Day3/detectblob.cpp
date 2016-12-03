#include"opencv2/imgproc/imgproc.hpp"
#include"opencv2/highgui/highgui.hpp"
#include <bits/stdc++.h>
using namespace std;
using namespace cv;

struct point{
  int x;
  int y;
};

int main()
{
   Mat var1=imread("blob.jpg",0);
   int visited[var1.cols][var1.rows];
   int count=0;
   stack<point> S;
   point a,p,q;
   namedWindow("windows1",WINDOW_AUTOSIZE);


   for(int i=0;i<var1.rows;i++){           //initialize visited to 0
     for(int j=0;j<var1.cols;j++){
       visited[i][j]=0;
     }
   }
   for(int i=0;i<var1.rows;i++){          
     for(int j=0;j<var1.cols;j++){
       if(var1.at<uchar>(i,j)==255)
          var1.at<uchar>(i,j)==0;
       else
        var1.at<uchar>(i,j)==255;
     }
   }

   for(int i=0; i<var1.rows;i++){
     for(int j=0;j<var1.cols;j++){
       if(var1.at<uchar>(i,j)==255 && !visited[i][j]){
         p.x=i;
         p.y=j;
         S.push(p);
         count++;
       }
       while(!S.empty()){
         a=S.top();
         S.pop();
         visited[a.x][a.y]=1;
         for(int l=a.x-1;l<=a.x+1;l++){
           for(int m=a.y;m<=a.y+1;m++){
             if(var1.at<uchar>(l,m)==255 && !visited[l][m]){
              q.x=l;
              q.y=m;
              S.push(q);
             }
            }
          }
       }
     }
   }
   printf("%d\n",count);

   imshow("windows1",var1);
//   imshow("windows2",var3);
   waitKey(0);
   return 0;
}

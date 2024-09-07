#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
int main(){
     int a,b,c;
     double ans0,ans1,dis;
     scanf("%d%d%d",&a,&b,&c);
     dis=(pow(b,2)-4*a*c);
     if (dis<0){
          printf("None");
          return 0;
     }
     ans0=(-b+sqrt(dis))/2.0/a;
     ans1=(-b-sqrt(dis))/2.0/a;
     if (dis == 0){
          printf("%.3f",ans0);
     } else if (ans0>ans1) {
          printf("%.3f %.3f",ans1,ans0);
     } else {
          printf("%.3f %.3f",ans0,ans1);
     }
     return 0; 
}
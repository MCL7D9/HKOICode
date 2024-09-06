#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
int main(){
     int x,y,z;
     double ans0,ans1;
     scanf("%d%d%d",&x,&y,&z);
     ans0=(-y+sqrt(y*y-4*x*y))/2/x;
     ans1=(-y-sqrt(y*y-4*x*y))/2/x;
     printf("%f\n%f",ans0,ans1);
     return 0; 
}
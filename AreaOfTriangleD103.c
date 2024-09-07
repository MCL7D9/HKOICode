#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846
int main(){
     int x,y,z;
     scanf("%d%d%d",&x,&y,&z);
     printf("%.3f",(x*y*sin(z*(M_PI/180.0))/2));
     return 0;
}
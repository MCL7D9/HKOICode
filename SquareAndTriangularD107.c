#include <stdio.h>
#include <math.h>

int main(){
     long double x,y,z;
     scanf("%Lf",&x);
     y=sqrt(x);
     z=cbrt(x);
     if (ceil(y)==y&&ceil(z)==z){
          printf("Both");
     } else if (ceil(y)==y){
          printf("Square");
     } else if (ceil(z)==z){
          printf("Triangle");
     } else {
          printf("Neither");
     }
     return 0;
}
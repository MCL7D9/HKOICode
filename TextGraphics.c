#include <stdio.h>
#include <math.h>

int main(){
     int x,a=0;
     scanf("%d",&x);
     a=(int)floor(x/2);
     for (int i=0;i<floor(x/2);i++){
          for (int j=0;j<x;j++){
               (i==a||i==(x-a))?printf("#"):printf(" ");
          }
          printf("\n");
     }

     return 0;
}
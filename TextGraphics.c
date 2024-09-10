#include <stdio.h>
#include <math.h>

int main(){
     int x=0,a=0;
     scanf("%d",&x);
     for (int i=0;i<floor(x/2);i++){
          a=(int)floor(x/2)-i;
          for (int j=0;j<x;j++){
               if (i==a||i==(x-a)) {
                    printf("#");
               } else {
                    printf("-");
               }
          }
          printf("\n");
     }

     return 0;
}
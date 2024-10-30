#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
     int x=0,a=0;
     printf("Input Num: \n");
     scanf("%d",&x);
     for (int i=0;i<x;i++){
          a=(int)floor(x/2)-i;
          for (int j=0;j<(x+1);j++){  
              if (j==(x-j)/2) {
                 printf("#");
              } else {
                printf("-");
              }
          }
          printf("\n");
     }
     system("pause");
     return 0;
}

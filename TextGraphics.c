#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
     int x=0,a=0;
     scanf("%d",&x);
     for (int i=0;i<x;i++){
          a=(int)floor(x/2)-i;
          for (int j=0;j<(x+1);j++){  
              if (j==(abs(a))||j==(x-a)||j==(x+a)) {
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

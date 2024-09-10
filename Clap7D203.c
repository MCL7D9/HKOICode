#include <stdio.h>
#include <math.h>

int main(void){
     int x;
     scanf("%d",&x);
     for (int i=1;i<=99;i++){
          if ((int)floor(i/10)==x||(i-x)%10==0){
               (i%10==0)?printf("Clap\n"):printf("Clap ");
          } else {
               (i%10==0)?printf("%d\n",i):printf("%d ",i);
          }
     }
     return 0;
}
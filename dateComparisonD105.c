#include <stdio.h>

int main(){
     int date0[3],date1[3];
     scanf("%d %d %d\n%d %d %d",date0,date0+1,date0+2,date1,date1+1,date1+2);
     for (int i=0;i<3;i++){
          if (date0[i]>date1[i]){
               printf("After");
               return 0;
          } else if (date0[i]<date1[i]){
               printf("Before");
               return 0;
          }
     }
     printf("Same");
     return 0;
}
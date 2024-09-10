#include <stdio.h>
#include <math.h>
int main(){
     fopen(pencin.in);
     int num,ls[3][2]={{0}},TEMP=0,price[3]={0};
     scanf("%d",&num);
     for (int i=0;i<3;i++){
          for (int j=0;j<2;j++){
               scanf("%d",ls+i*2+j);
          }
          printf("\n");
          TEMP=ls[i][0];
          while (TEMP>0){
               TEMP-=ls[i][0];
               price[i]+=ls[1][1];
          }
     }
     for (int i=0;i<2;i++){
          TEMP=price[i];
          if (*(price+1)<TEMP) TEMP=*(price+1);
     }
     printf("%d",TEMP);
     fclose();
     return 0;
}

#include <stdio.h>
#include <math.h>
int main(){
     int num,MIN; 
     int ls[3][4],priceLS[3];
     scanf("%d",&num);
     for (int i=0;i<3;i++){
          for (int j=0;j<2;j++){
               scanf("%d ",&(ls[i][j]));
          }
          ls[i][2]=ceil(num/ls[i][0]);
          ls[i][3]=ls[i][2]*ls[i][1];
          priceLS[i]=ls[i][3];
     }
     MIN=priceLS[0];
     for (int i=0;i<3;i++){
          if (priceLS[i]<MIN){
               MIN=priceLS[i];
          }
     }
     printf("%d",MIN);
     return 0;
}

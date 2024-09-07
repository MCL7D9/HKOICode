#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
     int x=0,y=0,z=10,a=0,ans=0;
     scanf("%d %d",&x,&y);

     for (int i=0;i<x;i++){
          char charLS[8],num="0";
          intToChar(y,num,5);
          sprintf(charLS,"%d",x);
          for (int j=0;j<8;j++){
               if (charLS[j]==y){
                    ans++;
               }
          }
     }
     printf("%d",ans);
     return 0;

}
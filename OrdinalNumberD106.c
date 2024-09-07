#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
     int num,x;
     scanf("%d",&num);
     x=floor(num/100)*100;
     if ((num-x)>=11&&(num-x)<=13){
          printf("%dth",num);
          return 0;
     }
     x=num-(floor(num/10)*10);
     switch(x){
          case 1:
               printf("%dst",num);
               break;
          case 2:
               printf("%dnd",num);
               break;
          case 3:
               printf("%drd",num);
               break;
          default:
               printf("%dth",num);
     }
     return 0;
}
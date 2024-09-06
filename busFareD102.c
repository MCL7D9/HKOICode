#include <stdio.h>
int main(){
     float num=0;
     scanf("%f",&num);
     num*=10;
     num=ceil(num);
     num/=10;
     printf("%.1f",num);
     return 0;
}
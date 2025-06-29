#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
int main(){
     double num=0;
     char str[5];
     scanf("%5s",str);
     num=atof(str+1);
     num=((int)(num/2*10)/10);
     printf("$%.1f",num);
     return 0;
}
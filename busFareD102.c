#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
int main(){
     double num=0;
     char *str;
     scanf("%s",str);
     *str="0";
     num=atof(str);
     num=(ceil(num/2*10)/10);
     printf("$%.1f",num);
     return 0;
}
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
double toFloat(char *str){
     *(str)='0';
     return atof(str);
}
int main(){
     double num=0;
     char *str;
     scanf("%s",str);
     num=toFloat(str);
     printf("%.2f",num);
     return 0;
}
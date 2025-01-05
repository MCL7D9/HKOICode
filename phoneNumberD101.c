#include <stdio.h>
#include <stdlib.h>
int main(){
     char num[8]={'0'};
     scanf("%s",&num);
     if (num[0]=='2'||num[0]=='3'){
          printf("%s","Fixed");
     } else {
          printf("%s","Mobile");
     }
     return 0;
}
#include <stdio.h>

void calc(long int *num){
     for (long int i=1;i<=*num;i++){
          if ((*num%i)==0){
               printf("%li\n",i);
          }
     }
}

int main(void){
     long int x;
     scanf("%li",&x);
     calc(&x);
     return 0;
}
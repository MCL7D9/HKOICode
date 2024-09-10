#include <stdio.h>

void calc(long int *num){
     long int ls[*num];
     for (long int i=0;i<*num/2;i++){
          *(ls+i)=0;
     }
     printf("%d\n",1);
     for (long int i=2;i<=*num;i++){
          if ((*num%i)==0){
               *((ls+i)/2)=i;
               *((ls+(*num/i))/2)=*num/i;
          }
          if (*(ls+i)!=0){
               printf("%ld\n",*(ls+i));
          }
     }
}

int main(void){
     long int x;
     scanf("%li",&x);
     calc(&x);
     return 0;
}
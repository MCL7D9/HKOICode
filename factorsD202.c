#include <stdio.h>
#include <math.h>

void calc(long int *num){
     long int ls[ceil(*num/4)],;
     printf("1\n");top=0
     for (long int i=2;i<(*num/2),i++){
          if (*num%i==0){
               ls[top]=i;
               top++;
               ls[top]=*num/i;
               top++;
          }
     }
     
     printf("%ld",*num);
}

int main(void){
     long int x;
     scanf("%li",&x);
     calc(&x);
     return 0;
}
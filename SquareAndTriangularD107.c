#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int judgeTri(long long num){
     long long modNum=8*num+1;
     long long sqrtNum=(long long)(sqrt(modNum));
     return ((sqrtNum*sqrtNum)==modNum);
}
int judgeSqu(long long num){
     long long sqrtNum=(long long)(sqrt(num));
     return ((sqrtNum*sqrtNum)==num);
}
int main(){
     long long inp=0;
     scanf("%lld",&inp);
     int isTri=0,isSqu=0;
     isTri=judgeTri(inp);
     isSqu=judgeSqu(inp);
     if (isTri && isSqu){
          printf("Both\n");
     } else if (isSqu) {
          printf("Square\n");
     } else if (isTri) {
          printf("Triangular\n");
     } else {
          printf("Neither\n");
     }
     return 0;
}
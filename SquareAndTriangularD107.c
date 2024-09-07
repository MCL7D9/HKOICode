#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(){
     long long int inp=0;
     scanf("%lld",&inp);
     bool isTri=0,isSqu=0;
     if (pow((long long int)(sqrt(8*inp+1)),2)==(8*inp+1)){
          isTri=1;
     }
     if (sqrt(inp)==(long long int)(sqrt(inp))){
          isSqu=1;
     }
     if (isTri && isSqu){
          printf("Both");
     } else if (isSqu) {
          printf("Square");
     } else if (isTri) {
          printf("Triangular");
     } else {
          printf("Neither");
     }
     return 0;
}
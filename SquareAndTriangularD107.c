#include <stdio.h>
#include <math.h>
typedef long long int lli
lli add(lli num){
     if (num==1){
          return 1;
     } else {
          return (num+add(num-1));
     }
}

int main(){
     lli inp=0;
     scanf("%Lf",&x);
     for (lli i=0;i<inp;i++){
          if (add(i)==inp){
               
          }
     }
     return 0;
}
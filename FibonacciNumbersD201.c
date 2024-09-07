#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
int num(int num){
     int x=0,y=1,z=0,TEMP;
     while (num--){
          z=x+y;
          x=y;
          y=z;
     }
     return z;

}
int main(){
     int f;
     scanf("%d",&f);
     printf("%d",num(f));
     return 0;
}
#include <stdio.h>

int main(){
     int x,y;
     scanf("%d %d",&x,&y);
     printf("%d\n%d\n%d\n%d",(x|y),(x&y),(x^y),(~x));
     return 0;
}
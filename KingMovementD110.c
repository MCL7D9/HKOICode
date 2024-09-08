#include <stdio.h>
#include <stdlib.h>
int main(){
     int xStart=0,yStart=0,xDist=0,yDist=0,xLen=0,yLen=0,count=0,diags=0;
     char inp0[3],inp1[3];
     scanf("%2s\n%2s",inp0,inp1);
     xStart=inp0[0]-96;
     xDist=inp1[0]-96;
     yStart=inp0[1]-48;
     yDist=inp1[1]-48;
     //printf("[%d%d%d%d]",xStart,yStart,xDist,yDist);
     xLen=(int)abs(xStart-xDist);
     yLen=(int)abs(yStart-yDist);
     diags=(int)abs(xLen-yLen);
     count+=diags;
     count+=(xLen>yLen)?(xLen-diags):(yLen-diags);
     printf("%d",count);
     return 0;
}
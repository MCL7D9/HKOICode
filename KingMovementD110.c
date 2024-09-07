#include <stdio.h>

int main(){
     char pos[2],des[2],board[8]={'a','b','c','d','e','f','g','h'};
     int ls[2][2]={{0}},count=0,xPos=0,yPos=0,xTrue,yTrue;
     scanf("%2s\n%2s",pos,des);
     while (board[ls[0][0]-1]!=pos[0]){
          ls[0][0]=ls[0][0]++;
     }
     while (board[ls[1][0]-1]!=pos[0]){
          ls[1][0]=ls[1][0]++;
     }
     ls[0][1]=pos[1];
     ls[1][1]=des[1];
     while (ls[0][0]!=ls[1][0]||ls[0][1]!=ls[1][1]){
          if (ls[0][0]!=ls[0][1]){
               
          }
     }
     printf("%d",count);
}
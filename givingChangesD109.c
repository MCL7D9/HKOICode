#include <stdio.h>

int main(){
     int num=0,notes[6]={1000,500,100,50,20,10},sum=0,list[100]={},top=0;
     scanf("%d",&num);
     for (int i=0;sum<num;){
          if ((notes[i]+sum)<=num){
               sum=sum+notes[i];
               list[top]=notes[i];
               top++;
          } else {
               i++;
          }
     }
     for (int i=0;i<top;i++){
          printf("%d\n",list[i]);
     }
     return 0;
}
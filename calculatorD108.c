#include <stdio.h>

int calc(int num0, int num1, char sym){
     switch (sym){
          case '+':
               return num0+num1;
          case '-':
               return num0-num1;
          case '*':
               return num0*num1;
     }
     return 0;
}
int main(){
     int x,y,z,res0,res1;
     char a,b;
     scanf("%d %c %d %c %d",&x,&a,&y,&b,&z);
     if ((a!='*')&&(b=='*')){
          res0=calc(y,z,b);
          res1=calc(x,res0,a);
     } else {
          res0=calc(x,y,a);
          res1=calc(res0,z,b);
     }
     printf("%d\n",res1);
     return 0;
}
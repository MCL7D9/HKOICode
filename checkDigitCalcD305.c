#include <stdio.h>

int main(){
    char num[9],cd;
    int sum=0, i=1;
    scanf("%s",num);
    if (!(num[1]>39)){
        sum+=9*36+num[0]-55;
    } else {
        sum+=9*(num[0]-55)+8*(num[1]-55);
        i=2;
    }

    for (int j=7;num[i]!='\0';i++,j--){
        sum+=(num[i]-48)*j;
    }
    cd=11-(sum%11);
    cd=(cd==10)?'A':cd+48;
    printf("%s",num);
    printf("(%c)",cd);
    return 0;
}

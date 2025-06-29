#include <stdio.h>

int binaryToGray(int num){
    return (num>>1)^num;
}
int grayToBinary(int num){
    int mask=num;
    while (mask){
        mask>>=1;
        num^=mask;
    }
    return num;
}
int printCode(int num, int digits){
    while ((--digits)+1){
        printf("%d",(((num>>digits)&1)?1:0));
    }
    printf("\n");
    return 0;
}

int main(){
    int digits, start, temp;
    scanf("%d",&digits);
    scanf("%d",&start);
    start=grayToBinary(start);
    const int times=1<<digits;
    for (int i=0;i<times;i++){
        temp=(start+i)%times;
        printCode(binaryToGray(temp),digits);
    }
    return 0;
    
}

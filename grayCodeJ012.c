#include <stdio.h>
#include <stdlib.h>

long long binaryToGray(long long num){
    return (num>>1)^num;
}
long long grayToBinary(long long num){
    long long mask=num;
    while (mask>>=1){
        num^=mask;
    }
    return num;
}
long long printCode(long long num, long long digits){
    while ((--digits)+1){
        printf("%d",(((num>>digits)&1)?1:0));
    }
    printf("\n");
    return 0;
}

int main(){
    long long digits, start, temp=0;
    char binary_char[64]={"0"};
    scanf("%lld",&digits);
    scanf("%s",start);
    start=strtol(binary_char,NULL,2);
    start=grayToBinary(temp);
    const long long times=1<<digits;
    for (long long i=0;i<times;i++){
        temp=(start+i)%times;
        printCode(binaryToGray(temp),digits);
    }
    return 0;
    
}

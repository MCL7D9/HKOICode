#include <stdio.h>

int main(){
    long long num,max0=-2147483646,max1=-2147483647,temp=0;
    scanf("%lld",&num);
    for (long long i=0;i<num;i++){
        scanf("%lld",&temp);
        if (temp>max1){
            if (temp>max0){
                max1=max0;
                max0=temp;
            } else {
                max1=temp;
            }
        }
    }
    printf("%lld\n%lld",max0,max1);
    return 0;
}

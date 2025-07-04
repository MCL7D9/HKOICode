#include <stdio.h>

int main(){
    long long num,cur=-1,next=-1;
    scanf("%lld",&num);
    for (long long i=0;i<num;i++){
        cur=next;
        scanf("%lld",&next);
        if (next<=100||next>=50000||next<=cur){
            printf("Invalid");
            return 0;
        }
    }
    printf("Valid");
    return 0;
}

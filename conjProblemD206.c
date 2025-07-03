#include <stdio.h>

int solve(int x){
    printf("%d\n",x);
    if (x==1){return 0;}
    if (x%2){
        return solve((3*x)+1);
    } else {
        return solve(x/2);
    }
}

int main(){
    int num;
    scanf("%d",&num);
    solve(num);
    return 0;
}


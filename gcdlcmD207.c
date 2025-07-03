#include <stdio.h>

int hcf(int a,int b){
    if (!(a%b)){
        return b;
    }
    return hcf(b,a%b);
}
int lcm(int a,int b,int x){
    if (!(x%b)){
        return x;
    }
    return lcm(a,b,x+a);
}

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d\n%d",hcf(a,b),lcm(a,b,a));
    return 0;
}

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

struct coords{
    short x;
    short y;
};

int main(){
    short num;
    double sum=0;
    scanf("%hd",&num);
    struct coords *polygon=(struct coords*)(malloc(sizeof(struct coords)*num));
    for (int i=0;i<num;i++){
        scanf("%hd%hd",&((polygon+i)->x),&((polygon+i)->y));
    }
    for (int i=0;i<num;i++){
        sum+=((polygon+i)->x)*((polygon+(i+1)%(num))->y);
        sum-=((polygon+(i+1)%(num))->x)*((polygon+i)->y);
    }
    sum=fabs(sum);
    sum/=2;
    printf("%.1f",sum);
    return 0;
}


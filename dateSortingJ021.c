#include <stdio.h>
#include <stdlib.h>

int main(){
    uint num=0,*ls;
    char months[12][10]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    scanf("%d",&num);
    ls=malloc(sizeof(char)*20*num);
    for (int i=0;i<num;i++){
        scanf("%u",ls+(20*i));
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct date{
    short int day;
    short int month;
    short int year;
};

int main(){
    char buffer[10]={0},temp=0;
    short int num=0,ind=0,find=-1;
    struct date *data;
    char months[12][10]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    scanf("%hd",&num);
    data = malloc(num * sizeof(struct date));
    for (short int i=0;i<num;i++){
        find=-1;
        ind=0;
        temp=getchar();
        while (temp!=' '){
            buffer[ind]=temp;
            ++ind;
            temp=getchar();
        }
        buffer[ind]='\0';
        ind=0;
        (data+i)->day=atoi(buffer);
        temp=getchar();
        while (temp!=' '){
            buffer[ind]=temp;
            ++ind;
            temp=getchar();
        }
        buffer[ind]='\0';
        ind=0;
        short int j=0;
        while (find==-1){
            if ((strcmp(months+j,buffer))==0)find=j;
            ++j;
        }
        (data+i)->month=find;
        temp=getchar();
        ind=0;
        while ('\n' != temp) {
          buffer[ind++] = temp;
        }
        (data+i)->year=atoi(buffer);
    }
    return 0;
}

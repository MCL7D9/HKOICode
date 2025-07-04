#include <stdio.h>

int main(){
    int buffer=0,words=0,len=0;//do not use unsigned char cause boundary case is 255 chars plus one \n
    do {
        buffer=getchar();
        ++len;
        if (buffer==' '){
            ++words;
        }
    } while(buffer!='\n');
    printf("%d\n%d",len-1,words+1);
    return 0;
}

#include <stdio.h>

int main(){
    char *word;
    size_t len=0;
    getline(&word,&len,stdin);
    printf("%zu",len);
    return 0;
}

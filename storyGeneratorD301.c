#include <stdio.h>

int main(){
    char *words[5]={0};
    size_t len=0;
    for (int i=0;i<5;i++){
        getline((words+i),&len,stdin);
    }
    printf("I am gay and I love black men like %s.\n He works in my family cotton farm with his black friend %s.\n Apart from watermelon, his favourite food are fried chicken and %s.\n After we beat them, they ride %s to casinos.\n The casino is in %s and there are a lot of sexy women.",words[0],words[1],words[2],words[3],words[4]);
    return 0;
}

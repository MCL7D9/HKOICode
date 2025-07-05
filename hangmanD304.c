#include <stdio.h>

int main(){
    char word[20]={'\0'},compelete=1,ans='\0',mask[20];
    for (int i=0;i<20;i++)mask[i]='_';
    scanf("%s",word);
    getchar();
    while (compelete){
        compelete=0;
        ans=getchar();
        getchar();
        for (int i=0;word[i]!='\0';i++){
            if (word[i]==ans){
                mask[i]=ans;
            }
            if (mask[i]=='_')compelete=1;
            printf("%c",mask[i]);
        } 
        printf("\n");
    }
    return 0;
}




























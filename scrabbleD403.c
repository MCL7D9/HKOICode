#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX_LEN 10
bool find(char *c, char *w)
{
        char tmplist[26] = {0};
        for (char i = 0; i < 26; i++)
                tmplist[i] = w[i];
        for (char i = 0; c[i] != '\0'; i++) {
                if (tmplist[c[i] - 65] <= 0)
                        return false;
                --tmplist[c[i] - 65];
        }
        return true;

}

int main()
{
        char word[MAX_LEN + 1] = {'\0'}, num = 0, chara[26] = {0}, tmp[MAX_LEN + 1] = {'\0'};
        bool *ava;
        fgets(word, sizeof(word), stdin);
        for (int i = 0; word[i] != '\0'; i++) {
                chara[word[i] - 'A']++;
        }
        scanf("%d", &num);
        ava = malloc(sizeof(*ava) * num);
        if (ava == NULL)
                goto MALLOCFAILURE;
        for (char i = 0; i < num; i++) {
                scanf("%s", tmp);
                ava[i] = find(tmp, chara);
        }
        for (char i = 0; i < num; i++)
                printf("%s\n", (ava[i] == true) ? "Yes" : "No");
        return 0;
        MALLOCFAILURE:
        printf("FAILED TO MALLOC AN ARRAY\n");
        return 0;
}

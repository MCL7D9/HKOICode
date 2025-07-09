#include <stdio.h>

bool find(char *c, char *w)
{
        char tmplist[26] = {0};
        for (char i = 0; i < 26; i++)
                tmplist[i] = w[i];
        for (char i = 0; c[i] != '\0'; i++) {
                if (tmplist[c[i]-65] <= 0)
                        return false;
                --tmplist[c[i]-65];
        }
        return true;

}

int main()
{
        char word[10] = {'\0'}, num = 0, chara[26] = {0}, tmp[10] = {'\0'};
        bool ava;
        scanf("%s", word);
        scanf("%hd", num);
        for (char i = 0; word[i] != '\0'; i++) {
                ++chara[word[i-1] - 65];
                printf("SUCCESS SETTING %c\n", word[i-1]);
        }
        printf("SUCCESS SETTING CHARACTER LIST\n");
        for (char i = 0; i < num; i++) {
                scanf("%s", tmp);
                ava = find(tmp, chara);
                (ava) ? printf("Yes\n") : printf("No\n");
        }
        return 0;
}

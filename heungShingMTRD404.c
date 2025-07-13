#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct query {
        unsigned char from;
        unsigned char to;
        bool type;
};

float cal_fare(float *t, struct query q, unsigned char z)
{
       unsigned char tmp = 0;
       --q.from;
       --q.to;
       if ((q.type && q.from > q.to) || (!q.type && q.from < q.to)) {
                tmp = q.from;
                q.from = q.to;
                q.to = tmp;

       }
       return *(t + (q.from * z) + q.to);
}

int main()
{
        unsigned char num = 0;
        scanf("%hhu", &num);
        float *grid = NULL;
        grid = malloc(sizeof(*grid) * num * num);
        if (grid == NULL)
                goto MALLOCFAILURE;
        for (unsigned char i = 0; i < num; i++) {
                for (char j = 0 ;j < num; j++) {
                        scanf("%f", (grid + (num * i) + j));
                }
        }
        struct query *ls;
        unsigned char qnum;
        unsigned char tmp;
        scanf("%hhu", &qnum);
        ls = malloc(sizeof(*ls) * qnum);
        if (ls == NULL)
                goto MALLOCFAILURE;
        for (unsigned char i = 0; i < qnum; i++){
                scanf("%hhu", &ls[i].from);
                scanf("%hhu", &ls[i].to);
                getchar();
                scanf("%c", &tmp);
                ls[i].type = (tmp == 'A') ? true : false;
        }
        for (char i = 0; i < qnum; i++)
                printf("%.1f\n", cal_fare(grid, ls[i],num));
        free(ls);
        free(grid);
        return 0;
MALLOCFAILURE:
        printf("FAILED TO MALLOC ARRAY\n");
        return 0;
}

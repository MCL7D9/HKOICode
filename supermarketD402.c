#include <stdio.h>
#include <stdlib.h>

short find_price(long *ls, short n, long q)
{
	while ((--n + 1)){
		if (*(ls + n) == q)
			return n;
	}

}
int main()
{
	long *items, tmp=0;
	float *prices, sum=0;
	unsigned short num, qnum;
	scanf("%hd",&num);
	items = malloc(sizeof(*items) * num);
        if (items == NULL)
                goto MEMORYFAILURE;
	prices = malloc(sizeof(*prices) * num);
        if (prices == NULL)
                goto MEMORYFAILURE;
	for (short i = 0; i < num; i++) {/*orignally i wrote scanf("%ld", *(items + i)); -- i should pass the pointer instead of value*/
		scanf("%ld", items + i);
		scanf("%f", prices + i);
	}
	scanf("%hd", &qnum);
	for (short i = 0; i < qnum; i++) {
		scanf("%ld", &tmp);
		sum += *(prices + (find_price(items, num, tmp)));
	}
	printf("%.1f", sum);
        free(items);
	free(prices);
	return 0;
MEMORYFAILURE:
        printf("MALLOC FAILED\n");
        return 0; 
}

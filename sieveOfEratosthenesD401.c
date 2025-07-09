#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool *NUMLIST;

int find_prime_numbers(bool *list, long num)
{
	for (int i = 2; i < (num + 1); i++){
		if (list[i]==false)
			continue;
		printf("%ld\n", i);
		for (int j = i; j <= num; j += i){
			list[j] = false;
		}
	}
	return 0;
}
int main()
{
	long num;
	scanf("%ld", &num);
	NUMLIST = malloc(sizeof(*NUMLIST) * (num + 1));
	for (int i = 0; i < (num + 1); i++){
		NUMLIST[i] = true;
	}
	find_prime_numbers(NUMLIST, num);
	free(NUMLIST);
	return 0;
}

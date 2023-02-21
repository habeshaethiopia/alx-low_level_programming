#include "main.h"
#include<stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long int j, k, next, sum;

	j = 1;
	k = 2;
	sum = 0;

	for (i = 1; i <= 50; ++i)
	{
		sum = k + j;
		printf("%lu", sum);
		j = k;
		k = sum;
		if (i == 50)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}

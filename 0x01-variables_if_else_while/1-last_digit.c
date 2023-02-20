#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	printf("Last digit of %d is %d and is ", n, l);
	if (l > 5)
		printf("greater than 5\n");
	else if (l == 0)
		printf("0\n");
	else if (l < 6 && l != 0)
		printf("less than 6 and not 0\n");
	return (0);
}

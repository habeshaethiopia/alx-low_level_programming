#include <stdio.h>
/*
 * main - fizz_buzz
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 99; i++)
	{
		if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 15 == 0)
			printf("FizzBuzz");
		else
			printf("%d", i);
		if (i != 99)
		printf(" ");
	}
	printf("\n");
	return (0);
}

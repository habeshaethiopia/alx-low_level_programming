#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0
 */

int main(void)
{
	int x;
	long int i = 612852475143;

	while (i != 1)
	{
		for (x = 2; x <= i;)
		{
			if (i % x == 0)
			{
				printf("%d, ", x);
				i = i / x;
			}
			else
				x++;
		}
	}
	printf("\n");
	return (0);
}

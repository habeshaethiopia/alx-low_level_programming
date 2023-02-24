#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0
 */

int main(void)
{
	long x, y;
	long i = 612852475143;

	while (i != 1)
	{
		for (x = 2; x <= i;)
		{
			if (i % x == 0)
			{
				y = x;
				i = i / x;
			}
			else
				x++;
		}
	}
	printf("%ld\n", y);
	return (0);
}

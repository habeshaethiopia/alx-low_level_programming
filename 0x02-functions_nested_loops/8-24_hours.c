#include "main.h"

/**
 * jack_bauer - Is afunction that prints every miniuts of a day
 *
 * Return: void nothing it returns
 */
void jack_bauer(void)
{
	int w = 0, x = 0, y = 0, z = 0;
	int m = 10;

	for (w = 0; w < 3; w++)
	{
		if (w == 2)
			m = 4;
		for (x = 0; x < m; x++)
		{
			for (y = 0; y < 6; y++)
			{
				for (z = 0; z < 10; z++)
				{
					_putchar(w + '0');
					_putchar(x + '0');
					_putchar(':');
					_putchar(y + '0');
					_putchar(z + '0');
					_putchar('\n');
				}
			}
		}
	}
}

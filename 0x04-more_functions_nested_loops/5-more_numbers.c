#include "main.h"
/**
 * more_numbers - afunction
 */
void more_numbers(void)
{
	int x, y;
	int i = '0', j = '0';

	for (x = 0; x <= 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			i = '0';
			j = '0';

			if (i > '9')
				i = 1;
			_putchar(i);
			i++;
			if (y > 9)
			{
				_putchar(j);
				j++;
			}
		}
		_putchar('\n');
	}
}


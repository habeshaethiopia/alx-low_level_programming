#include "main.h"
/**
 * print_number - the function
 * @n: the variable
 *
 */
void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		x = -n;
		_putchar('-');
	} else
	{
		x = n;
	}

	if (x / 10)
	{
		print_number(n1 / 10);
	}

	_putchar((x % 10) + '0');
}
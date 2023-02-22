#include "main.h"

/**
 * print_sign - prints - if negative 0 if zero and + if positive
 * @n: Is int type which is passed to the print_sign function
 * print_sign -''
 * Return:  - 1 if +ve
 * Returns 0 if zero and
 * Returns -1 if -ve
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

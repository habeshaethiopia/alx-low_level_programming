#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number
 *
 */
void print_binary(unsigned long int n)
{
	unsigned long int val = 1;
	int flag = 0;

	val <<= 63;
	if (n == 0)
		_putchar('0');
	while (val > 0)
	{
		if ((n & val) == 0 && flag == 1)
			_putchar('0');
		if ((n & val) != 0)
		{
			_putchar('1');
			flag = 1;
		}
		val >>= 1;
	}
}

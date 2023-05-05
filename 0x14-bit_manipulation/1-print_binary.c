#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number
 * @n: the number
 * Return: binary nums
 *
 */
void print_binary(unsigned long int n)
{
	unsigned long int num = 1;
	int flag = 0;

	if (n == 0)
		_putchar('0');
	num <<= 63;
	while (num > 0)
	{
		if ((n & num) == 0 && flag == 1)
			_putchar('0');
		if ((n & num) != 0)
		{
			_putchar('1');
			flag = 1;
		}
		num >>= 1;
	}
}

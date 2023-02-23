#include "main.h"

/**
 * print_last_digit - A function that prints and returns the last digit
 * @num: Int variable
 * Return: the last digit of num
 */
int print_last_digit(int num)
{
	long int last;

	if (num < 0)
		num = -1 * num;
	last = num % 10;
	if (last < 0)
		last = -1 * last;
	_putchar(last + '0');
	return (last);
}

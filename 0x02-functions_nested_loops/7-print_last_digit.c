#include "main.h"

/**
 * print_last_digit - A function that prints and returns the last digit
 * @num: Int variable
 * Return: the last digit of num
 */
int print_last_digit(int num)
{
	num = _abs(num);
	int last = num % 10;

	_putchar(last + '0');
	return (last);
}

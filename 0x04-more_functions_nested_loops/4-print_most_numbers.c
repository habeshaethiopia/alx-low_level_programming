#include "main.h"
/**
 * print_numbers - The function
 *
 * Return: nothing
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 || i != 4)
		_putchar(i + '0');
	}
	_putchar('\n');
}

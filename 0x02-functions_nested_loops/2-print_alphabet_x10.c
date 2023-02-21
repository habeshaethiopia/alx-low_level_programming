#include "main.h"

/**
 * print_alphabet -  prints the alphabet, in lowercase, followed by a new line
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_alphabet(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	for (i = 97; i <= 122; i++)
		_putchar(i);
	_putchar('\n');
}

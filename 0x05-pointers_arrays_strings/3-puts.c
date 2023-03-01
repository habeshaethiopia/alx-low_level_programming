#include "main.h"

/**
 * _puts - fuction
 * @str: char pointer
 *
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

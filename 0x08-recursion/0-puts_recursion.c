#include "main.h"
/**
 * _puts_recursion - afunctioln to print a string using _putchar
 * @s: the string
 *
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');

}

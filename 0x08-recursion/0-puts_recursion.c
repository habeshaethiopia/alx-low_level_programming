#include "main.h"
/**
 * _puts_recursion - afunctioln to print a string using _putchar
 * @s: the string
 *
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s != '\0')
		_puts_recursion(s + 1);
	if (*s == '\0')
		_putchar('\n');
}

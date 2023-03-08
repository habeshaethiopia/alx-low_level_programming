#include "main.h"
/**
 * _print_rev_recursion - functioln to print astring in reverse
 * @s: char pointer
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
		_putchar(*(s - 1));
	}
}

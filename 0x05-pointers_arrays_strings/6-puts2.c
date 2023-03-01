#include "main.h"
/**
 * puts2 - function
 * @s: string
 *
 */
void puts2(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
		_putchar('\n');
	}
}

#include "main.h"
/**
 * puts2 - function
 * @s: string
 *
 */
void puts2(char *s)
{
	int i;

	while (i = 0; s[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(s[i]);
		}
	}
	_putchar('\n');
}

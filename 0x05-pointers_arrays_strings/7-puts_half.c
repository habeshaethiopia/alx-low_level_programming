#include "main.h"
/**
 * puts_half - afunction to print half string
 * @str: the string(char pointer)
 *
 */
void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	if (i % 2 == 1)
		j = i - ((i - 1) / 2);
	else
		j =i - i / 2;
	while (j < i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}

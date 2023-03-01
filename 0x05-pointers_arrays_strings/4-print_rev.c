#include "main.h"
/**
 * print_rev - fuction
 * @str: astring (char pointer)
 *
 */
void print_rev(char *str)
{
	char a;

	a = *str;
	while (*str != '\0')
		str++;
	do {
		if (*str != '\0')
			str--;
		_putchar(*str);
	} while (*str != a);
	_putchar('\n');
}

#includ "main.h"
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
		_putchar('\n');
	}
}

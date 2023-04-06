#include "main.h"
#include <unistd.h>
/**
 * _putchar - print char
 * @s: char
 * Return: integer
 *
 */
int _putchar(char s)
{
	return (write(1, &s, 1));
}

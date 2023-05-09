#include <unistd.h>
/**
 * _putchar - calling write system function
 * @s: char to print
 * Return: num
 *
 */
int _putchar(char s)
{
	return (write(1, &s, 1));
}

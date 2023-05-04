#include "main.h"

/**
 * binary_to_uint -  function that converts a binary number to an unsigned int
 * @b: the string
 * Return: the converted num
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a, c = 0, n = 1, i;

	if (!b)
		return (0);
	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] == '0')
			a = 0;
		else if (b[i] == '1')
			a = '1';
		else
			return (0);
		c += a * n;
		n *= 2;
		i++;
	}
}

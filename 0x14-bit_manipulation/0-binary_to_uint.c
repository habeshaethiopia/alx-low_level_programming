#include "main.h"
/**
 * binary_to_uint - function that convert binary to decimal
 * @b: astring
 * Return: converted num or zero
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val, num = 0, base = 1;
	int i;

	if (!b)
		return (0);
	for (i = strlen(b) - 1; i >= 0; i--)
	{
		if (b[i] == '0')
			val = 0;
		else if (b[i] == '1')
			val = 1;
		else
			return (0);
		num += val * base;
		base *= 2;
	}
	return (num);
}

#include "main.h"
/**
 * flip_bits -  number of flip to get one  number to another
 * @n: num
 * @m: num
 * Return: num of flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x, xor;

	xor = n ^ m;
	x = 0;
	while (xor)
	{
		x += xor & 1;
		xor >>= 1;
	}
	return (x);
}

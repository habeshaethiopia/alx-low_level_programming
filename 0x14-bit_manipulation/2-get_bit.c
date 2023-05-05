#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: the num
 * @index: the index
 * Return: the bit
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int x;

	if (index > 64)
		return (-1);
	x = n >> index;
	return (x & 1);
}

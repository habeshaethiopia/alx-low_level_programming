#include "main.h"
/**
 * get_bit - function that return the value at agiven index
 * @n: the number
 * @index: the index of returned bit
 * Return: the bit at the index or -1
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int s;

	if (index > 64)
		return (-1);
	s = n >> index;
	return (s & 0x1);
}

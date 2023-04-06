#include "main.h"
/**
 * clear_bit - set bit to 0
 * @n: the number
 * @index: the index
 * Return: 1 or -1
 *
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}

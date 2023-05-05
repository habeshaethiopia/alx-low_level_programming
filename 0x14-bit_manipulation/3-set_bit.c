#include "main.h"
/**
 * set_bit - function to set abit to 1
 * @n: the num
 * @index: the index
 * Return: 0 or 1
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n += 1 << index;
	return (1);
}

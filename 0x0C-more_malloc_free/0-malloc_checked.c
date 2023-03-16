#include <stdlib.h>

/**
 * malloc_checked - function to allocate memory using malloc
 * @b: sizeof memory space needed
 * Return: void pointer
 *
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}

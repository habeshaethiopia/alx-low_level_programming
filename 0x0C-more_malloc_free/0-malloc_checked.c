#include <stdlib.h>

/**
 * malloc_checked - function to allocate memory using malloc
 * @b: sizeof memory space needed
 * Return: void pointer
 *
 */
void *malloc_checked(unsigned int b)
{
	if (malloc(b) != NULL)
		return (malloc(b));
	else
		exit(98);
}

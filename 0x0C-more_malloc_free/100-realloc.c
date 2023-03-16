#include <stdlib.h>
/**
 * _realloc - reallocates a memory block
 * @ptr: void pointer
 * @old_size: the allocated space for ptr
 * @new_size: the new size for new memory block
 * Return: void pointer
 *
 */
void *_realloc(void *pt, unsigned int old_size, unsigned int new_size)
{
	char *p, *ptr;
	int min = old_size, i;

	ptr = pt;
	if (new_size ==  0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size < old_size)
		min = new_size;
	for (i = 0; i < min; i++)
		p[i] = ptr[i];
	free(ptr);
	return ((void *) p);
}


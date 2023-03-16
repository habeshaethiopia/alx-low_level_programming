#include <stdlib.h>
/**
 * _calloc - function like calloc
 * @nmemb: no elements
 * @size: biyte of each array element
 * Return: void pointer
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
		return (NULL);
	return (malloc(nmemb * size));
}


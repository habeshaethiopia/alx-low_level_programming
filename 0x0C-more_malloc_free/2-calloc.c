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
	char *p;
	unsigned int i;
	if (nmemb <= 0 || size <= 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0 ; i < size * nmemb; i++)
		p[i] = 0;
 
	return ((void *) p);
}


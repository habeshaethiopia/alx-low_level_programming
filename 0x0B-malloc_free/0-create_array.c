#include <stdlib.h>
#include "main.h"

/**
 * creat_array - function which creat array using malloc
 * &size: the size of the array
 * $c: the intialize value
 * Return: char pointer
 *
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size != 0)
	{
		p = malloc(sizeof(char) * size);
		if (p == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < size; i++)
			p[i] = c;
		p[i] = '\0';
		return (p);
	}
	else
		return NULL;
}

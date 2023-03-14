#include <stdlib.h>

/**
 * _strdup - afunction produce copy of the string
 * @str: the sring
 * Return: pointer to the copy string
 *
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	p = malloc(sizeof(str));
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= sizeof(str); i++)
		p[i] = str[i];
	return (p);
}



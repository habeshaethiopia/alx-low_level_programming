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
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	p = malloc(i + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		p[i] = str[i];
	p[i] = '\0';
	return (p);
}



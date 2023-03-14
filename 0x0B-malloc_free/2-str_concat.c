#include <stdlib.h>
/**
 * str_concat - concatinate two strings
 * @s1: string 1
 * @s2: string 2
 * Return: concatinated string
 *
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i = 0, j = 0;

	s1 == NULL ? s1 = "" : 0;
	s2 == NULL ? s2 = "" : 0;
	for (i = 0; s1[i] != '\0'; i++)
	 {
	 }
	for (j = 0; s2[j] != '\0'; j++)
	 {
	 }
	p = malloc(i + j + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
	{
		if (s1 == NULL)
			i = 0;
		p[i + j] = s2[j];
	}
	p[i + j] = '\0';
	return (p);
}



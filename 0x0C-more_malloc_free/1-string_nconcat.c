#include <stdlib.h>
/**
 * string_nconcat - concatinate two string
 * @s1: string one
 * @s2: string two
 * @n: number of concatinated strings
 * Return: the concatinated string
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int j, i, c = 0;
	char *p;

	if (s1 == NULL)
		return (s2);
	if (s2 == NULL)
		return (s1);
	for (i = 0; s2[i] != '\0'; i++)
		c++;
	if (n <= c)
		c = n;
	for (i = 0; s1[i] != '\0'; i++)
		c++;
	p = malloc(c * sizeof(char) + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];
	for (j = 0; s2[j] != '\0' && j < n; j++)
	{
		p[i] = s2[j];
		i++;
	}
	p[i] = '\0';
	return (p);
}

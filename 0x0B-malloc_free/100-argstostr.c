#include <stdlib.h>
/**
 * argstostr - function to concatenate arguments
 * @ac: the counter
 * @av: the string array
 * Return: char pointer
 *
 */
char *argstostr(int ac, char **av)
{
	char *p;
	int i, j, c = 0, n = 0;

	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}
	c++;

	p = malloc(c * sizeof(char));
	if (ac == 0 || av == NULL || p == NULL)
		return (NULL);
	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			p[n++] = av[i][j];
		p[n++] = '\n';
	}
	p[n++] = '\0';

	
	return (p);
}

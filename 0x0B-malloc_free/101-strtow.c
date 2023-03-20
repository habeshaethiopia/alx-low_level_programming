#include <stdlib.h>
/**
 * strtow - split into words
 * @str: string
 * Return: double pointer
 *
 */
char **strtow(char *str)
{
	char **p;
	int i, wc = 0, cc, n = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' && str[i + 1] != ' ')
			wc++;
	}
	wc++;
	p = malloc(sizeof(char *) *  wc);
	if (p == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
			cc++;
		if (str[i + 1] != ' ')
		
			p[n] = malloc(sizeof(char) * cc + 1);
			n++;
		}
		if (str[i] == ' ')
			cc = 0;
	}
	cc = 0;
	wc = 0;
	p[n] = malloc(sizeof(char) * cc + 1);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
			p[wc][cc++] = str[i];
		else if (str[i + 1] != ' ' && str[i] == ' ')
		{
			p[wc][cc] = '\0';
			wc++;
			cc = 0;
		}
		p[++wc] = NULL;
	}
	return (p);
}

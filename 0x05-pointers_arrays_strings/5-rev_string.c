#include "main.h"

/**
 * rev_string - function
 * @s: the string
 *
 */
void rev_string(char *s)
{
	int i, n;
	char x;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	for (n = 0; n < i; n++)
	{
		i--;
		x = s[n];
		s[n] = s[i];
		s[i] = x;
	}
}

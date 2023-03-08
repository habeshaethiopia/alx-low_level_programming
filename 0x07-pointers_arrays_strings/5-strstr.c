#include <stddef.h>

/**
 * _strstr - function that locates a substring
 * @haystack: the string
 * @needle: substring
 * Return: apointer or NULL
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int i, ch = 0, j;

	for (i = 0; haystack[i] != '\0'; i++)
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
				ch++;
		}
	if (ch == j - 1)
		return (needle);
	else
		return (NULL);
}

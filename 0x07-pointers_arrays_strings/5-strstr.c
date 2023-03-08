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
	for (; *haystack != '\0';)
	{
		char *sub = needle;
		char *base = haystack;

		while (*haystack != '\0' && *sub != '\0' && *sub == *haystack)
		{
			sub++;
			haystack++;
		}
		if (*sub == '\0')
			return (base);
		haystack = base + 1;
	}
	return (0);
}

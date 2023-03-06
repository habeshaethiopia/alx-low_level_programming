/**
 * _strchr - function to locate a string
 * @s: pointer
 * @c: char
 * Return: char
 *
 */
char *_strchr(char *s, char c)
{
	while (s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if(!c)
		return (s);
	return (NULL);
}


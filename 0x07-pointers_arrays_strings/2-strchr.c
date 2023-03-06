/**
 * _strchr - function to locate a string
 * @s: pointer
 * @c: char
 * Return: char
 *
 */
char *_strchr(char *s, char c)
{
	int i, j = 0;
	char *x = "";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			break;
	}
	while (s[i] != '\0')
	{
		x[j] = s[i];
		i++;
		j++;
	}
}


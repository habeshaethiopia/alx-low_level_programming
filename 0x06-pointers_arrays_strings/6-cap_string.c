/**
 * cap_string - afunction to capitalize aword
 * @s: astring made of words
 * Return: a char pointer
 *
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == ' ')
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] = s[i + 1] - 32;
	}
	return (s);
}

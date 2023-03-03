/**
 * cap_string - afunction to capitalize aword
 * @s: astring made of words
 * Return: a char pointer
 *
 */
char *cap_string(char *s)
{
	int i = 0, x;
	int separator[] = {',', ';', '.', '?', '"', '(', ')',
		'{', '}', ' ', '\n', '\t'};

	while (s[i] != '\0')
	{
		for (x = 0; x < 12; x++)
			if (s[i] == separator[x])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] = s[i + 1] - 32;
				if (s[i] == '\t')
					s[i] = ' ';
			}
		i++;
	}
	return (s);
}

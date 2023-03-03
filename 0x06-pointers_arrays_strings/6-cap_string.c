/**
 * is_spa - function to determine if the char is separator or not
 * @x: acharacter
 * Return: integer 0 or 1
 *
 */
int is_spa(char x)
{
	int separator[] = {',', ';', '.', '?', '"', '(', ')',
		'{', '}', ' ', '\n', '\t'};
	int i;

	for (i = 0; i < 12; i++)
		if (x == separator[i])
			return (1);
	return (0);
}
/**
 * cap_string - afunction to capitalize aword
 * @s: astring made of words
 * Return: a char pointer
 *
 */
char *cap_string(char *s)
{
	int i = 0, x = 1;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z' && x == 1)
		{
			s[i] = s[i] - 32;
			x = 0;
		}
		x = is_spa(s[i]);
		i++;
	}
	return (s);
}

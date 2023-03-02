/**
 * string_toupper - afunction chang astring to upper case
 * @x: astring
 * Return: changed astring to upper case
 *
 */
char *string_toupper(char *x)
{
	int i = 0;

	while (x[i] != '\0')
	{
		if (x[i] >= 'a' && x[i] <= 'z')
			x[i] = x[i] - 32;
		i++;
	}
	return (x);
}

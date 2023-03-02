/**
 * string_toupper - afunction chang astring to upper case
 * @x: astring
 * Return: changed astring to upper case
 *
 */
char *string_toupper(char *x)
{
	while (*x != '\0')
	{
		if (*x >= 'a' && *x <= 'z')
			*x = *x - 'A' - 1;
	}
	return (x);
}

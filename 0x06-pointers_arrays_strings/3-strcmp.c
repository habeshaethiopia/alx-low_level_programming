/**
 * _strcmp - function that compair two strings
 * @s1: astring
 * @s2: Also astring
 * Return: integer +ve, -ve,or zero
 *
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (i == 0 && (*s1 != '\0' || *s2 != '\0'))
	{
		i = *s1 - *s2;
		if (i == 0)
		{
			s1++;
			s2++;
		}
	}
	return (i);
}

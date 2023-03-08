/**
 * _strspn - afunction that gets the length of a prifix subtracting
 * @s: pointer
 * @accept: pointer
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n = 0;
	int j;

	for (i = 0; s[i] != '\n'; i++)
	{
		for (j = 0; accept[j] != '\n'; j++)
			if (s[i] != accept[j])
				n++;
		if (i == n)
			break;
	}
	return (i);
}

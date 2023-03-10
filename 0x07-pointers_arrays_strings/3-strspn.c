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

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				n++;
		if (i == n)
			break;
	}
	return (i);
}

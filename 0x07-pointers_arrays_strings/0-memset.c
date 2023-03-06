/**
 * _memset - function fill memory with a constant
 * @s: the array
 * @b: the char  filled to the the array
 * @n: number of byte the array filled
 * Return: the array
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

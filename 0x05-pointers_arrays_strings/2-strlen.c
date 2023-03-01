/**
 * _strlen - function
 * @s: char pointer
 * Return: number of strings
 *
 */
int _strlen(char *s)
{
	int n;

	n = 0;
	while (*s != '\0')
	{
		n++;
		s++;
	}
	return (n);
}

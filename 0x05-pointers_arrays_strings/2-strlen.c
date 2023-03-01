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
	while (s)
	{
		n++;
		s++;
	}
}

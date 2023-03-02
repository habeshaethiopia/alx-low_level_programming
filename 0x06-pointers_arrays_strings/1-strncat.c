/**
 * _strncat - function that do exactly the same as strcat
 * @dest: a string
 * @str: appended string
 * @n: number of char appended to dest from str
 * Return: the concatinated string
 *
 */
char *_strncat(char *dest, char *str, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (str[j] != '\0' && i < n)
	{
		dest[i + j] = str[j];
		j++;
	}
	if (dest[i+j] != '\0')
		dest[i] = '\0';
	return (dest);
}

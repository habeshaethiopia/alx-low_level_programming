/**
 * _strcat - a Function that do the same as strcat
 * @dest: string
 * @src: appended string to dest
 * Return: dest string (char pointer)
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}

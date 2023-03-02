/**
 * _strncpy - function to copy astring
 * @dest: string that will be copied
 * @src: A string acopy of dest
 * @n: number of bite to copy
 *Return: string pointer src
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (dest[i] != '\0' && i < n)
	{
		src[i] = dest[i];
		i++;
	}
	src[i] = '\0';
	return (src);
}

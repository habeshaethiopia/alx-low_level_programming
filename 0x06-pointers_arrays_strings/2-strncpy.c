/**
 * _strncpy - function to copy astring
 * @src: string that will be copied
 * @dest: A string acopy of dest
 * @n: number of bite to copy
 *Return: string pointer src
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

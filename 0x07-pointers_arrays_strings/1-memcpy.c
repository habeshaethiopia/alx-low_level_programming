/**
 * _memcpy - function to copy memory area
 * @dest: string
 * @src: char pointer
 * @n: number of byte to copy
 * Return: pointer
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		src[i] = dest[i];
	}
	return (dest);
}

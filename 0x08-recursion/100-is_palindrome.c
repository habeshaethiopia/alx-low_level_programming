/**
 * is_palindrome - function to check palindrome
 * @s: string
 * Return: 0 or 1
 *
 */
int is_palindrome(char *s)
{
	int i, j = -1, n = 0, ch = 0;

	while (s[j] != '\0')
		j++;
	for (i = 0; i < j; i++, j--)
	{
		if (s[i] == s[j])
			n++;
	}
	if (i == n)
		ch = 1;
	return (ch);
}

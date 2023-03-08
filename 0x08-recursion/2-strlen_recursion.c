/**
 * _strlen_recursion - functioln return length of the string
 * @s: the string
 * Return: integer size of the string
 *
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i += _strlen_recursion(s + 1);
		i++;
	}
	return (i);
}

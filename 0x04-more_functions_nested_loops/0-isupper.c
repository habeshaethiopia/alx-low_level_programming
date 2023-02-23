/**
 * _isupper - afunction to check if the char is upper
 * @c: achar paremeter of th function
 * Return: 1 for upper case
 * returns - 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

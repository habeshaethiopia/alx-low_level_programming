/**
 *_isalpha - a function that checks for character
 *@c: The charactere
 *
 *Return: On success 1.
 *On error, -1 is returned, and errno is set appropriately.
 * Returns 1 if c is lowercase
 * Returns 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

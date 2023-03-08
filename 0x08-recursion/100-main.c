#include <stdio.h>
char *_rev(char *str)
{
	char *rev = "";

	if (*str != '\0')
		rev = _rev(str++);
	return rev;
}
int cmpwrev(char *Or, char *rev)
{
	int x = 1;

	if (*Or == *rev && *Or != '\0')
		x *= cmpwrev(Or++, rev++);
	else if (*Or != '\0' && *rev != '\0')
		return (0);
	return (x);
}

/**
 * is_palindrome - function to check palindrome
 * @s: string
 * Return: 0 or 1
 *
 */
int is_palindrome(char *s)
{
	char * rev = _rev(s);

	return (cmpwrev(s, rev));
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = is_palindrome("level");
    printf("%d\n", r);
    r = is_palindrome("redder");
    printf("%d\n", r);
    r = is_palindrome("test");
    printf("%d\n", r);
    r = is_palindrome("step on no pets");
    printf("%d\n", r);
    return (0);
}

/**
 * factorial - A functionl that do factorial
 * @n: size
 * Return: the result
 *
 */
int factorial(int n)
{
	int fact = 1;

	if (n > 0)
		fact *= n * factorial(n - 1);
	else if (n == 0)
		return (1);
	else
		return (-1);
	return (fact);
}

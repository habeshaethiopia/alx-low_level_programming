/**
 * prime - function
 * @n1: integer the original number
 * @n2: cheker
 * Return: 0 or 1
 *
 */
int prime(int n1, int n2)
{
	if (n1 <= 1)
		return (0);
	if (n1 == 2 || n2 == 1)
		return (1);
	if (n1 % n2 == 0)
		return (0);
	else
		return (prime(n1, n2 - 1));
}

/**
 * is_prime_number - function to identify the prime number
 * @n: the number
 * Return: 0 or 1
 *
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (prime(n, n - 1));
}


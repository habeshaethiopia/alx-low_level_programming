/**
 * is_prime_number - function to identify the prime number
 * @n: the number
 * Return: 0 or 1
 *
 */
int is_prime_number(int n)
{
	int i = 1;
	if (n > 0)
		i = n % is_prime_number(n - 1);


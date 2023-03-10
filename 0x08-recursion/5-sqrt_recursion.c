/**
 * square - function that do the comparision
 * @n: the original number
 * @sq: the variable
 * Return: the sq if sq^2 == num else return -1
 *
 */
int square(int n, int sq)
{
	if (n == sq * sq)
		return (sq);
	else if (n < sq * sq)
		return (-1);
	else
		return (square(n, sq + 1));
}

/**
 * _sqrt_recursion - a function that returns the squre root of a num
 * @n: number
 * Return: the result
 *
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (square(n, 0));
}

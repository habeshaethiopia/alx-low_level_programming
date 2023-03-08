/**
 * _pow_recursion - function that returns the value of x^y
 * @x: base num
 * @y: exponent
 * Return: x^y
 *
 */
int _pow_recursion(int x, int y)
{
	int r = 1;

	if (y > 0)
		r *= x * _pow_recursion(x, y - 1);
	if (y < 0)
		return (-1);
	return (r);
}

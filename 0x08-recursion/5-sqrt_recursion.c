/**
 * _sqrt_recursion - a function that returns the squre root of a num
 * @n: number
 * Return: the result
 *
 */
int _squrt_recursion(int n)
{
	int i = 1, val = 0;

	 if ( n > val)
		 val = _squrt_recursion(n );
	 if ( n < val)
		 return (-1);
	 return(val);
}

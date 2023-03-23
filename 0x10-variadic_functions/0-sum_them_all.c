#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - afunction that sum all the argiments passed
 * @n: the number of argiments
 * Return: their sum
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list ag;

	va_start(ag, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ag, int);
	}
	va_end(ag);
	return (sum);
}

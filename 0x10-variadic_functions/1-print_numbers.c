#include "variadic_functions.h"
/**
 * print_numbers - afunction that print an argument
 * @separator: the string to be printed between numbers
 * @n: number of integers
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ag;

	va_start(ag, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ag, int));
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(ag);
	printf("\n");
}

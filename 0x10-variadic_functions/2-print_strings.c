#include "variadic_functions.h"
/**
 * print_strings - afunction that prints a sring argus
 * @separator: a separator b/n the strings
 * @n: number of strings
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ag;

	va_start(ag, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(ag, char *));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
		else if (separator == NULL)
			printf("(nil)");
	}
	printf("\n");
}

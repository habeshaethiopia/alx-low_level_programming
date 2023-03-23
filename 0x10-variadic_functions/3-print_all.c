#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_int - function
 * @ag: the argument
 */
void print_int(va_list ag)
{
	printf("%d", va_arg(ag, int));
}
/**
 * print_float - function
 * @ag: the argument
 */
void print_float(va_list ag)
{
	printf("%f", va_arg(ag, double));
}
/**
 * print_char - function
 * @ag: the argument
 */
void print_char(va_list ag)
{
	printf("%c", va_arg(ag, int));
}
/**
 * print_str - function
 * @ag: the argument
 */
void print_str(va_list ag)
{
	char *s;

	s = va_arg(ag, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}

/**
 * print_all - afunction that print all
 * @format: the data type format
(* c: char
 *i: integer
 *f: float
 * s: char )?
 */
void print_all(const char * const format, ...)
{
	va_list ag;
	int i;
	char *separator;
	char x;

	va_start(ag, format);
	i = 0;
	separator = "";
	while (format != NULL && *(format + i) != '\0')
	{
		x = format[i];
		switch (x)
		{
			case 'c':
				printf("%s", separator);
				print_char(ag);
				separator = ", ";
				break;
			case 'i':
				printf("%s", separator);
				print_int(ag);
				separator = ", ";
				break;
			case 'f':
				printf("%s", separator);
				print_float(ag);
				separator = ", ";
				break;
			case 's':
				printf("%s", separator);
				print_str(ag);
				separator = ", ";
				break;
			default:
				break;
		}
		i++;
	}
	printf("\n");
	va_end(ag);
}

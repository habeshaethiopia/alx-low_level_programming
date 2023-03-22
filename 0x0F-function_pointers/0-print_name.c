#include "function_pointers.h"
/**
 * print_name - aFunction that print a name
 * @name: the name to be printed
 * @f: the function
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == print_name_as_is)
		print_name_as_is(name);
	if (f == print_name_uppercase)
		print_name_uppercase(name);
}

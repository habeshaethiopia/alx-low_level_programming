#include "function_pointers.h"
/**
 * print_name - aFunction that print a name
 * @name: the name to be printed
 * @f: the function
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}

#include "function_pointers.h"
/**
 * int_index - function to search for an integer
 * @array: the name of the array
 * @size: the siz if the array
 * @cmp: pointer for a function
 * Return: index
 */
int int_index(int *array, int size, int(*cmp)(int))
{
	int i, n = 0;

	if (size < 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
			return (i);
	}
	return (n);
}

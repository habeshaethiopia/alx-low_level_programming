#include "function_pointers.h"
/**
 * array_iterator - function that executes afunction
 * @array: the array name
 * @size: size of the array
 * @action: the excuted function
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || array == NULL)
		return;
	for (i = 0; i < size; i++)
		(*action)(array[i]);
}

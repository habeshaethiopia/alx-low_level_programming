#include "search_algos.h"
/**
 * linear_search - search using linear search
 * @array: pointer to the array
 * @size: length of the array
 * @value: the searched
 * Return: the index or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

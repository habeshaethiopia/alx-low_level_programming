#include "search_algos.h"
/**
 * exponential_search - implementation of exponential search
 *
 * @array: the array
 * @size: the array length
 * @value: the searched value
 *
 * Return: the index or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, low = 0, high = 0;

	if (!array)
		return (-1);
	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i *= 2;
	}
	low = i / 2;
	if (i >= size)
		high = size - 1;
	else
		high = i;
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	return (binary_search(array, low, high, value));
}

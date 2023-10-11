#include "search_algos.h"
int binary_search01(int *array, size_t high, size_t low, int value);

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
	return (binary_search01(array, low, high, value));
}
/**
 * binary_search01 - binary search algorithm
 * @array: the array
 * @high: the high index
 * @low: the array  index
 * @value: the searched value
 *
 * Return: the index or -1
 */
int binary_search01(int *array, size_t low, size_t high, int value)
{
	size_t i;
	size_t mid;

	if (!array)
		return (-1);
	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i != high)
				printf(", ");
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}

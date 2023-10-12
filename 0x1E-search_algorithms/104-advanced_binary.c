#include "search_algos.h"
int helper(int *array, int low, int high, int value);

/**
 * advanced_binary - implementation of advanced binary
 * @array: the array
 * @size: the array length
 * @value: the searched value
 *
 * Return: the index or -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (helper(array, 0, size - 1, value));
}
/**
 * helper - afunction to help binary
 *
 * @array: the array
 * @low: the min index
 * @high: the max index
 * @value: searched value
 * Return: the index or -1
 */
int helper(int *array, int low, int high, int value)
{
	int mid, i;

	if (!array)
		return (-1);
	mid = (low + high) / 2;
	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i != high)
			printf(", ");
	}
	printf("\n");
	if (low == high)
		return (-1);
	if (array[mid] == value && array[mid - 1] != value)
		return (mid);
	else if (array[mid] < value)
		return (helper(array, mid + 1, high, value));
	else if (array[mid] >= value)
		return (helper(array, low, mid, value));

	return (-1);
}

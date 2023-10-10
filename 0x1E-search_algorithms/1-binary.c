#include "search_algos.h"
/**
 * binary_search - binary searc algorithm
 * @array: the array
 * @size: the array length
 * @value: the searched
 *
 * Return: the index or -1
 */
int binary_search(int *array, size_t size, int value)
{
	int mid, low, high, i;

	mid = size / 2;
	low = 0;
	high = size;
	if (!array)
		return (-1);
	while (mid != high || mid != low)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
		{
			printf("%d", array[i]);
			if (i != high - 1)
				printf(", ");
		}
		printf("\n");
			if (array[mid] == value)
				return (mid);
			else if (array[mid] < value)
			{
				low = mid + 1;
			}
			else
				high = mid - 1;
		mid = (low + high) / 2;
	}
	return (-1);
}

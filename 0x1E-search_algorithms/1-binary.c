#include "search_algos.h"
/**
 * binary_search - binary search algorithm
 * @array: the array
 * @size: the array length
 * @value: the searched value
 *
 * Return: the index or -1
 */
int binary_search(int *array, size_t size, int value)
{
	int mid, low, high, i;

	low = 0;
	high = size - 1;
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

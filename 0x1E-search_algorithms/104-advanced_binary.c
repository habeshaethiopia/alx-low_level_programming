#include "search_algos.h"
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
		if (array[mid] == value && array[mid - 1] != value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] < value)
			high = mid - 1;
		else
			high = mid;
	}
	return (-1);
}

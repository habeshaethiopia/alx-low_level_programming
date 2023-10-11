#include "search_algos.h"
/**
 * interpolation_search - the algorithm name
 * @array: the array
 * @size: the array length
 * @value: the searched value
 * Return: the index or zero
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;

	if (!array)
		return (-1);

	pos = low + (((double)(high - low) /
				  (array[high] - array[low])) *
				 (value - array[low]));

	while (low < high)
	{
		if (pos > size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
		pos = low + (((double)(high - low) /
					  (array[high] - array[low])) *
					 (value - array[low]));
	}
	if (array[low] == value)
		return (low);
	return (-1);
}

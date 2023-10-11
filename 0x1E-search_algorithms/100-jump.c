#include "search_algos.h"
#include <math.h>
#define min(a, b) ((a) < (b) ? (a) : (b))

/**
 * jump_search - jump search algorithm
 * @array: the array
 * @size: the array length
 * @value: the searched value
 *
 * Return: the index or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;

	if (!array)
		return (-1);

	while (array[(min(step, size) - 1)] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev = step;
		step += sqrt(size);
		if (prev >= size)
			return (-1);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, step);

	while (array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev++;
		if (prev == fmin(step, size))
			return (-1);
	}

	if (array[prev] == value)
		return (prev);

	return (-1);
}

#include "search_algos.h"
#include <math.h>

#define min(a, b) ((a) < (b) ? (a) : (b))
/**
 * jump_list - jump algorithm for linked list
 * @list: the linked list
 * @size: the array length
 * @value: the searched value
 *
 * Return: the node or NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;
	listint_t *tmp = list;

	if (!list)
		return (NULL);

	while (tmp->index < min(step, size))
	{
		printf("Value checked array[%lu] = [%d]\n", prev, tmp->n);
		prev = tmp->index;
		tmp = tmp->next;
		if (prev >= size)
			return (NULL);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, tmp->index);

	while (tmp->n < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, tmp->n);
		prev++;
		tmp = tmp->next;
		if (prev == min(step, size) + 1)
			return (NULL);
	}

	if (tmp->n == value)
		return (tmp);
	return (NULL);
}

#include "search_algos.h"
/**
 * linear_skip - the function
 * @list: the list
 * @value: the value
 * Return: skiplist_t*
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *tmp = list, *prev = NULL;

	if (!list)
		return (NULL);

	while (tmp->express)
	{
		prev = tmp;
		tmp = tmp->express;
		printf("Value checked at index [%lu] = [%d]\n", tmp->index, tmp->n);
		if (tmp->n >= value)
			break;
	}
	if (!tmp->express && tmp->n < value)
	{
		prev = tmp;
		while (tmp->next)
			tmp = tmp->next;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
		   prev->index, tmp->index);
	while (prev->index <= tmp->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}
	return (NULL);
}

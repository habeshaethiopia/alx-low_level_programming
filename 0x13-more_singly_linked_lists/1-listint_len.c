#include "lists.h"

/**
 * listint_len - returns the number of node
 * @h: poiter that points to the first node
 * Return: the no. of elements
 *
 */
size_t listint_len(const listint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}

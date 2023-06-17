#include "lists.h"
/**
 *dlistint_len- the function
 *
 * @h: head pointer
 * Return: lengthe of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}

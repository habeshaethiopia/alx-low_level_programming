#include "lists.h"

/**
 * print_dlistint - the function that prints the node
 * @h: apointer to the head of the list
 * Return: size_t
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	int n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}

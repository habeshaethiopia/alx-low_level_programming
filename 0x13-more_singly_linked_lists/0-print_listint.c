#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t
 * @h: apointer to the head of the the list
 * Return: the size of the poiter
 *
 */
size_t print_listint(const listint_t *h)
{
	int i;

	if (!h)
		return (0);
	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}


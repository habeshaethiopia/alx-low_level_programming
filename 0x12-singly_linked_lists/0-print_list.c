#include "lists.h"

/**
 * print_list - print all elements of the list
 * @h: the head pointer
 * Return: the number of nodes
 *
 */
size_t print_list(const list_t *h)
{
	size_t l = 0;

	if (h->str == NULL)
		printf("[0] (nil)\n");
	while (h != NULL)
	{
		printf("[%u] %s\n", h->len, h->str);
		l++;
		h = h->next;
	}
	return (l);
}

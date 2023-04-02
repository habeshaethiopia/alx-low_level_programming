#include "lists.h"

/**
 * print_list - print all elements of the list
 * @h: the head pointer
 * Return: the number of nodes
 *
 */
size_t print_list(const list_t *h)
{
	int l;

	for (l = 0; h ; l++)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);
		h = h->next;
	}
	return (l);
}

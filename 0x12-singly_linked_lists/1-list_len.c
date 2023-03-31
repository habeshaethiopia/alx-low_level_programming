#include "lists.h"
/**
 * list_len - returns number of elements
 * @h: the poiter to the list
 * Return: size of the list
 *
 *
 */
size_t list_len(const list_t *h)
{
	int l = 0;

	for (l = 0; h; l++)
		h = h->next;
	return (l);
}

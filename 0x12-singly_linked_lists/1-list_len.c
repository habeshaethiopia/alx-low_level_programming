#include "lists.h"
/**
 * list_len - returns number of elements
 * @h: the poiter to the list
 * Rerurns: size of the list
 *
 *
 */
size_t list_len(const list_t *h)
{
	int l = 0;

	for (; h; h = h->next)
		l++;
	return (l);
}

#include "lists.h"

/**
 * find_listint_loop - that finds the loop in a linked list
 * @head: the head
 * Return: the list
 *
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p1, *p2;

	if (!head)
		return (NULL);
	for (p1 = head->next; p1 != NULL; p1 = p1->next)
	{
		if (p1 == p1->next)
			return (end);
		for (p2 = head; p2 != p1; p2 = p2->next)
			if (p2 == p1->next)
				return (end->next);
	}
	return (NULL);
}

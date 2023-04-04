#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at particular index
 * @head: poiner to the head
 * @idx: The index
 * Return: 1 or -1
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int idx)
{
	unsigned int i;
	listint_t *t, *p = *head;

	if (!head)
		return (-1);
	for (i = 0; i < idx - 1&& p; i++)
	{
		p = p->next;
	}
	if (i < idx - 1)
		return (-1);
	else
	{
		if (p->next)
		{
			t = p->next;
			p = p->next->next;
			free(t);
		}
	}
	return (0);
}



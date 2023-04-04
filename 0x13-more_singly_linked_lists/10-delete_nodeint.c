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

	if (!head || !*head)
		return (-1);
	if (idx == 0)
	{
		*head = p->next;
		free(p);
		return (1);
	}
	if (idx == 1)
	{
		p = (*head)->next;
		(*head)->next = p->next;
		free(p);
		return (1);
	}

	for (i = 0; i < idx - 1; i++)
	{
		if (!p)
			return (-1);
		p = p->next;
		t = p->next;

	}
	p->next = t->next;
	free(t);
	return (1);
}



#include "lists.h"
/**
 * insert_dnodeint_at_index- the function to insert the element
 *
 * @h: the head
 * @idx: the  index
 * @n: the value
 * Return: dlistint_t*
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp = *h;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	for (i = 0; i < idx - 1; i++)
	{
		temp = temp->next;
		if (!temp)
			return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (temp != NULL)
	{
		new->next = temp->next;
		if (temp->next->prev)
			temp->next->prev = new;
		temp->next = new;
		new->prev = temp;
	}
	else
		*h = new;
	return (new);
}

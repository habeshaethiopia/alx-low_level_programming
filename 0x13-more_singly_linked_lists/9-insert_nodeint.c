#include "lists.h"
/**
 * insert_nodeint_at_index - insert new node at particular index
 * @head: head pointer
 * @idx: the index
 * @n: the value
 * Return: the pointer for the new none
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n){
	listint_t *new = malloc(sizeof(listint_t));
	unsigned int i;
	listint_t *p;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	p = *head;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (*head);
	}

	for (i = 0; p != NULL; i++)
	{
		if (i == idx - 1)
		{
			new->next = p->next;
			p->next = new;
		}
		p = p->next;
	}
	if (idx > i)
		return (NULL);
	return (new);

}

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

	if (!new || head)
		return (NULL);
	p = *head;
	for (i = 0; i < idx && p; i++)
		p = p->next;
	if (i != idx)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
		p = new;
	else
	{
		new->next = p->next;
		p->next = new;
	}
	return (new);
}

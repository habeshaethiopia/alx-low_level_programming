#include "lists.h"
/**
 * add_nodeint_end - add new node at the end
 * @head: node pointer
 * @n: the value
 * Return: pointer for the new node
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *p = *head;

	if (!head || !new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (!*head)
		*head = new;
	else
	{
		while (p->next)
			p = p->next;
		p->next = new;
	}
	return (new);
}

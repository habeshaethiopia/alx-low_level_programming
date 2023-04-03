#include "lists.h"

/**
 * pop-listint - fuction to delete the first node of the list
 * @head: address of the first node
 * Return: the node value
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *p;
	int n;

	if (!head || !*head)
		return (0);
	p = *head;
	n = p->n;
	*head = p->next;
	free(p);
	return (n);
}

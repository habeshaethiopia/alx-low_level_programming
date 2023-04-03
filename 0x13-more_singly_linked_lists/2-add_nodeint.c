#include "lists.h"

/**
 * add_nodeint - add new node to the list
 * @head: pointer to the list
 * @n: the value
 * Return: the address for the new class
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (!new || !head)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		new->next = (*head);
		*head = new;
	}
	return (new);
}

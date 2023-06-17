#include "lists.h"
/**
 * add_dnodeint_end- function
 * @head: head pointer
 * @n: the number
 * Return: pointer to the head of the list on success
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end;
	dlistint_t *temp;

	if (!*head)
	{
		*head = malloc(sizeof(dlistint_t) * 1);
		if (!*head)
			return (NULL);
		(*head)->n = n;
		return (*head);
	}
	temp = *head;
	end = malloc(sizeof(dlistint_t) * 1);
	end->n = n;
	if (!end)
		return (NULL);
	while (temp->next)
		temp = temp->next;
	temp->next = end;
	end->next = NULL;
	end->prev = temp;

	return (*head);
}

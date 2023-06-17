#include "lists.h"
/**
 * add_dnodeint - function to add the node at the begining
 * @head: the list head
 * @n:value
 * Return: head pointer
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *add;

	add = *head;
	*head = malloc(sizeof(dlistint_t) * 1);
	if (!*head)
		return (NULL);
	(*head)->n = n;
	(*head)->next = add;


	return (*head);
}

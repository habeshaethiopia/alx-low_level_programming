#include "lists.h"

/**
 * reverse_listint - reverse the list
 * @head: the head of the array
 * Return: pointer to the revarsed list head
 *
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p1, *p2;

	if (!head || !*head)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	p1 = *head;
	p2 = p1->next;
	*head = p2->next;
	p1->next = NULL;

	while ((*head)->next != NULL)
	{
		p2->next = p1;
		p1 = p2;
		p2 = *head;
		*head = (*head)->next;
	}
	(*head)->next = p2;
	p2->next = p1;
	return (*head);
}

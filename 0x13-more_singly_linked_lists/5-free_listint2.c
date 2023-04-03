#include "lists.h"
/**
 * free_listint2 - frees a listint_t
 * @head: pointer to listinr_t list
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *p;

	if (head)
	{
		while (*head)
		{
			p = (*head)->next;
			free(*head);
			*head = p;
		}
		head = NULL;
	}
}

#include "lists.h"
/**
 * free_dlistint - function
 *
 * @head: the head
 */
void free_dlistint(dlistint_t *head)
{

	while (head)
	{
		head = head->next;
		free(head->prev);
	}
}

#include "lists.h"
/**
 * free_dlistint - function
 *
 * @head: the head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (!head)
		return;
	while (head)
	{
		temp = head;
		free(temp);
		head = head->next;
	}
	head = NULL;
}

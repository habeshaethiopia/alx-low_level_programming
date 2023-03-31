#include "lists.h"
/**
 * free_list - functions that frees the list
 * @head: the head of the single linked list
 *
 */
void free_list(list_t *head)
{
	if (head)
	{
		if (head->next)
		{
			free_list(head->next);
			head->next = NULL;
		}

		free(head->str);
		free(head);
	}
}


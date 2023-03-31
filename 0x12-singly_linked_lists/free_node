#include "lists.h"
/**
 * free_list - functions that frees the list
 * @head: the head of the single linked list
 *
 */
void free_list(list_t *head)
{
	list_t *delete, *p;

	delete = head;
	while (delete)
	{
		p = delete->next;
		free(delete->str);
		free(delete);
		delete = p;
	}
	head = NULL;
}

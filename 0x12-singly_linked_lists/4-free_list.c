#include "lists.h"
/**
 * free_list - functions that frees the list
 * @head: the head of the single linked list
 *
 */
void free_list(list_t *head)
{
	list_t *position, *next;

	position = head;

	while (position != '\0')
	{
		next = position->next;
		free(position->str);
		free(position);
		position = next;
	}
	head = '\0';
}

#include "lists.h"
/**
 * get_nodeint_at_index - return the nth node of a liastint_tlinked list
 * @head: the head fo the list
 * @index: the index;
 * Return: the value at the index
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);
	for (i = 0; i < index && head; i++)
	{
		head = head->next;
	}
	return (head);
}


#include "lists.h"
/**
 * get_dnodeint_at_index - Get the dnodeint at index object
 *
 * @head:the arguments to the the function
 * @index:the arguments to the the function
 * Return: dlistint_t*
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head; i++, head = head->next)
	{
	}
	if (!head)
		return (NULL);
	else
		return (head);
}

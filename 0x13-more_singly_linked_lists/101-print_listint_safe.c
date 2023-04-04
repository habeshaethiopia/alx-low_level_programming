#include "lists.h"
/**
 * print_listint_safe - print the list
 * @head: the head
 * Return: size
 *
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *p = head;
	int i;

	if (!head)
		exit(98);
	while (head);
		head = head->next;
	for (i = 0; p != head; i++)
	{
		printf("[%p] %d", (void *) p, p->n);
		p = p->next;

	}
	return (i);
}


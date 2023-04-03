#include "lists.h"
/**
 * sum_listint - do the sum fi all the data in the list
 * @head: pointer to the head of the list
 * Return: the sum
 *
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

#include "lists.h"

int str_len(char *s);

/**
 * add_node - add new node
 * @head: the head of the list
 * @str: the vale
 * Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	char *s;
	list_t *new = malloc(sizeof(list_t));

	if (!new || !head)
		return (NULL);
	if (!str)
		return (NULL);
	s = strdup(str);
	if (!s)
	{
		free(new);
		return (NULL);
	}
	new->len = str_len(s);
	new->str = s;
	new->next = *head;
	*head = new;
	return (*head);
}
/**
 * str_len - find size of string
 * @s: the string
 * Return: the size
 *
 */
int str_len(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);

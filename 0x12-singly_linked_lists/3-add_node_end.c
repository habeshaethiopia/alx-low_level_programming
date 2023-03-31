#include "lists.h"
int _strlen (char *s);
/**
 * add_node_end - add end of the node
 * @head: the list head
 * @str: the value
 * Return: the pointer to the new element
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *s;
	list_t *new = malloc(sizeof(list_t)), *p;

	if (!str || !new)
		return (NULL);
	s = strdup(str);
	if (!s)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(s);
	new->str = s;
	new->next = NULL;
	p = *head;
	if (!*head)
	{
		*head = new;
		return (new);
	}
	while (p->next)
		p = p->next;

	p->next = new;

	return (new);
}
/**
 * _strlen - this functions prints the lenght of a string
 (* a blank line
 *@s: string to print.
 (* section header: the header of this function is holberton.h)*
 * Return: retunrn the lenght in int
 */
int _strlen(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (1 + _strlen(s));
	}
	else
		return (0);
}

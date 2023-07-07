#include "hash_tables.h"
/**
 * shash_table_create - a hash table creation like in php
 *
 * @size: the size of the hash table
 * Return: shash_table_t*
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;

	table = malloc(sizeof(shash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	table->array = malloc(size * sizeof(shash_node_t));
	if (!table->array)
	{
		free(table);
		return (NULL);
	}
	table->shead = NULL;
	table->stail = NULL;
	return (table);
}
/**
 * shash_table_set - a function to set the key value pair
 *
 * @ht: the table
 * @key: the key
 * @value: the value
 * Return: 0 or 1
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *curr, *New;

	if (!ht || !key || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	curr = ht->array[index];
	while (curr)
	{
		if (strcmp(curr->key, key) == 0)
		{
			free(curr->value);
			curr->value = strdup(value);
			if (!curr->value)
				return (0);
			return (1);
		}
		curr = curr->next;
	}

	New = malloc(sizeof(shash_node_t));
	if (New == NULL)
		return (0);
	New->key = strdup(key);
	if (!New->key)
		return (0);
	New->value = strdup(value);
	if (!New->value)
		return (0);
	New->next = ht->array[index];
	New->sprev = NULL;
	New->next = NULL;
	ht->array[index] = New;
	if (ht->shead == NULL)
	{
		ht->shead = New;
		ht->stail = New;
		return (1);
	}
	place(ht, New);
	return (1);
}
/**
 * place - function to place the node in sorted way
 *
 * @table: The variables
 * @node: The variables
 */
void place(shash_table_t *table, shash_node_t *node)
{
	shash_node_t *curr, *prev;

	if (strcmp(node->key, table->shead->key) < 0)
	{
		node->snext = table->shead;
		table->shead->sprev = node;
		table->shead = node;
	}
	else
	{
		curr = table->shead;
		while (curr)
		{
			prev = curr->sprev;
			if (strcmp(node->key, curr->key) < 0)
			{
				prev->snext = node;
				curr->sprev = node;
				node->snext = curr;
				node->sprev = prev;
				return;
			}
			prev = curr;
			curr = curr->snext;
		}
		prev->snext = node;
		node->sprev = prev;
		table->stail = node;
	}
}
/**
 * shash_table_get - function to find the key value paire
 *
 * @ht: the hash table
 * @key: the key
 * Return: char*
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *curr;
	unsigned long int i;

	if (ht == NULL || key == NULL)
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	curr = ht->array[i];
	while (curr)
	{
		if (strcmp(curr->key, key) == 0)
			return (curr->value);
		curr = curr->next;
	}
	return (NULL);
}
/**
 * shash_table_print - the function to print the entire key value paire in the hash table
 *
 * @ht: the table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *curr;
	int f = 0;

	if (ht == NULL)
		return;
	curr = ht->shead;
	printf("{");
	while (curr)
	{
		if (f)
			printf(", ");
		printf("'%s': '%s'", curr->key, curr->value);
		f = 1;
		curr = curr->snext;
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - the function to print the entire key value paire in the hash table
 *
 * @ht: the table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *curr;
	int f = 0;

	if (ht == NULL)
		return;
	curr = ht->stail;
	printf("{");
	while (curr)
	{
		if (f)
			printf(", ");
		printf("'%s': '%s'", curr->key, curr->value);
		f = 1;
		curr = curr->sprev;
	}
	printf("}\n");
}
/**
 * shash_table_delete - the function to delete the entire table
 *
 * @ht: the table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *curr, *temp;
	unsigned long int i;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			curr = ht->array[i];
			while (curr)
			{
				temp = curr;
				free(curr->key);
				if (curr->value)
					free(curr->value);
				curr = curr->next;
				free(temp);
			}
		}
	}
	free(ht->array);
	free(ht);
}

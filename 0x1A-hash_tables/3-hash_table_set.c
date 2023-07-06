#include "hash_tables.h"
/**
 * hash_table_set- afunction that add elemnts to the table
 *
 * @ht: the hash table
 * @key: the key
 * @value: the value
 * Return: 1 or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index(key, ht->size);
	hash_node_t *item, *curr;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	curr = ht->array[index];
	for (; curr; curr = curr->next)
	{
		if (strcmp(key, curr->key) == 0)
		{
			strcpy(curr->value, value);
			return (1);
		}
	}
	item = malloc(sizeof(hash_node_t));
	if (!item)
		return (0);
	item->key = strdup(key);
	item->value = strdup(value);
	if (item->key == NULL || item->value == NULL)
		return (0);
	item->next = ht->array[index];
	ht->array[index] = item;
	return (1);
}

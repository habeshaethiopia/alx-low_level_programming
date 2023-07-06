#include "hash_tables.h"
/**
 * hash_table_get - function to retive the data
 *
 * @ht:the hash table
 * @key:the key
 * Return: char*
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int i;
	hash_node_t *curr;

	if (!ht || !key)
		return (NULL);
	i = key_index(key, ht->size);
	curr = ht->array[i];
	while (curr)
	{
		if (strcmp(curr->key, key) == 0)
			return (curr->value);
		curr = curr->next;
	}
	return (NULL);
}

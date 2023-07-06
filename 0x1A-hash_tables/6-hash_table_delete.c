#include "hash_tables.h"
/**
 * hash_table_delete- afunction to clean all ths space allocated for hashing
 *
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *curr, *temp;

	if (ht)
	{
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
}

#include "hash_tables.h"
/**
 * hash_table_print - function to print the overall table of the hash
 *
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *curr;
	int flag = 0;

	if (ht)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i])
			{
				curr = ht->array[i];
				while (curr)
				{
					flag == 1 ? printf(", ") : flag;
					printf("'%s': '%s'", curr->key, curr->value);
					flag = 1;
					curr = curr->next;
				}
			}
		}
		printf("}\n");
	}
}

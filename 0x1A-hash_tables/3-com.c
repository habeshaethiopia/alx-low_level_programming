#include "hash_tables.h"
/**
 * hash_table_set - add an element to a hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *new, *current;

    if (ht == NULL || key == NULL || value == NULL)
        return 0;

    index = key_index((const unsigned char *)key, ht->size);

    current = ht->array[index];
    while (current != NULL)
    {
        if (strcmp(current->key, key) == 0)
        {
            free(current->value);
            current->value = strdup(value);
            if (current->value == NULL)
                return 0;
            return 1;
        }
        current = current->next;
    }

    new = malloc(sizeof(hash_node_t));
    if (new == NULL)
        return 0;

    new->key = strdup(key);
    if (new->key == NULL)
    {
        free(new);
        return 0;
    }

    new->value = strdup(value);
    if (new->value == NULL)
    {
        free(new->key);
        free(new);
        return 0;
    }

    new->next = ht->array[index];
    ht->array[index] = new;

    return 1;
}
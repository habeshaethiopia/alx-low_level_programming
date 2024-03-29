#include "hash_tables.h"
/**
 * key_index - afunction to find the approprate index of the key
 *
 * @key: the Key
 * @size:the value
 * Return: unsigned long int
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}

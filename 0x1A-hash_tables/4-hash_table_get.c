#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: the hash table
 * @key: the key
 *
 * Return: the value associated with the element
 * or NULL if key couldn’t be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long index;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
	{
		return (NULL);
	}

	return (ht->array[index]->value);
}

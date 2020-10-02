#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hash table
 *
 * Return: na
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp = NULL, *head = NULL;
	unsigned int i;

	if (ht == NULL)
	{
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];
		while (head)
		{
			temp = head;
			free(temp->key);
			free(temp->value);
			head = head->next;
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
	(void)temp;
	(void)head;
}

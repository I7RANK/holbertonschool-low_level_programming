#include "hash_tables.h"

void print_nodes(hash_node_t *head);

/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table
 *
 * Return: na
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp = NULL;
	unsigned int i, j = 0;

	if (ht == NULL || ht->array)
	{
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			temp = ht->array[i];
			while (temp)
			{
				if (j)
					printf(", ");
				else
					j = 1;
				printf("'%s': '%s'", temp->key, temp->value);
				temp = temp->next;
			}
		}
	}
	printf("}\n");
}

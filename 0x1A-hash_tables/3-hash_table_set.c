#include "hash_tables.h"

void _strcpy(char *d, char *src);

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: is the pointer to the hash table
 * @key: is the ke
 * @value: is the value
 *
 * Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *add_node = NULL, *temp = NULL;
	unsigned long index;

	if (ht == NULL || key == NULL || value == NULL || !strcmp(key, ""))
	{
		return (0);
	}

	index = key_index((const unsigned char *)key, 1024);

	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}

	add_node = new_node(key, value);
	if (add_node == NULL)
	{
		return (0);
	}

	add_node->next = ht->array[index];
	ht->array[index] = add_node;

	return (1);
}

/**
 * new_node - inicializates a new node
 * @key: is the key
 * @value: is the value
 *
 * Return: the new node or NULL if fails
*/
hash_node_t *new_node(const char *key, const char *value)
{
	hash_node_t *new_node = NULL;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	/* for (i = 0; key[i]; i++)
	{}

	new_node->key = malloc(sizeof(char) * i + 1); */
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}
	/* _strcpy(new_node->key, (char *)key); */

	/* for (i = 0; value[i]; i++)
	{}

	new_node->value = malloc(sizeof(char) * i + 1); */
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}
	/* _strcpy(new_node->value, (char *)value); */

	new_node->next = NULL;

	return (new_node);
}

/**
 * _strcpy - copys one string
 * @d: destiny string
 * @src: source string
 *
 * Return: na
*/
void _strcpy(char *d, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		d[i] = src[i];
	}
	d[i] = '\0';
}

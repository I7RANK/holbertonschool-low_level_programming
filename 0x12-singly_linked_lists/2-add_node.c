#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @h: the pointer to the list
 *
 * Return: address of the new elemts or NULL if it faliled
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;
	int i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);

	for (i = 0; str[i]; i++)
	{}
	new->len = i;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		new->next = *head;
		*head = new;
	}

	return (*head);
}

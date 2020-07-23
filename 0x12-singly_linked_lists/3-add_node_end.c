#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: the pointer to the head
 * @str: is a string to add
 *
 * Return: the address of the new nodes
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = NULL, *temp = NULL, *address = NULL;
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
		return (new);
	}
	else
		temp = *head;

	/* here I find the last node */
	for (i = 0; temp != NULL; i++)
	{
		address = temp;
		temp = temp->next;
	}
	address->next = new;

	return (new);
}

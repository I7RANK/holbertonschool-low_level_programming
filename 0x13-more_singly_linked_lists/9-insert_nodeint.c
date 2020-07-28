#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: is the header of the linked list
 * @idx: is the index of the node, starting at 0
 * @n: the num of the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = NULL, *new = NULL, *address = NULL;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (NULL);

	temp = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (new);
	}


	for (i = 0; temp; i++)
	{
		if (i == idx)
		{
			address->next = new;
			new->next = temp;
			return (new);
		}
		address = temp;
		temp = temp->next;
	}

	if (i == idx)
	{
		address->next = new;
		return (new);
	}

	return (NULL);
}

#include "lists.h"

/**
 * add_node - adds the node in the list
 * @i: the index of the node where is @temp
 * @idx: the possition where to put the new node
 * @temp: an node of the list
 * @new: the new node
 *
 * Return: the address of the new node
*/
dlistint_t *add_node(int i, int idx, dlistint_t *temp, dlistint_t *new)
{
	if (i == idx)
	{
		temp->prev->next = new;
		new->next = temp;
		new->prev = temp->prev;
		temp->prev = new;
		return (new);
	}
	i++;
	if (i == idx)
	{
		new->prev = temp;
		temp->next = new;
		return (new);
	}

	return (NULL);
}

/**
 * insert_dnodeint_at_index - adds a new node at a given position.
 * @h: the header of a list
 * @idx: is the index where put the new node, starting from 0
 * @n: the value of the new node
 *
 * Return: the address of the node added or return NULL if no is added
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = NULL, *new = NULL;
	unsigned int i;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		printf("Error: Can't malloc\n");
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (idx == 0)
	{
		if (*h == NULL)
		{
			*h = new;
			return (new);
		}
		new->next = *h;
		*h = new;
		return (new);
	}

	temp = *h;

	while (temp->prev)
	{
		temp = temp->prev;
	}

	for (i = 0; temp->next && i < idx; i++)
	{
		temp = temp->next;
	}

	return (add_node(i, idx, temp, new));
}

#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: the header of a list
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = NULL;
	int i;

	if (h == NULL)
	{
		return (0);
	}

	temp = h;

	while (temp->prev)
	{
		temp = temp->prev;
	}

	for (i = 1; temp->next; i++)
	{
		temp = temp->next;
	}

	return (i);
}

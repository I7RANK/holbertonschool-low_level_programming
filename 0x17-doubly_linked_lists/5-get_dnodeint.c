#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linked dlistint_t list.
 * @head: the header of a list
 * @index: is the index of the node, starting from 0
 *
 * Return: the node or if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = NULL;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}

	temp = head;

	while (temp->prev)
	{
		temp = temp->prev;
	}

	for (i = 0; temp->next && i < index; i++)
	{
		temp = temp->next;
	}
	if (i == index)
	{
		return (temp);
	}

	return (NULL);
}

#include "lists.h"

/**
 * sum_dlistint - returns the sum of all nodes in a linked dlistint_t list.
 * @head: the header of a list
 *
 * Return: the node or if the node does not exist, return NULL
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;
	int sum = 0;

	if (head == NULL)
	{
		return (sum);
	}

	temp = head;

	while (temp->prev)
	{
		temp = temp->prev;
	}

	while (temp->next)
	{
		sum += temp->n;
		temp = temp->next;
	}
	sum += temp->n;

	return (sum);
}

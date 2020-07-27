#include "lists.h"

/**
 * listint_len - returns the number of elements in a listint_t list
 * @h: is the header of the linked list
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	int i;

	if (h != NULL)
		temp = h;

	for (i = 0; temp; i++)
	{
		temp = temp->next;
	}

	return (i);
}

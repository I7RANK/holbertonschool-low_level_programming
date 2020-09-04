#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: the header of a list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
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
		printf("%d\n", temp->n);
		temp = temp->next;
	}

	printf("%d\n", temp->n);

	return (i);
}

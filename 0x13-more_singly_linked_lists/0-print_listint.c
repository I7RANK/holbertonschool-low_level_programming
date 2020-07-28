#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: is the header of the linked list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp = NULL;
	int i;

	if (h == NULL)
		return (0);
	temp = h;

	for (i = 0; temp; i++)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}

	return (i);
}

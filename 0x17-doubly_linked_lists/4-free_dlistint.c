#include "lists.h"

/**
 * free_dlistint - frees a linked dlistint_t list.
 * @head: the header of a list
 *
 * Return: na
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	{
		return;
	}
	while (head->prev)
	{
		head = head->prev;
	}

	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}

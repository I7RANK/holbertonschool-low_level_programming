#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: is the header of the linked list
 *
 * Return: na
 */
void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		free(head);
	}
}

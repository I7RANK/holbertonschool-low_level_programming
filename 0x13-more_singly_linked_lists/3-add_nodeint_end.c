#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: is the header of the linked list
 * @n: it's the number to add at the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = NULL, *end, *htemp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	htemp = *head;

	while (htemp)
	{
		end = htemp;
		htemp = htemp->next;
	}


	end->next = new;

	return (new);
}

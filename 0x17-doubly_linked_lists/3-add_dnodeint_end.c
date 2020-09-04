#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: the header of a list
 * @n: the value of the new node
 *
 * Return: the address of the new node or NULL if no was added
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = NULL, *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		printf("Error: Can't malloc\n");
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	temp = *head;

	while (temp->next)
	{
		temp = temp->next;
	}

	new->prev = temp;
	temp->next = new;

	return (new);
}

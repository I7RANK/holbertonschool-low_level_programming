#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: the header of a list
 * @n: the value of the new node
 *
 * Return: the address of the new node or NULL if no was added
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
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

	while (temp->prev)
	{
		temp = temp->prev;
	}

	new->next = temp;
	temp->prev = new;

	return (new);
}

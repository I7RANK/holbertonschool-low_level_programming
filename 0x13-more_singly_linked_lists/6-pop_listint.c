#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head node's data(n)
 * @head: is the header of the linked list
 *
 * Return: the num
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num = 0;

	if (head == NULL || *head == NULL)
		return (0);

	temp = (*head)->next;
	num = (*head)->n;
	free(*head);
	*head = temp;

	return (num);
}

#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a linked list
 * @head: is the header of the linked list
 *
 * Return: the node
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (head)
		temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}

#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given position
 * @head: is the header of the linked list
 * @index: is the index of the node, starting at 0
 *
 * Return: the address of the new node, or NULL if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = NULL, *address = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		if (temp->next == NULL)
		{
			if (*head)
				free(*head);
			*head = NULL;
		}
		else
		{
			*head = temp->next;
			free(temp);
			temp = NULL;
		}
		return (1);
	}

	for (i = 0; temp; i++)
	{
		if (i == index)
		{
			if (temp->next == NULL)
				address->next = NULL;
			else
				address->next = temp->next;
			free(temp);
			temp = address->next;
			return (1);
		}
		address = temp;
		temp = temp->next;
	}
	return (-1);
}

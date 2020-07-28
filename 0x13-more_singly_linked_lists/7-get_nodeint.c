#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: is the header of the linked list
 * @index: is the index of the node, starting at 0
 *
 * Return: the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp, *node = NULL;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (NULL);

	temp = head;

	for (i = 0; temp; i++)
	{
		if (i == index)
		{
			node = temp;
			break;
		}
		temp = temp->next;
	}

	return (node);
}

#include "lists.h"

/**
 * free_node - frees the node in the list
 * @i: the index of the node where is @temp
 * @index: the possition where to free the node
 * @temp: an node of the list
 * @head: the header of the linked list
 *
 * Return: the address of the new node
*/
int free_node(int i, int index, dlistint_t *temp, dlistint_t **head)
{
	if (i == index)
	{
		if (i == 0)
		{
			if (temp->next)
			{
				temp->next->prev = NULL;
				*head = temp->next;
			}
			else
				*head = NULL;
			free(temp);
		}
		else if (temp->next)
		{
			temp->next->prev = temp->prev;
			temp->prev->next = temp->next;
			free(temp);
		}
		else
		{
			temp->prev->next = NULL;
			free(temp);
		}
		return (1);
	}

	return (-1);
}

/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list.
 * @head: the header of a list
 * @index: is the index of the node, starting from 0
 *
 * Return: the node or if the node does not exist, return NULL
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = NULL;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}
	temp = *head;

	while (temp->prev)
	{
		temp = temp->prev;
	}

	for (i = 0; temp->next && i < index; i++)
	{
		temp = temp->next;
	}

	return (free_node(i, index, temp, head));
}

#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: the pointer to the head
 * @str: is a string to add
 *
 * Return: na
 */
void free_list(list_t *head)
{
	list_t *del;

	while (head)
	{
		del = head;
		free(del->str);
		free(del);
		head = head->next;
	}
}

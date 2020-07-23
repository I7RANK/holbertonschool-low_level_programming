#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: the pointer to the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL || h->str == '\0')
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}

	return (i);
}

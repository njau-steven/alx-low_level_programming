#include "lists.h"
/**
 * list_len - A function to list linked list lengh
 * @h: pointer in the linked list
 * Return: Nothing
 */
size_t list_len(const list_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}

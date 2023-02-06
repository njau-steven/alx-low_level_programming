#include <stdio.h>
#include "lists.h"

/**
 * listint_len - cFunction that returns number of elements in a list
 * listint_t: list
 * @h: list element
 * Return: Always 0.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}

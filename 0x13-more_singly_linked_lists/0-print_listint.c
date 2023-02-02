#include "lists.h"
#include <stdio.h>
/**
 * print_listint - A function that prints all elements of a list
 * @h: pointer
 * Return: nothing
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}

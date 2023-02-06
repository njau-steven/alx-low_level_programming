#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - A function that adds a node to a list
 * listint_t: list
 * @head: list head
 * @n: list elements
 * Return: Always 0
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = *head;
	*head = malloc(sizeof(listint_t));
	if (!*head)
		return (NULL);
	(*head)->n = n;
	(*head)->next = new_node;
	return (*head);
}

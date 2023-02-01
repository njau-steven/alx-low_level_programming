#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - A function that add nodes elements to a linked lists
 * @head: pointer
 * @str: pointer
 * Return: Nothing
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int length = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	while (str[length])
		length++;
	temp->len = length;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}

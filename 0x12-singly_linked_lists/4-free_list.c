#include "lists.h"
/**
 * free_list - A function that frees all elements in alinked list
 * @head: pointer to head element of list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}

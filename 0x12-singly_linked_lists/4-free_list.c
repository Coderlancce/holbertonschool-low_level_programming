#include "lists.h"

/**
 * free_list - free the linked list
 * @head: pointer to start of linked list
 *
 * Return: none
 */

void free_list(list_t *head)
{
	if (head->str)
		free(head->str);
	if (head->next)
		free_list(head->next);
	free(head);
}

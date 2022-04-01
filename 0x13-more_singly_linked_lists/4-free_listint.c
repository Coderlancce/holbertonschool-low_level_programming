#include "lists.h"

/**
 * free_listint - free linked listint
 * @head: pointer head
 *
 * Return: none
 */

void free_listint(listint_t *head)
{
	if (head->next)
		free_listint(head->next);
	free(head);
}

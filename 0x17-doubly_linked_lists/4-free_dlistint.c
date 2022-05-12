#include "lists.h"

/**
 * free_dlistint - free a doble linked list
 * @head: pointer to head of the doble linked list
 *
 * Return: none
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head)
	{
		current = head->next;
		free(head);
		head = current;
	}
}

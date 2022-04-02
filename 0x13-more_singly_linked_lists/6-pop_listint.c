#include "lists.h"

/**
 * pop_listint - Removing the first item of a list
 * @head: doble pointer to pointer head
 *
 * Return: Value of a node delete
 */

int pop_listint(listint_t **head)
{
	int value = 0;
	listint_t *next_node = NULL;

	if (*head == NULL)
	{
		return (0);
	}

	next_node = (*head)->next;
	value = (*head)->n;
	free(*head);
	*head = next_node;

	return (value);
}

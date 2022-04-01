#include "lists.h"

/**
 * free_listint2 - funtion free start in doble pointer head
 * @head: doble pointer to pointer head
 *
 * Return: none
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!(head && *head))
		return;
	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}

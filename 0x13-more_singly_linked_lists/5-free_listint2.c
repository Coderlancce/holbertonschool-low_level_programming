#include "lists.h"

/**
 * free_listint2 - funtion free start in doble pointer head
 * @head: doble pointer to pointer head
 *
 * Return: none
 */

void free_listint2(listint_t **head)
{
	if (!*head || !head)
		return;

	free_listint2(&(*head)->next);
	free(*head);
	*head = NULL;
}

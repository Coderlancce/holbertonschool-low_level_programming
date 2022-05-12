#include "lists.h"

/**
 * add_dnodeint - add a new node to start doble linked list
 * @head: doble pointer to doble linked list
 * @n: data to insert in the new node
 *
 * Return: doble linked list with the added data
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}

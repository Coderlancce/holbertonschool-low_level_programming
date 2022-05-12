#include "lists.h"

/**
 * add_dnodeint_end - add a node to end of list
 * @head: doble pointer to start doble linked list
 * @n: data to insert
 *
 * Return: new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tmp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	tmp = *head;

	if (!tmp)
		*head = new_node;
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new_node;
		new_node->prev = tmp;
	}

	return (new_node);
}

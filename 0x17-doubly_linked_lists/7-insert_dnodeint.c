#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node in position idx
 * @h: doble pointer to head
 * @idx: position to insert
 * @n: data to new node
 *
 * Return: the node temporal insert
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h;
	dlistint_t *new_node;
	unsigned int i = 1;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx > i; i++)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}
	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	new_node->next = tmp->next;
	new_node->prev = tmp;
	tmp->next->prev = new_node;
	tmp->next = new_node;
	return (new_node);
}
